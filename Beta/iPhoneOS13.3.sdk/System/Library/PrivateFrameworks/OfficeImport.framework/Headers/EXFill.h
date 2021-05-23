/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXFill : NSObject

+ (id)edFillFromXmlFillElement:(struct _xmlNode *)arg1 differentialFill:(_Bool)arg2 state:(id)arg3;
+ (id)edPatternFillFromXmlElement:(struct _xmlNode *)arg1 differentialFill:(_Bool)arg2 state:(id)arg3;
+ (id)edGradientFillFromXmlElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (id)patternFillTypeEnumMap;
+ (id)gradientFillTypeEnumMap;
+ (id)edFillFromXmlFillElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (int)edPatternTypeFromXmlPatternTypeString:(id)arg1;
+ (int)edGradientTypeFromXmlGradientTypeString:(id)arg1 state:(id)arg2;
+ (id)edStopFromXmlGradientElement:(struct _xmlNode *)arg1 state:(id)arg2;

@end
