/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@interface PKInkProperties : NSObject

+ (unsigned long long)functionTypeForBezierControlPoints:(CDStruct_d2b197d1)arg1;
+ (id)inkPropertyNames;
+ (id)inputNames;
+ (CDStruct_d2b197d1)controlPointsForFunctionType:(unsigned long long)arg1;
+ (CDStruct_88b945db)rangeForInput:(unsigned long long)arg1;
+ (id)functionNames;
+ (_Bool)bezierControlPoints:(CDStruct_d2b197d1)arg1 isEqual:(CDStruct_d2b197d1)arg2;
+ (CDStruct_88b945db)rangeForInkProperty:(unsigned long long)arg1;
+ (double)defaultValueForInput:(unsigned long long)arg1;
+ (id)blendModeNames;
+ (id)inkTypeNames;
+ (id)inputMaskNames;
+ (unsigned long long)functionTypeForName:(id)arg1;
+ (id)arrayForBezierControlPoints:(CDStruct_d2b197d1)arg1;

@end
