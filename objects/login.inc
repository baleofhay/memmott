<?php

/*
 * This is going to be an ajax listener to login people
 */
include_once 'objects/db.inc';
include_once 'objects/init.inc';

/*
 * This is the main function which is a false function
 */
function main(){
    echo "invalid call to login processor";
}
/*
 * This is the call that will be used to login someone
 */
function logmein(){
    //Database for users is useradmin
    session_start();
    //it has a userinfo table in it
    //userinfo has the definition of (UID, FirstName, LastName, DBName, Username, Password)
    $username = addslashes($_POST[username]);
    $pass = addslashes($_POST[password]);
    $db = new Db("useradmin");
    $passhash = md5($pass . "mysaltiness");
    $query = "SELECT UID, FirstName, DBName FROM userinfo WHERE Username = '$username' AND Password = '$passhash'";
    $db->runQuery($query);
    if($row = $db->fetchRow()){
        $uid = $row[UID];
        $firstname = $row[FirstName];
        $dbname = $row[DBName];
        $_SESSION[uid] = $uid;
        $_SESSION[firstname] = $firstname;
        $_SESSION[dbname] = $dbname;
        $_SESSION[username] = $username;
        echo "Logged In!";
    }
    else{
        echo "Bad Username or Password";
    }
    
    //echo "Logged in";
    //if login is good set $_SESSION[username], userdb, and firstname.
    
}
/*
 * This function will unset the session variables loggin out the user
 */
function logout(){
    session_start();
    session_unset();
    session_destroy();
    echo "logged out";
}

/*
 * This function will return the status, if needed, because we will be using
 * session variables to see if someone is logged in
 */
function getLoginStatus(){
    session_start();
    if(isset($_SESSION[uid])){
        echo "loggedin";
    }
    else
        echo "no";
}

?>
