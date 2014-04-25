<?php
    
    //Put in the includes for the DB object that will be created
    //Among other includes such as auth.inc
    include_once 'objects/auth.inc';
    include_once 'objects/db.inc';
    include_once 'objects/init.inc';
    
    /*
     * This is the main function for the search page
     * all the HTML will be in this function
     * and other functions in this file will be the ajax calls
     */

    function main(){
        include_once("objects/pheader.inc");
        //PHP serverside stuff here
        
        
        //HTML stuff below here
        ?>
            <h1>Reports Page will go here!</h1>
           
        
       
        <?php
        include_once("objects/footer.inc");
    }
    /*
     * This function will get the full cow info and pass it back in XML
     */
    function getFullList(){
        
        $database = 'cv1001';
        echo "Cows here!";
        $db = new Db("$database");
        $query="SELECT * FROM cattles WHERE VisualID < 1001 ORDER BY VisualID, RFID, UID";
        $db->runQuery($query);
        //while($row = $db->fetchRow()){
          //  print_r($row);
        //}
        $tablestyle = "style='border:solid 1px;'";
        echo $db->getHTML($tablestyle);
    }
    

?>