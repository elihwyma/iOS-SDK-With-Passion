/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBConditionalFormat : NSObject

+ (int)convertXlConditionalFmtTypeEnumToED:(int)arg1;
+ (int)convertXlConditionalFmtOperatorEnumToED:(int)arg1;
+ (void)readXlConditionalFormat:(struct XlConditionalFormat *)arg1 toEDConditionalFormatting:(id)arg2 state:(id)arg3;
+ (_Bool)validXlCf:(struct XlCf *)arg1;
+ (int)convertEDConditionalFmtTypeEnumToXl:(int)arg1;
+ (int)convertEDConditionalFmtOperatorEnumToXl:(int)arg1;

@end
