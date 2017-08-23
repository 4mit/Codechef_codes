<?php
fscanf(STDIN, "%d\n", $t); // reads number from STDIN
 
while($t--)
{
      $input =fgets(STDIN);
      $arr = explode(" ", $input);      
      
      $len =count($arr);
      if($len ==1){
         echo ucwords(strtolower($arr[0]));
      }else if($len==2){
         echo ucwords($arr[0][0]).". ".ucwords(strtolower($arr[1]));
      }else{
         echo ucwords($arr[0][0]).". ".ucwords($arr[1][0]).". ".ucwords(strtolower($arr[2]));
      }
}