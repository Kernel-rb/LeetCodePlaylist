class Solution {

/**
 * @param Integer[] $nums
 * @param Integer $target
 * @return Integer
 */
function countPairs($nums, $target) {
    $counter = 0 ;
    for($i = 0 ; $i < count($nums) ; $i++)
    {
        for($j = $i + 1 ; $j < count($nums) ; $j++)
        {
            if( $nums[$i] + $nums[$j] <  $target )
            {
                $counter++;
            }
        }
    }
    return $counter;
}
}