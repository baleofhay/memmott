<?php
    class Db{
        public $conn;
        public $result;
        
        public function __construct($database="",$user="",$pass="") {
            if($user == ""){
                //if no user get the default auth from dbauth
                include_once 'config/dbauth.inc';
            }
            //IMPORTANT NOTE: To change which server you connect to you have to edit the freetds driver config located: /etc/freetds/freetds.conf
            //You can specify many servers in that freetds.conf file and then in the odbc_connect spcify under "servername=<name of server instance>" 
            //that you named in the freetds conf file.  But you will need to specify the user as user@newserver.com
            $this->conn = odbc_connect("Driver=FreeTDS;Servername=SERVER;Port=1433;Database=$database", $user, $pass, SQL_CUR_USE_ODBC);
            //$conn=odbc_connect('SERVER',$user,$pass);
            if (!$this->conn)
              {exit("Connection Failed: " . $this->conn);}
        }
        
        public function runQuery($query){
            $rs=odbc_exec($this->conn,$query);
            if (!$rs)
              {
                echo odbc_error($conn);
                exit;
              }
            else
                $this->result = $rs;
        }
        
        public function fetchRow(){
            return odbc_fetch_array($this->result);
        }
        public function affected_rows(){
            //This doesn't work with mssql BOO
            return odbc_num_rows($this->result);
        }
        public function getHTML($options=""){
            return odbc_result_all($this->result,$options);
        }
        
    }

?>