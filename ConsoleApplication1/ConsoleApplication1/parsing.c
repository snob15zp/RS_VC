#pragma warning(disable : 4996)

#include <stddef.h>
#include <stdbool.h>
//#include <string.h>
//
//#include "settings.h"
//#include "parsing.h"
//#include "Sampling.h"
//#include "ParamRead.h"
//
////void ParameterInputName(ParameterInput_t *ParametrData,const char* buff, bool * settings_changed);
//void ParameterInputName(void* ParametrData, const char* buff, bool* settings_changed);
//
////Sampling 658
////const char *string;void (*func); const char *format;  void* parameter;  E_VariableType ParameterType;
//
//ParameterInput_t ParameterInput[]=
//{
//    {"name:",NULL,NULL,(void*)Params.Name,EVT_string}
//   ,{NULL,NULL,NULL,NULL,EVT_NumOfEl}
//};
//
//
//
//int strncmpi(const char* s1, const char* s2, size_t n)
//{
//    while (n && *s1 && (toupper(*s1) == toupper(*s2)))
//    {
//        ++s1;
//        ++s2;
//        --n;
//    }
//    if (n == 0)
//    {
//        return 0;
//    }
//    else
//    {
//        return (toupper(*(unsigned char*)s1) - toupper(*(unsigned char*)s2));
//    }
//}
//
//
//bool CmpString(char* str, char* cmp) {
//    return strncmpi(str, cmp, strlen(cmp)) == 0;
//}
//
//
//void ParameterInputName(void* ParametrData,const char* buff, bool * settings_changed)
//{
// static char ExperimentName[80] = "Anon";
////        char stringLog[80];
//      if (CmpString(buff, (char*)(((ParameterInput_t * )ParametrData)->string))) { //  no in setting
//        strcpy(ExperimentName, &buff[5]);
//        ExperimentName[19] = '\0';  // Truncate to 20 chars
//        // remove trailing zeroes
//        for (int i = (strlen(ExperimentName) - 1); i > 0; i--) {
//          if (ExperimentName[i] != ' ')
//            break;
//        }
//        if (strcmp((((ParameterInput_t*)ParametrData)->parameter), ExperimentName) != 0) {
////          strcpy(stringLog,ParametrData->string);
//         //rdd Log("name changed from \"%s\" to \"%s\"", ((ParameterInput_t*)ParametrData)->parameter, ExperimentName);
//          // backup RAM for name limited to 19 characters
//          for (int i = 0; i < 19; i++) {
//             ((char *)(((ParameterInput_t*)ParametrData)->parameter))[i] = ExperimentName[i];
//          }
//         ((char *)(((ParameterInput_t*)ParametrData)->parameter))[19] = '\0';
//          settings_changed = true;
//        }
//      }
//
//};

void mainParameterInputA(const char* buff, bool * settings_changed)
{
    //uint8_t i;
    //i=0;
    //while (ParameterInput[i].string!=NULL)
    //    {ParameterInput[i].func(ParameterInput+i,buff,settings_changed);
    //    };
};

