<?php
//This will basically just get the cmd from get or post and call the function
//requested with that cmd call
//The default function called is always main().
$cmd = $_POST[cmd];
    if($cmd == "")
        $cmd = $_GET[cmd];
    
    if($cmd == "")
        main();
    else
        eval ("\$cmd();");
?>
