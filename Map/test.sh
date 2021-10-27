rm -rf test_results
rm a.out
mkdir test_results

g++ -Wall -Wextra -Werror -std=c++98 main_test.cpp -D mine -D uncolored; ./a.out > mine_diff
g++ -Wall -Wextra -Werror -std=c++98 main_test.cpp -D uncolored; ./a.out > std_diff

diff mine_diff std_diff > result_diff
mv mine_diff std_diff result_diff test_results/