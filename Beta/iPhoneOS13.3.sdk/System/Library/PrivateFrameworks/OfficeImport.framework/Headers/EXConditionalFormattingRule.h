/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXConditionalFormattingRule : NSObject

+ (void)readFrom:(struct _xmlNode *)arg1 x14:(_Bool)arg2 edConditionalFormatting:(id)arg3 edReference:(id)arg4 state:(id)arg5;
+ (int)edRuleTypeFromXmlRuleTypeString:(id)arg1;
+ (int)edOperatorFromXmlOperatorString:(id)arg1;
+ (int)edTimePeriodFromXmlTimePeriodString:(id)arg1;
+ (id)timePeriodEnumMap;
+ (id)operatorStringEnumMap;
+ (id)conditionalFormattingRuleTypeEnumMap;

@end
