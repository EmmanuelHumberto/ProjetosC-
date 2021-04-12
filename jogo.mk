##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=jogo
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/home/ss/Documentos/apps/jogo
ProjectPath            :=/home/ss/Documentos/apps/jogo/jogo
IntermediateDirectory  :=../build-$(ConfigurationName)/jogo
OutDir                 :=../build-$(ConfigurationName)/jogo
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=SS
Date                   :=11/04/21
CodeLitePath           :=/home/ss/.codelite
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
OutputFile             :=../build-$(ConfigurationName)/bin/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=../build-$(ConfigurationName)/jogo/add_nova_palavra.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/jogo/nao_acertou.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/jogo/le_arquivo.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/jogo/letra_existe.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/jogo/bicuda.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/jogo/desenha_palavra.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/jogo/jogoforca.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/jogo/bicos_errados.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/jogo/sorteia_palavra_secreta.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/jogo/salva_arquivo.cpp$(ObjectSuffix) \
	



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/jogo/.d $(Objects) 
	@mkdir -p "../build-$(ConfigurationName)/jogo"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../build-$(ConfigurationName)/jogo"
	@mkdir -p ""../build-$(ConfigurationName)/bin""

../build-$(ConfigurationName)/jogo/.d:
	@mkdir -p "../build-$(ConfigurationName)/jogo"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/jogo/add_nova_palavra.cpp$(ObjectSuffix): add_nova_palavra.cpp ../build-$(ConfigurationName)/jogo/add_nova_palavra.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/ss/Documentos/apps/jogo/jogo/add_nova_palavra.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/add_nova_palavra.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/jogo/add_nova_palavra.cpp$(DependSuffix): add_nova_palavra.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/jogo/add_nova_palavra.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/jogo/add_nova_palavra.cpp$(DependSuffix) -MM add_nova_palavra.cpp

../build-$(ConfigurationName)/jogo/add_nova_palavra.cpp$(PreprocessSuffix): add_nova_palavra.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/jogo/add_nova_palavra.cpp$(PreprocessSuffix) add_nova_palavra.cpp

../build-$(ConfigurationName)/jogo/nao_acertou.cpp$(ObjectSuffix): nao_acertou.cpp ../build-$(ConfigurationName)/jogo/nao_acertou.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/ss/Documentos/apps/jogo/jogo/nao_acertou.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/nao_acertou.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/jogo/nao_acertou.cpp$(DependSuffix): nao_acertou.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/jogo/nao_acertou.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/jogo/nao_acertou.cpp$(DependSuffix) -MM nao_acertou.cpp

../build-$(ConfigurationName)/jogo/nao_acertou.cpp$(PreprocessSuffix): nao_acertou.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/jogo/nao_acertou.cpp$(PreprocessSuffix) nao_acertou.cpp

../build-$(ConfigurationName)/jogo/le_arquivo.cpp$(ObjectSuffix): le_arquivo.cpp ../build-$(ConfigurationName)/jogo/le_arquivo.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/ss/Documentos/apps/jogo/jogo/le_arquivo.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/le_arquivo.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/jogo/le_arquivo.cpp$(DependSuffix): le_arquivo.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/jogo/le_arquivo.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/jogo/le_arquivo.cpp$(DependSuffix) -MM le_arquivo.cpp

../build-$(ConfigurationName)/jogo/le_arquivo.cpp$(PreprocessSuffix): le_arquivo.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/jogo/le_arquivo.cpp$(PreprocessSuffix) le_arquivo.cpp

../build-$(ConfigurationName)/jogo/letra_existe.cpp$(ObjectSuffix): letra_existe.cpp ../build-$(ConfigurationName)/jogo/letra_existe.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/ss/Documentos/apps/jogo/jogo/letra_existe.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/letra_existe.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/jogo/letra_existe.cpp$(DependSuffix): letra_existe.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/jogo/letra_existe.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/jogo/letra_existe.cpp$(DependSuffix) -MM letra_existe.cpp

../build-$(ConfigurationName)/jogo/letra_existe.cpp$(PreprocessSuffix): letra_existe.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/jogo/letra_existe.cpp$(PreprocessSuffix) letra_existe.cpp

../build-$(ConfigurationName)/jogo/bicuda.cpp$(ObjectSuffix): bicuda.cpp ../build-$(ConfigurationName)/jogo/bicuda.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/ss/Documentos/apps/jogo/jogo/bicuda.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/bicuda.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/jogo/bicuda.cpp$(DependSuffix): bicuda.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/jogo/bicuda.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/jogo/bicuda.cpp$(DependSuffix) -MM bicuda.cpp

../build-$(ConfigurationName)/jogo/bicuda.cpp$(PreprocessSuffix): bicuda.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/jogo/bicuda.cpp$(PreprocessSuffix) bicuda.cpp

../build-$(ConfigurationName)/jogo/desenha_palavra.cpp$(ObjectSuffix): desenha_palavra.cpp ../build-$(ConfigurationName)/jogo/desenha_palavra.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/ss/Documentos/apps/jogo/jogo/desenha_palavra.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/desenha_palavra.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/jogo/desenha_palavra.cpp$(DependSuffix): desenha_palavra.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/jogo/desenha_palavra.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/jogo/desenha_palavra.cpp$(DependSuffix) -MM desenha_palavra.cpp

../build-$(ConfigurationName)/jogo/desenha_palavra.cpp$(PreprocessSuffix): desenha_palavra.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/jogo/desenha_palavra.cpp$(PreprocessSuffix) desenha_palavra.cpp

../build-$(ConfigurationName)/jogo/jogoforca.cpp$(ObjectSuffix): jogoforca.cpp ../build-$(ConfigurationName)/jogo/jogoforca.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/ss/Documentos/apps/jogo/jogo/jogoforca.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/jogoforca.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/jogo/jogoforca.cpp$(DependSuffix): jogoforca.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/jogo/jogoforca.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/jogo/jogoforca.cpp$(DependSuffix) -MM jogoforca.cpp

../build-$(ConfigurationName)/jogo/jogoforca.cpp$(PreprocessSuffix): jogoforca.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/jogo/jogoforca.cpp$(PreprocessSuffix) jogoforca.cpp

../build-$(ConfigurationName)/jogo/bicos_errados.cpp$(ObjectSuffix): bicos_errados.cpp ../build-$(ConfigurationName)/jogo/bicos_errados.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/ss/Documentos/apps/jogo/jogo/bicos_errados.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/bicos_errados.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/jogo/bicos_errados.cpp$(DependSuffix): bicos_errados.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/jogo/bicos_errados.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/jogo/bicos_errados.cpp$(DependSuffix) -MM bicos_errados.cpp

../build-$(ConfigurationName)/jogo/bicos_errados.cpp$(PreprocessSuffix): bicos_errados.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/jogo/bicos_errados.cpp$(PreprocessSuffix) bicos_errados.cpp

../build-$(ConfigurationName)/jogo/sorteia_palavra_secreta.cpp$(ObjectSuffix): sorteia_palavra_secreta.cpp ../build-$(ConfigurationName)/jogo/sorteia_palavra_secreta.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/ss/Documentos/apps/jogo/jogo/sorteia_palavra_secreta.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/sorteia_palavra_secreta.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/jogo/sorteia_palavra_secreta.cpp$(DependSuffix): sorteia_palavra_secreta.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/jogo/sorteia_palavra_secreta.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/jogo/sorteia_palavra_secreta.cpp$(DependSuffix) -MM sorteia_palavra_secreta.cpp

../build-$(ConfigurationName)/jogo/sorteia_palavra_secreta.cpp$(PreprocessSuffix): sorteia_palavra_secreta.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/jogo/sorteia_palavra_secreta.cpp$(PreprocessSuffix) sorteia_palavra_secreta.cpp

../build-$(ConfigurationName)/jogo/salva_arquivo.cpp$(ObjectSuffix): salva_arquivo.cpp ../build-$(ConfigurationName)/jogo/salva_arquivo.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/ss/Documentos/apps/jogo/jogo/salva_arquivo.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/salva_arquivo.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/jogo/salva_arquivo.cpp$(DependSuffix): salva_arquivo.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/jogo/salva_arquivo.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/jogo/salva_arquivo.cpp$(DependSuffix) -MM salva_arquivo.cpp

../build-$(ConfigurationName)/jogo/salva_arquivo.cpp$(PreprocessSuffix): salva_arquivo.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/jogo/salva_arquivo.cpp$(PreprocessSuffix) salva_arquivo.cpp


-include ../build-$(ConfigurationName)/jogo//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


