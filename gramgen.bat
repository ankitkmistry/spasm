@echo off
java -jar antlr/antlr-4.12.0-complete.jar -o assembler -lib assembler -no-listener -visitor assembler/Assembly.g4
