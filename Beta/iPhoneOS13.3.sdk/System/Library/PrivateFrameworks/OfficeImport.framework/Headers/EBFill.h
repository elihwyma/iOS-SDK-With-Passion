/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBFill : NSObject

+ (id)edFillFromXlXf:(struct XlXf *)arg1 edResources:(id)arg2;
+ (id)edFillFromXlDXf:(struct XlDXf *)arg1 edResources:(id)arg2;
+ (int)convertXlFillPatternEnumToED:(int)arg1;
+ (int)convertEDPatternFillEnumToXl:(int)arg1;
+ (_Bool)extractFromEDFill:(id)arg1 foreColorReference:(id *)arg2 backColorReference:(id *)arg3 fillPatternEnum:(int *)arg4;

@end
