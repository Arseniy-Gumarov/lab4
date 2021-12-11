#define CATCH_CONFIG_MAIN
#define _CRT_SECURE_NO_WARNINGS
#include "catch.hpp"
#include <string.h>
#include <iostream>
char findCommonSymbol(char* str1, char* str2)
{
    printf("Task 10\n");
    int f = 0;//������ f=0
    for (int i = 0; str1[i] != '\0' && !f; i++)//����������� ������ �������
    {
        for (int j = 0; str2[j] != '\0' && !f; j++)//����������� ������ �������
        {
            if (str1[i] == str2[j])//������� ����� ������
            {
                return str1[i];
                f = 1;
            }
        }
    }
}
TEST_CASE("findCommonSymbol") {
    char str1[255], str2[255];
    strcpy(str1, "qqw");
    strcpy(str2, "wqe");
    REQUIRE(findCommonSymbol(str1, str2) == 'q');

};