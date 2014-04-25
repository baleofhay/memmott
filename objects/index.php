<?php 
	echo "I am testing this page";
        
        //phpinfo();
        // SQL Azure supports tabular data stream (TDS) protocol client version 7.3 or later
// @see http://msdn.microsoft.com/en-us/library/ee336245.aspx

// On unix, we can connect using open-source FreeTDS (http://www.freetds.org/).
// Replace XXX with your database information.
$serverName = 'ifqr8r9ijf.database.windows.net';
$user = "rfid@$serverName";
$pass = 'j0gtek!23';
$database = 'cv1001';
        
ini_set('display_errors', 1);       
  echo "BLA";      
echo "<html><body>";
//The last argument changes the cursor to use, which will speed things up a TON
    //$conn = odbc_connect('SERVER1001', $user, $pass, SQL_CUR_USE_ODBC); //This will use the predefined Connection String stored in /etc/odbc.ini
//This will be able to dynamically switch database used!!!
    $conn = odbc_connect("Driver=FreeTDS;Servername=SERVER;Port=1433;Database=$database", $user, $pass, SQL_CUR_USE_ODBC);
      //$conn=odbc_connect('SERVER',$user,$pass);
if (!$conn)
  {exit("Connection Failed: " . $conn);}
$sql="SELECT * FROM cattles WHERE VisualID = 1001 ORDER BY VisualID, RFID, UID";
$rs=odbc_exec($conn,$sql);
if (!$rs)
  {
    echo odbc_error($conn);
    exit;
  }
echo "<table><tr>";

$i = 0;
while (odbc_fetch_row($rs))
  {
    $i++;
    if($i == 1){
        $name = odbc_field_name($rs, 1);
        $name2 = odbc_field_name($rs, 2);
        $name3 = odbc_field_name($rs, 3);
        echo "<th>$name</th>";
        echo "<th>$name2</th><th>$name3</th></tr>"; 
    }
  $compname=odbc_result($rs,1);
  
  $conname=odbc_result($rs,2);
  $visualid=odbc_result($rs,3);
  echo "<tr><td>$compname</td>";
  echo "<td>$conname</td><td>$visualid</td></tr>";
  }
  echo odbc_error();
odbc_close($conn);
echo "</table>";
echo "</body></html>"
       

?>
