<?php
$text = file_get_contents('in.txt');
preg_match_all('/mul\(\d{1,3},\d{1,3}\)/', $text, $matches);
$sum = 0;
foreach ($matches[0] as $match) {
    $sum += (int)(substr(explode(",", $match)[0], 4)) * (int)(substr(explode(",", $match)[1], 0, -1));
}
echo $sum . "\n";
?>