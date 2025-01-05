#pragma once
#include<string>
#include"config.hpp"
#include"helpers.hpp"

struct Page
{
    std::string title;
    std::string description;
    int partsCount;
    std::string partName[100];
    std::string partDesc[100];
    std::string tags[16];
};

Page *createPage(std::string title, std::string desc);
void addPart(Page *page, std::string name);
void buildPage(Config* conf, Page* page, std::string path, std::string nav);
