##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Data_Structure
ConfigurationName      :=Debug
WorkspacePath          :="/home/bradd/Desktop/Data Structure"
ProjectPath            :="/home/bradd/Desktop/Data Structure"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Bradd pitt
Date                   :=11/11/20
CodeLitePath           :=/home/bradd/.codelite
LinkerName             :=g++
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :="Data_Structure.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  -O0
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch). $(LibraryPathSwitch)Debug 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -g -Wall $(Preprocessors)
CFLAGS   :=   $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/Lab8_38_Ashutosh1.c$(ObjectSuffix) $(IntermediateDirectory)/govind.cc$(ObjectSuffix) $(IntermediateDirectory)/lab2_38_Ashutosh.c$(ObjectSuffix) $(IntermediateDirectory)/koli.cc$(ObjectSuffix) $(IntermediateDirectory)/Lab9_38_Ashutosh.c$(ObjectSuffix) $(IntermediateDirectory)/Lab8_38_Ashutosh.c$(ObjectSuffix) $(IntermediateDirectory)/Assesment_1.c$(ObjectSuffix) $(IntermediateDirectory)/Lab7_38_Ashutosh.c$(ObjectSuffix) $(IntermediateDirectory)/Lab10_38_Ashutosh.c$(ObjectSuffix) $(IntermediateDirectory)/Lab5_38_Ashutosh.c$(ObjectSuffix) \
	$(IntermediateDirectory)/Lab4_38_Ashutosh.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Lab8_38_Ashutosh1.c$(ObjectSuffix): Lab8_38_Ashutosh1.c $(IntermediateDirectory)/Lab8_38_Ashutosh1.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/bradd/Desktop/Data Structure/Lab8_38_Ashutosh1.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Lab8_38_Ashutosh1.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Lab8_38_Ashutosh1.c$(DependSuffix): Lab8_38_Ashutosh1.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Lab8_38_Ashutosh1.c$(ObjectSuffix) -MF$(IntermediateDirectory)/Lab8_38_Ashutosh1.c$(DependSuffix) -MM Lab8_38_Ashutosh1.c

$(IntermediateDirectory)/Lab8_38_Ashutosh1.c$(PreprocessSuffix): Lab8_38_Ashutosh1.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Lab8_38_Ashutosh1.c$(PreprocessSuffix) Lab8_38_Ashutosh1.c

$(IntermediateDirectory)/govind.cc$(ObjectSuffix): govind.cc $(IntermediateDirectory)/govind.cc$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/bradd/Desktop/Data Structure/govind.cc" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/govind.cc$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/govind.cc$(DependSuffix): govind.cc
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/govind.cc$(ObjectSuffix) -MF$(IntermediateDirectory)/govind.cc$(DependSuffix) -MM govind.cc

$(IntermediateDirectory)/govind.cc$(PreprocessSuffix): govind.cc
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/govind.cc$(PreprocessSuffix) govind.cc

$(IntermediateDirectory)/lab2_38_Ashutosh.c$(ObjectSuffix): lab2_38_Ashutosh.c $(IntermediateDirectory)/lab2_38_Ashutosh.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/bradd/Desktop/Data Structure/lab2_38_Ashutosh.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/lab2_38_Ashutosh.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/lab2_38_Ashutosh.c$(DependSuffix): lab2_38_Ashutosh.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/lab2_38_Ashutosh.c$(ObjectSuffix) -MF$(IntermediateDirectory)/lab2_38_Ashutosh.c$(DependSuffix) -MM lab2_38_Ashutosh.c

$(IntermediateDirectory)/lab2_38_Ashutosh.c$(PreprocessSuffix): lab2_38_Ashutosh.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/lab2_38_Ashutosh.c$(PreprocessSuffix) lab2_38_Ashutosh.c

$(IntermediateDirectory)/koli.cc$(ObjectSuffix): koli.cc $(IntermediateDirectory)/koli.cc$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/bradd/Desktop/Data Structure/koli.cc" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/koli.cc$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/koli.cc$(DependSuffix): koli.cc
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/koli.cc$(ObjectSuffix) -MF$(IntermediateDirectory)/koli.cc$(DependSuffix) -MM koli.cc

$(IntermediateDirectory)/koli.cc$(PreprocessSuffix): koli.cc
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/koli.cc$(PreprocessSuffix) koli.cc

$(IntermediateDirectory)/Lab9_38_Ashutosh.c$(ObjectSuffix): Lab9_38_Ashutosh.c $(IntermediateDirectory)/Lab9_38_Ashutosh.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/bradd/Desktop/Data Structure/Lab9_38_Ashutosh.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Lab9_38_Ashutosh.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Lab9_38_Ashutosh.c$(DependSuffix): Lab9_38_Ashutosh.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Lab9_38_Ashutosh.c$(ObjectSuffix) -MF$(IntermediateDirectory)/Lab9_38_Ashutosh.c$(DependSuffix) -MM Lab9_38_Ashutosh.c

$(IntermediateDirectory)/Lab9_38_Ashutosh.c$(PreprocessSuffix): Lab9_38_Ashutosh.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Lab9_38_Ashutosh.c$(PreprocessSuffix) Lab9_38_Ashutosh.c

$(IntermediateDirectory)/Lab8_38_Ashutosh.c$(ObjectSuffix): Lab8_38_Ashutosh.c $(IntermediateDirectory)/Lab8_38_Ashutosh.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/bradd/Desktop/Data Structure/Lab8_38_Ashutosh.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Lab8_38_Ashutosh.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Lab8_38_Ashutosh.c$(DependSuffix): Lab8_38_Ashutosh.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Lab8_38_Ashutosh.c$(ObjectSuffix) -MF$(IntermediateDirectory)/Lab8_38_Ashutosh.c$(DependSuffix) -MM Lab8_38_Ashutosh.c

$(IntermediateDirectory)/Lab8_38_Ashutosh.c$(PreprocessSuffix): Lab8_38_Ashutosh.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Lab8_38_Ashutosh.c$(PreprocessSuffix) Lab8_38_Ashutosh.c

$(IntermediateDirectory)/Assesment_1.c$(ObjectSuffix): Assesment_1.c $(IntermediateDirectory)/Assesment_1.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/bradd/Desktop/Data Structure/Assesment_1.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Assesment_1.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Assesment_1.c$(DependSuffix): Assesment_1.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Assesment_1.c$(ObjectSuffix) -MF$(IntermediateDirectory)/Assesment_1.c$(DependSuffix) -MM Assesment_1.c

$(IntermediateDirectory)/Assesment_1.c$(PreprocessSuffix): Assesment_1.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Assesment_1.c$(PreprocessSuffix) Assesment_1.c

$(IntermediateDirectory)/Lab7_38_Ashutosh.c$(ObjectSuffix): Lab7_38_Ashutosh.c $(IntermediateDirectory)/Lab7_38_Ashutosh.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/bradd/Desktop/Data Structure/Lab7_38_Ashutosh.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Lab7_38_Ashutosh.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Lab7_38_Ashutosh.c$(DependSuffix): Lab7_38_Ashutosh.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Lab7_38_Ashutosh.c$(ObjectSuffix) -MF$(IntermediateDirectory)/Lab7_38_Ashutosh.c$(DependSuffix) -MM Lab7_38_Ashutosh.c

$(IntermediateDirectory)/Lab7_38_Ashutosh.c$(PreprocessSuffix): Lab7_38_Ashutosh.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Lab7_38_Ashutosh.c$(PreprocessSuffix) Lab7_38_Ashutosh.c

$(IntermediateDirectory)/Lab10_38_Ashutosh.c$(ObjectSuffix): Lab10_38_Ashutosh.c $(IntermediateDirectory)/Lab10_38_Ashutosh.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/bradd/Desktop/Data Structure/Lab10_38_Ashutosh.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Lab10_38_Ashutosh.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Lab10_38_Ashutosh.c$(DependSuffix): Lab10_38_Ashutosh.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Lab10_38_Ashutosh.c$(ObjectSuffix) -MF$(IntermediateDirectory)/Lab10_38_Ashutosh.c$(DependSuffix) -MM Lab10_38_Ashutosh.c

$(IntermediateDirectory)/Lab10_38_Ashutosh.c$(PreprocessSuffix): Lab10_38_Ashutosh.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Lab10_38_Ashutosh.c$(PreprocessSuffix) Lab10_38_Ashutosh.c

$(IntermediateDirectory)/Lab5_38_Ashutosh.c$(ObjectSuffix): Lab5_38_Ashutosh.c $(IntermediateDirectory)/Lab5_38_Ashutosh.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/bradd/Desktop/Data Structure/Lab5_38_Ashutosh.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Lab5_38_Ashutosh.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Lab5_38_Ashutosh.c$(DependSuffix): Lab5_38_Ashutosh.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Lab5_38_Ashutosh.c$(ObjectSuffix) -MF$(IntermediateDirectory)/Lab5_38_Ashutosh.c$(DependSuffix) -MM Lab5_38_Ashutosh.c

$(IntermediateDirectory)/Lab5_38_Ashutosh.c$(PreprocessSuffix): Lab5_38_Ashutosh.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Lab5_38_Ashutosh.c$(PreprocessSuffix) Lab5_38_Ashutosh.c

$(IntermediateDirectory)/Lab4_38_Ashutosh.c$(ObjectSuffix): Lab4_38_Ashutosh.c $(IntermediateDirectory)/Lab4_38_Ashutosh.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/bradd/Desktop/Data Structure/Lab4_38_Ashutosh.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Lab4_38_Ashutosh.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Lab4_38_Ashutosh.c$(DependSuffix): Lab4_38_Ashutosh.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Lab4_38_Ashutosh.c$(ObjectSuffix) -MF$(IntermediateDirectory)/Lab4_38_Ashutosh.c$(DependSuffix) -MM Lab4_38_Ashutosh.c

$(IntermediateDirectory)/Lab4_38_Ashutosh.c$(PreprocessSuffix): Lab4_38_Ashutosh.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Lab4_38_Ashutosh.c$(PreprocessSuffix) Lab4_38_Ashutosh.c


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


