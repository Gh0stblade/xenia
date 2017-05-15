/*
 * Copyright (c) 2015-2016 The Khronos Group Inc.
 * Copyright (c) 2015-2016 Valve Corporation
 * Copyright (c) 2015-2016 LunarG, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Author: Jon Ashburn <jon@lunarg.com>
 */

#include "vk_loader_platform.h"
#include "loader.h"
#if defined(__GNUC__) && !defined(__clang__)
#pragma GCC optimize(3)  // force gcc to use tail-calls
#endif

// Clang-format does not understand macros.
// clang-format off

 // Trampoline function macro for unknown physical device extension command.
#define DevExtTramp(num)                                                       \
VKAPI_ATTR void VKAPI_CALL vkdev_ext##num(VkDevice device) {                   \
        const struct loader_dev_dispatch_table *disp;                          \
        disp = loader_get_dev_dispatch(device);                                \
        disp->ext_dispatch.dev_ext[num](device);                               \
    }

DevExtTramp(0)
DevExtTramp(1)
DevExtTramp(2)
DevExtTramp(3)
DevExtTramp(4)
DevExtTramp(5)
DevExtTramp(6)
DevExtTramp(7)
DevExtTramp(8)
DevExtTramp(9)
DevExtTramp(10)
DevExtTramp(11)
DevExtTramp(12)
DevExtTramp(13)
DevExtTramp(14)
DevExtTramp(15)
DevExtTramp(16)
DevExtTramp(17)
DevExtTramp(18)
DevExtTramp(19)
DevExtTramp(20)
DevExtTramp(21)
DevExtTramp(22)
DevExtTramp(23)
DevExtTramp(24)
DevExtTramp(25)
DevExtTramp(26)
DevExtTramp(27)
DevExtTramp(28)
DevExtTramp(29)
DevExtTramp(30)
DevExtTramp(31)
DevExtTramp(32)
DevExtTramp(33)
DevExtTramp(34)
DevExtTramp(35)
DevExtTramp(36)
DevExtTramp(37)
DevExtTramp(38)
DevExtTramp(39)
DevExtTramp(40)
DevExtTramp(41)
DevExtTramp(42)
DevExtTramp(43)
DevExtTramp(44)
DevExtTramp(45)
DevExtTramp(46)
DevExtTramp(47)
DevExtTramp(48)
DevExtTramp(49)
DevExtTramp(50)
DevExtTramp(51)
DevExtTramp(52)
DevExtTramp(53)
DevExtTramp(54)
DevExtTramp(55)
DevExtTramp(56)
DevExtTramp(57)
DevExtTramp(58)
DevExtTramp(59)
DevExtTramp(60)
DevExtTramp(61)
DevExtTramp(62)
DevExtTramp(63)
DevExtTramp(64)
DevExtTramp(65)
DevExtTramp(66)
DevExtTramp(67)
DevExtTramp(68)
DevExtTramp(69)
DevExtTramp(70)
DevExtTramp(71)
DevExtTramp(72)
DevExtTramp(73)
DevExtTramp(74)
DevExtTramp(75)
DevExtTramp(76)
DevExtTramp(77)
DevExtTramp(78)
DevExtTramp(79)
DevExtTramp(80)
DevExtTramp(81)
DevExtTramp(82)
DevExtTramp(83)
DevExtTramp(84)
DevExtTramp(85)
DevExtTramp(86)
DevExtTramp(87)
DevExtTramp(88)
DevExtTramp(89)
DevExtTramp(90)
DevExtTramp(91)
DevExtTramp(92)
DevExtTramp(93)
DevExtTramp(94)
DevExtTramp(95)
DevExtTramp(96)
DevExtTramp(97)
DevExtTramp(98)
DevExtTramp(99)
DevExtTramp(100)
DevExtTramp(101)
DevExtTramp(102)
DevExtTramp(103)
DevExtTramp(104)
DevExtTramp(105)
DevExtTramp(106)
DevExtTramp(107)
DevExtTramp(108)
DevExtTramp(109)
DevExtTramp(110)
DevExtTramp(111)
DevExtTramp(112)
DevExtTramp(113)
DevExtTramp(114)
DevExtTramp(115)
DevExtTramp(116)
DevExtTramp(117)
DevExtTramp(118)
DevExtTramp(119)
DevExtTramp(120)
DevExtTramp(121)
DevExtTramp(122)
DevExtTramp(123)
DevExtTramp(124)
DevExtTramp(125)
DevExtTramp(126)
DevExtTramp(127)
DevExtTramp(128)
DevExtTramp(129)
DevExtTramp(130)
DevExtTramp(131)
DevExtTramp(132)
DevExtTramp(133)
DevExtTramp(134)
DevExtTramp(135)
DevExtTramp(136)
DevExtTramp(137)
DevExtTramp(138)
DevExtTramp(139)
DevExtTramp(140)
DevExtTramp(141)
DevExtTramp(142)
DevExtTramp(143)
DevExtTramp(144)
DevExtTramp(145)
DevExtTramp(146)
DevExtTramp(147)
DevExtTramp(148)
DevExtTramp(149)
DevExtTramp(150)
DevExtTramp(151)
DevExtTramp(152)
DevExtTramp(153)
DevExtTramp(154)
DevExtTramp(155)
DevExtTramp(156)
DevExtTramp(157)
DevExtTramp(158)
DevExtTramp(159)
DevExtTramp(160)
DevExtTramp(161)
DevExtTramp(162)
DevExtTramp(163)
DevExtTramp(164)
DevExtTramp(165)
DevExtTramp(166)
DevExtTramp(167)
DevExtTramp(168)
DevExtTramp(169)
DevExtTramp(170)
DevExtTramp(171)
DevExtTramp(172)
DevExtTramp(173)
DevExtTramp(174)
DevExtTramp(175)
DevExtTramp(176)
DevExtTramp(177)
DevExtTramp(178)
DevExtTramp(179)
DevExtTramp(180)
DevExtTramp(181)
DevExtTramp(182)
DevExtTramp(183)
DevExtTramp(184)
DevExtTramp(185)
DevExtTramp(186)
DevExtTramp(187)
DevExtTramp(188)
DevExtTramp(189)
DevExtTramp(190)
DevExtTramp(191)
DevExtTramp(192)
DevExtTramp(193)
DevExtTramp(194)
DevExtTramp(195)
DevExtTramp(196)
DevExtTramp(197)
DevExtTramp(198)
DevExtTramp(199)
DevExtTramp(200)
DevExtTramp(201)
DevExtTramp(202)
DevExtTramp(203)
DevExtTramp(204)
DevExtTramp(205)
DevExtTramp(206)
DevExtTramp(207)
DevExtTramp(208)
DevExtTramp(209)
DevExtTramp(210)
DevExtTramp(211)
DevExtTramp(212)
DevExtTramp(213)
DevExtTramp(214)
DevExtTramp(215)
DevExtTramp(216)
DevExtTramp(217)
DevExtTramp(218)
DevExtTramp(219)
DevExtTramp(220)
DevExtTramp(221)
DevExtTramp(222)
DevExtTramp(223)
DevExtTramp(224)
DevExtTramp(225)
DevExtTramp(226)
DevExtTramp(227)
DevExtTramp(228)
DevExtTramp(229)
DevExtTramp(230)
DevExtTramp(231)
DevExtTramp(232)
DevExtTramp(233)
DevExtTramp(234)
DevExtTramp(235)
DevExtTramp(236)
DevExtTramp(237)
DevExtTramp(238)
DevExtTramp(239)
DevExtTramp(240)
DevExtTramp(241)
DevExtTramp(242)
DevExtTramp(243)
DevExtTramp(244)
DevExtTramp(245)
DevExtTramp(246)
DevExtTramp(247)
DevExtTramp(248)
DevExtTramp(249)

void *loader_get_dev_ext_trampoline(uint32_t index) {
    switch (index) {
#define CASE_HANDLE(num) case num: return vkdev_ext##num
        CASE_HANDLE(0);
        CASE_HANDLE(1);
        CASE_HANDLE(2);
        CASE_HANDLE(3);
        CASE_HANDLE(4);
        CASE_HANDLE(5);
        CASE_HANDLE(6);
        CASE_HANDLE(7);
        CASE_HANDLE(8);
        CASE_HANDLE(9);
        CASE_HANDLE(10);
        CASE_HANDLE(11);
        CASE_HANDLE(12);
        CASE_HANDLE(13);
        CASE_HANDLE(14);
        CASE_HANDLE(15);
        CASE_HANDLE(16);
        CASE_HANDLE(17);
        CASE_HANDLE(18);
        CASE_HANDLE(19);
        CASE_HANDLE(20);
        CASE_HANDLE(21);
        CASE_HANDLE(22);
        CASE_HANDLE(23);
        CASE_HANDLE(24);
        CASE_HANDLE(25);
        CASE_HANDLE(26);
        CASE_HANDLE(27);
        CASE_HANDLE(28);
        CASE_HANDLE(29);
        CASE_HANDLE(30);
        CASE_HANDLE(31);
        CASE_HANDLE(32);
        CASE_HANDLE(33);
        CASE_HANDLE(34);
        CASE_HANDLE(35);
        CASE_HANDLE(36);
        CASE_HANDLE(37);
        CASE_HANDLE(38);
        CASE_HANDLE(39);
        CASE_HANDLE(40);
        CASE_HANDLE(41);
        CASE_HANDLE(42);
        CASE_HANDLE(43);
        CASE_HANDLE(44);
        CASE_HANDLE(45);
        CASE_HANDLE(46);
        CASE_HANDLE(47);
        CASE_HANDLE(48);
        CASE_HANDLE(49);
        CASE_HANDLE(50);
        CASE_HANDLE(51);
        CASE_HANDLE(52);
        CASE_HANDLE(53);
        CASE_HANDLE(54);
        CASE_HANDLE(55);
        CASE_HANDLE(56);
        CASE_HANDLE(57);
        CASE_HANDLE(58);
        CASE_HANDLE(59);
        CASE_HANDLE(60);
        CASE_HANDLE(61);
        CASE_HANDLE(62);
        CASE_HANDLE(63);
        CASE_HANDLE(64);
        CASE_HANDLE(65);
        CASE_HANDLE(66);
        CASE_HANDLE(67);
        CASE_HANDLE(68);
        CASE_HANDLE(69);
        CASE_HANDLE(70);
        CASE_HANDLE(71);
        CASE_HANDLE(72);
        CASE_HANDLE(73);
        CASE_HANDLE(74);
        CASE_HANDLE(75);
        CASE_HANDLE(76);
        CASE_HANDLE(77);
        CASE_HANDLE(78);
        CASE_HANDLE(79);
        CASE_HANDLE(80);
        CASE_HANDLE(81);
        CASE_HANDLE(82);
        CASE_HANDLE(83);
        CASE_HANDLE(84);
        CASE_HANDLE(85);
        CASE_HANDLE(86);
        CASE_HANDLE(87);
        CASE_HANDLE(88);
        CASE_HANDLE(89);
        CASE_HANDLE(90);
        CASE_HANDLE(91);
        CASE_HANDLE(92);
        CASE_HANDLE(93);
        CASE_HANDLE(94);
        CASE_HANDLE(95);
        CASE_HANDLE(96);
        CASE_HANDLE(97);
        CASE_HANDLE(98);
        CASE_HANDLE(99);
        CASE_HANDLE(100);
        CASE_HANDLE(101);
        CASE_HANDLE(102);
        CASE_HANDLE(103);
        CASE_HANDLE(104);
        CASE_HANDLE(105);
        CASE_HANDLE(106);
        CASE_HANDLE(107);
        CASE_HANDLE(108);
        CASE_HANDLE(109);
        CASE_HANDLE(110);
        CASE_HANDLE(111);
        CASE_HANDLE(112);
        CASE_HANDLE(113);
        CASE_HANDLE(114);
        CASE_HANDLE(115);
        CASE_HANDLE(116);
        CASE_HANDLE(117);
        CASE_HANDLE(118);
        CASE_HANDLE(119);
        CASE_HANDLE(120);
        CASE_HANDLE(121);
        CASE_HANDLE(122);
        CASE_HANDLE(123);
        CASE_HANDLE(124);
        CASE_HANDLE(125);
        CASE_HANDLE(126);
        CASE_HANDLE(127);
        CASE_HANDLE(128);
        CASE_HANDLE(129);
        CASE_HANDLE(130);
        CASE_HANDLE(131);
        CASE_HANDLE(132);
        CASE_HANDLE(133);
        CASE_HANDLE(134);
        CASE_HANDLE(135);
        CASE_HANDLE(136);
        CASE_HANDLE(137);
        CASE_HANDLE(138);
        CASE_HANDLE(139);
        CASE_HANDLE(140);
        CASE_HANDLE(141);
        CASE_HANDLE(142);
        CASE_HANDLE(143);
        CASE_HANDLE(144);
        CASE_HANDLE(145);
        CASE_HANDLE(146);
        CASE_HANDLE(147);
        CASE_HANDLE(148);
        CASE_HANDLE(149);
        CASE_HANDLE(150);
        CASE_HANDLE(151);
        CASE_HANDLE(152);
        CASE_HANDLE(153);
        CASE_HANDLE(154);
        CASE_HANDLE(155);
        CASE_HANDLE(156);
        CASE_HANDLE(157);
        CASE_HANDLE(158);
        CASE_HANDLE(159);
        CASE_HANDLE(160);
        CASE_HANDLE(161);
        CASE_HANDLE(162);
        CASE_HANDLE(163);
        CASE_HANDLE(164);
        CASE_HANDLE(165);
        CASE_HANDLE(166);
        CASE_HANDLE(167);
        CASE_HANDLE(168);
        CASE_HANDLE(169);
        CASE_HANDLE(170);
        CASE_HANDLE(171);
        CASE_HANDLE(172);
        CASE_HANDLE(173);
        CASE_HANDLE(174);
        CASE_HANDLE(175);
        CASE_HANDLE(176);
        CASE_HANDLE(177);
        CASE_HANDLE(178);
        CASE_HANDLE(179);
        CASE_HANDLE(180);
        CASE_HANDLE(181);
        CASE_HANDLE(182);
        CASE_HANDLE(183);
        CASE_HANDLE(184);
        CASE_HANDLE(185);
        CASE_HANDLE(186);
        CASE_HANDLE(187);
        CASE_HANDLE(188);
        CASE_HANDLE(189);
        CASE_HANDLE(190);
        CASE_HANDLE(191);
        CASE_HANDLE(192);
        CASE_HANDLE(193);
        CASE_HANDLE(194);
        CASE_HANDLE(195);
        CASE_HANDLE(196);
        CASE_HANDLE(197);
        CASE_HANDLE(198);
        CASE_HANDLE(199);
        CASE_HANDLE(200);
        CASE_HANDLE(201);
        CASE_HANDLE(202);
        CASE_HANDLE(203);
        CASE_HANDLE(204);
        CASE_HANDLE(205);
        CASE_HANDLE(206);
        CASE_HANDLE(207);
        CASE_HANDLE(208);
        CASE_HANDLE(209);
        CASE_HANDLE(210);
        CASE_HANDLE(211);
        CASE_HANDLE(212);
        CASE_HANDLE(213);
        CASE_HANDLE(214);
        CASE_HANDLE(215);
        CASE_HANDLE(216);
        CASE_HANDLE(217);
        CASE_HANDLE(218);
        CASE_HANDLE(219);
        CASE_HANDLE(220);
        CASE_HANDLE(221);
        CASE_HANDLE(222);
        CASE_HANDLE(223);
        CASE_HANDLE(224);
        CASE_HANDLE(225);
        CASE_HANDLE(226);
        CASE_HANDLE(227);
        CASE_HANDLE(228);
        CASE_HANDLE(229);
        CASE_HANDLE(230);
        CASE_HANDLE(231);
        CASE_HANDLE(232);
        CASE_HANDLE(233);
        CASE_HANDLE(234);
        CASE_HANDLE(235);
        CASE_HANDLE(236);
        CASE_HANDLE(237);
        CASE_HANDLE(238);
        CASE_HANDLE(239);
        CASE_HANDLE(240);
        CASE_HANDLE(241);
        CASE_HANDLE(242);
        CASE_HANDLE(243);
        CASE_HANDLE(244);
        CASE_HANDLE(245);
        CASE_HANDLE(246);
        CASE_HANDLE(247);
        CASE_HANDLE(248);
        CASE_HANDLE(249);
    }

    return NULL;
}
