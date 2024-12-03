<?php
$text = file_get_contents('in.txt');
preg_match_all('/mul\(\d{1,3},\d{1,3}\)|don\'t\(\)|do\(\)/', $text, $matches);
$sum = 0;
$enabled = true;  
foreach ($matches[0] as $match) {
    if ($match == 'do()') {
        $enabled = true;
    }
    elseif ($match == "don't()") {
        $enabled = false;
    }
    elseif ($enabled) {
        $sum += (int)(substr(explode(",", $match)[0], 4)) * (int)(substr(explode(",", $match)[1], 0, -1));
    }
}
echo $sum;
?>