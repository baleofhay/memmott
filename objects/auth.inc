<?php
    //This should be included on any page that you want authentication
    //It will basically look for the $_SESSION variables to see if they are set
    //If they are not set then we'll forward to the login screen
    //otherwise we'll stay on the page because they are authenticated.
    session_start();
    if(!isset($_SESSION[username])){
        header("Location: noauth.php");
    }
?>
