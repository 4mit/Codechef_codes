<?php
fscanf(STDIN, "%d\n", $t); // reads number from STDIN
 
function getSum($n)
{
   $rem ;
   $sum =0 ; 
   while($n){
      $rem = $n%10;
      $n = $n/10;
      $sum += $rem;
   }
   return $sum;
   
}
while($t--){
      fscanf(STDIN, "%d", $n); 
      echo getSum($n);
      echo PHP_EOL;
      
}