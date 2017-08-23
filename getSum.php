<?php
fscanf(STDIN, "%d\n", $t); // reads number from STDIN
 
function getSum($n){
   
   $range =500;
   for($i=0;$i<$n;$i++){
      echo $range--." ";
   }
}
while($t--)
{
      fscanf(STDIN, "%d", $n); 
      getSum($n);
      echo PHP_EOL;
}