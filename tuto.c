#include<stdio.h>
#include<string.h>


// Used for the compiler so he knows what are the types and args so it doesn't show a warning at the function call in main()
void switch_example();
void loops_ex();
void for_loop();
int add(int a, int b);
void arrays();
void pointers_ex();
void strings();
void union_ex();

union test{
    char test;
    int age;
    char test2;
};

struct person{
    char name[20];
    int age;
    char job[20];
};

int main() {

    int x = 4;
    int y;

    scanf("%d", &y);

    if (y == x){
        printf("You found the secret message!");
        return 0;
    }

    printf("Hello World! %d %d\n", x, y);

    union_ex();

    struct person john = {"John", 56, "Dev"};

    printf("%s", john.age);

    printf("\n%d", add(8,1));

    
    return 0;

}

void switch_example() {
        int age;

        scanf("%d", &age);

        switch(age){

        case 1:
            printf("you're a baby\n");
            break;

        case 99:
            printf("Wow you're old\n");
            break;

        case 18:
            printf("Majority uh?\n");
            break;

        default:
            printf("You're a simp\n");
            break;
    }
}

void loops_ex(){
    int a =5;
    int b = 10;

    while(a != b){
        printf("a is different than b");
        a++;
    }

    do{
        printf("a and b are different only if this message appear twice");
    }while(a != b);
}

void for_loop(){
    int a = 4;

    for(int i=0; i != a; i++){
        printf("%d", a + i);
    }
}

int add(int a, int b){
    int sum = a + b;
    return sum;
}

void arrays(){
    int a = 6, c = 8;

    int array[10];

    int nums [] = {1,2,1};

    printf("%d", nums[2]);

    // multiple dimentionals arrays are arrays that have multiple lists
                             
                   //  3 ici | donc 3 element dans chaque sous liste
    int multidimentionnal[2][3] = {{0,5,4}, {5,8,4}};       
                    //    |         ^        ^
            // chiffre 2 ici donc 2 |   ici |

    printf("%d", multidimentionnal[0][1]);
}

void pointers_ex() {
    int test = 5;
    int *pointer;
    pointer = &test;


    printf("%p\n", &test);

    // * before a pointer to access the value stored at the memory address
    printf("%d", *pointer);
}

void strings() {
    char msg[] = "Hello World!";
    printf("%s", msg);
}

void union_ex(){
    // union is a type that can contain multiple type but one at a time

    union test obj;

    obj.age = 5;

    printf("%d\n", obj.age);

    obj.test = 'g';
    
    printf("%c\n", obj.test);
    printf("%d\n", obj.age); // <- no more age but garbage value because now its test, the last value assigned
}