#include <iostream>
#include <bitset>

#define z 4
#define SQR(x) ((x)*(x))
#define MIN3(x, y, z) ((x) < (y) ? ((x) < (z) ? (x) : (z)) : ((y) < (z) ? (y) : (z)))
#define MAX2(x, y) ((x) > (y) ? (x) : (y))
#define PRINT_MESSAGE() \
    std::cout << "Calculate the expression" << std::endl; \
    std::cout << "Input three integer numbers x, y, z:" << std::endl
#define PRINTR(w) puts ("rezult :"); \
printf (#w"=%f\n",(float)w)
#define PRINT_RESULT(result) std::cout << "Result:" << result << std::endl
#define PRINT_REPEAT_PROMPT() std::cout << "Repeat? (y/n):"
#define INPUT_VAR(prompt, var) do { \
    std::cout << prompt << "="; \
    std::cin >> var;                \
} while (0)
#define GET_REPEAT_INPUT(ch) std::cin >> ch
#define PRINT_BITSET(prompt, var) std::cout << prompt << std::bitset<4>(var) << std::endl

//task 2
#define UNION(a, b) ((a) | (b)) // Об'єднання
#define INTERSECTION(a, b) ((a) & (b)) // Перетин
#define CONTAINS(a, b) (((a) & (b)) == (b)) // Входження
#define EQUALS(a, b) ((a) == (b)) // Рівність
#define DIFFERENCE(a, b) ((a) & ~(b)) // Різниця
#define COMPLEMENT(a) (~(a)) // Доповнення

int main() {
    char ch;
    int result, min, max, x, y, set1 = 11, set2 = 13;
    do {
        PRINT_MESSAGE();
        INPUT_VAR("x", x);
        INPUT_VAR("y", y);
#if 0 < z && z < 5
        result = SQR(x) + y + z;
        min = MIN3(x, y, z);
        PRINTR(min);
#else
        result = SQR(x) + SQR(y + z);
        max = MAX2(x, y);
        PRINTR(max);
#endif
        PRINT_RESULT(result);
        PRINT_REPEAT_PROMPT();
        GET_REPEAT_INPUT(ch);
    } while (ch == 'y' || ch == 'Y');

    //task 2
    PRINT_BITSET("A: ", set1);
    PRINT_BITSET("B: ", set2);
    PRINT_BITSET("Union: ", UNION(set1, set2));
    PRINT_BITSET("Intersection: ", INTERSECTION(set1, set2));
    PRINT_BITSET("Contains: ", CONTAINS(set1, set2));
    PRINT_BITSET("Equals: ", EQUALS(set1, set2));
    PRINT_BITSET("Difference: ", DIFFERENCE(set1, set2));
    PRINT_BITSET("Complement: ", COMPLEMENT(set1));

    return 0;
}
