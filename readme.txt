Problem:

Gary is an avid hiker. He tracks his hikes meticulously, paying close
attention to small details like topography. During his last hike he took
exactly n steps. For every step he took, he noted if it was an uphill, U, or a
downhill, D step. Gary's hikes start and end at sea level and each step or
down represents a 1 unit change in altitude. We define the following terms:

* A mountain is a sequence of consecutive steps above sea level, starting with
  a step up from sea level and ending with a step down to sea level.

* A valley is a sequence of consecutive steps below sea level, starting with a
  step down from sea level and ending with a step up to sea level.

Input Format:

- The first line contains an integer n, the number of steps in Gary's hike.
- The second line contains a single string s, of n characters that describe his
path.

Output Format:

Print a single integer that denotes the number of valleys Gary walked through
during his hike.

Sample Input:

8
UDDDUDUU

Sample Output:

1




