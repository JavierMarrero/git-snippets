/*
 * The MIT License
 *
 * Copyright 2023 Javier Marrero.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

/* 
 * File:   Application.cc
 * Author: Javier Marrero
 * 
 * Created on January 19, 2023, 6:56 PM
 */

#include <gippets/Application.h>
#include <ncursesw/ncurses.h>

using namespace gippets;

const char* const Application::APPLICATION_NAME = "Git-Snippets v0.2";

Application::Application()
:
m_console(new Console())
{
}

Application::~Application()
{
}

void Application::initComponents()
{
    m_window = std::make_shared<Window>(0, 0, 10, 50);

    printw("hi");
}

void Application::run()
{
    while (true)
    {
        refresh();
    }
}

