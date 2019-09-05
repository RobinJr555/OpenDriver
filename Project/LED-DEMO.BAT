SET PATH=C:\Keil_472\ARM\ARMCC\bin\;C:\omf07\bin\;C:\Program Files (x86)\IBM\RationalSDLC\common;C:\WINDOWS\system32;C:\WINDOWS;C:\WINDOWS\System32\Wbem;C:\WINDOWS\System32\WindowsPowerShell\v1.0\;C:\WINDOWS\System32\OpenSSH\;C:\Program Files (x86)\OpenText\Viewer\bin;C:\Program Files (x86)\IBM\RationalSDLC\ClearCase\bin;C:\Program Files (x86)\IBM\gsk8\lib;C:\Program Files (x86)\IBM\gsk8\bin;C:\Program Files (x86)\IBM\RationalSDLC\ClearCase\RemoteClient\cteapis;C:\Program Files\Microsoft SQL Server\110\Tools\Binn\;C:\Program Files (x86)\Microsoft SDKs\TypeScript\1.0\;C:\Program Files\Microsoft SQL Server\120\Tools\Binn\;C:\Program Files (x86)\Danfoss Drives\Communication Module\bin;C:\Renesas\e2_studio\GNURXv12.03-ELF\rx-elf\bin;C:\jre-8u112-windows-x64\jre1.8.0_112\bin;C:\Program Files\Microsoft VS Code\bin;C:\MinGW-w64\mingw64\bin;C:\Users\U376677\AppData\Local\Programs\Python\Python37\Scripts;C:\Program Files\Git\cmd;C:\Users\U376677\AppData\Local\Programs\Python\Python37\Scripts\;C:\Users\U376677\AppData\Local\Programs\Python\Python37\;C:\Program Files (x86)\GNU Tools ARM Embedded\5.4 2016q3\bin;C:\Users\U376677\AppData\Local\Microsoft\WindowsApps;C:\Program Files\JetBrains\PyCharm Community Edition 2019.2\bin;
SET CPU_TYPE=STM32F103C8
SET CPU_VENDOR=STMicroelectronics
SET UV2_TARGET=LED-DEMO
SET CPU_CLOCK=0x007A1200
"C:\Keil_472\ARM\ARMCC\bin\ArmAsm" --Via ".\output\startup_stm32f10x_md._ia"
"C:\Keil_472\ARM\ARMCC\bin\ArmCC" --Via ".\output\led.__i"
"C:\Keil_472\ARM\ARMCC\bin\ArmCC" --Via ".\output\main.__i"
"C:\Keil_472\ARM\ARMCC\bin\ArmCC" --Via ".\output\stm32f10x_it.__i"
"C:\Keil_472\ARM\ARMCC\bin\ArmCC" --Via ".\output\stm32f10x_gpio.__i"
"C:\Keil_472\ARM\ARMCC\bin\ArmCC" --Via ".\output\stm32f10x_rcc.__i"
"C:\Keil_472\ARM\ARMCC\bin\ArmCC" --Via ".\output\core_cm3.__i"
"C:\Keil_472\ARM\ARMCC\bin\ArmCC" --Via ".\output\system_stm32f10x.__i"
"C:\Keil_472\ARM\ARMCC\bin\ArmCC" --Via ".\output\croutine.__i"
"C:\Keil_472\ARM\ARMCC\bin\ArmCC" --Via ".\output\event_groups.__i"
"C:\Keil_472\ARM\ARMCC\bin\ArmCC" --Via ".\output\list.__i"
"C:\Keil_472\ARM\ARMCC\bin\ArmCC" --Via ".\output\queue.__i"
"C:\Keil_472\ARM\ARMCC\bin\ArmCC" --Via ".\output\tasks.__i"
"C:\Keil_472\ARM\ARMCC\bin\ArmCC" --Via ".\output\timers.__i"
"C:\Keil_472\ARM\ARMCC\bin\ArmCC" --Via ".\output\heap_4.__i"
"C:\Keil_472\ARM\ARMCC\bin\ArmCC" --Via ".\output\port.__i"
"C:\Keil_472\ARM\ARMCC\bin\ArmCC" --Via ".\output\hal_init.__i"
"C:\Keil_472\ARM\ARMCC\bin\ArmCC" --Via ".\output\mach_minisys.__i"
"C:\Keil_472\ARM\ARMCC\bin\ArmLink" --Via ".\Output\STM32-DEMO.lnp"
C:\Keil_472\ARM\ARMCC\bin\fromelf.exe ".\Output\STM32-DEMO.axf" --i32combined --output ".\Output\STM32-DEMO.hex"
