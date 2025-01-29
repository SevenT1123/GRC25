# **__Required Tools__ to run project on VsCode**
- [STM32CubeMX V6.11.0 or Later](https://www.st.com/en/development-tools/stm32cubemx.html)
- [STM32CubeCLT V1.15.0 or Later](https://www.st.com/en/development-tools/stm32cubeclt.html)
- **Linux Users:** Libncurses: Ncurses is required for full functionality
- Download command:
    - `apt-get install libncurses`
- Install the [STM32 VS Code Extension](https://marketplace.visualstudio.com/items?itemName=stmicroelectronics.stm32-vscode-extension)

# **Command Line Instructions for Windows**
1. cd into correct workspace directory
2. `cmake ./CMakeLists.txt -G Ninja`
3. `cmake --build .`
