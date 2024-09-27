@echo off
java -jar antlr/antlr-4.12.0-complete.jar -o src/assembler -lib src/assembler -no-listener -visitor src/assembler/Assembly.g4
