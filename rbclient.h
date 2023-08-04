// Character
LocalPlayer "rbclient.exe"+023FD604 > 0xC
Nick > 0x10
Lvl > 0x54
AttackSpeed > 0x880
Movement Speed > 0x87C
Sword Range > 0x878
Quick Age > 0x874
Player Y > 0x850
Player X > 0x84C
Skill Hack > 0x808
Skill Speed + Attack Speed > 0x708

// One Hit
"rbclient.exe"+023FD604 > 0xC > 0x7D8

Game Speed > rclient.exe+212FF5C | 0x252FF5C

KnockBack > rbclient.exe+374FE8 | ON : 3641668864 OFF : 3641668865

Fly Hack > rbclient.exe+7DF10 | ON : 4077134916 OFF : 4077134924

NoClip > rbclient.exe+0x245A930 > 0x14 > 0x1D54

x2 Hamle + KnockBack Legit > rbclient.exe+375C70

Send Battle Packet Error > 0x0058CCA0 / call
Send Add Fly Targeting Packet > 0058D090 / call

// GetTargetVID
mov | 0x0x0284A648 / Attack
mov | 0x0007278C / VID

// Chat Close
mov | 0x0285A9A0
call | 0x00507FE0

// Chat
Chat Line > 0x0285A9A0 > 0x14
Chat Color 1 > 0x0285A9A0 > 0x48
Chat Color 2 > 0x0285A9A0 > 0x4C
Chat Color 3 > 0x0285A9A0 > 0x50
Chat Color 4 > 0x0285A9A0 > 0x54

// Discord RPC
0285A9A0+80 > 0x120 | Rubinum
0285A9A0+80 > 0x220 | Ezgi - Lv 29
0285A9A0+80 > 0x1A0 | www.rubinum.io

// Account | Kullanıcı Bilgilerinizi Gösterir
Username : 0285A9A0+80 > 0x94
Password : 0285A9A0+80 > 0xAD

CAccountConnector > 0x285aa20 | Hesap bilgilerinizin bulundugu yer

CServerStateChecker > 0x285aa28

CFlyingManager > 0x284a654

CRaceManager > 0x284a64c

CEffectManager > 0x284a638

CPythonNetworkStream > 0x284a658

CPythonItem > 0x284a650

CPythonPlayer > 0x284a648

DiscordRPC > 0x284a660

CPythonCharacterManager > 0x285a930

PythonNonPlayer > 0x285a928

CPythonGameSettings > 0x285a924

CCameraManager > 0x285a938

CpythonTextTail > 0x285a93c

CpythonMiniMap > 0x285a944

CPythonSkill > 0x285a950

CPythonApplication > 0x284caa8

CPythonModelPriviewer > 0x285a984

CRenderTargetManager > 0x285a980

CPythonMyShopDecoManager > 0x285a988

CPythonChat > 0x285a9a0