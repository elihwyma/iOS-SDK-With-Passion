/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBBorders : NSObject

+ (int)convertXlBorderEnumToED:(int)arg1;
+ (int)convertXlDiagStyleEnumToED:(int)arg1;
+ (int)convertEDBorderEnumToXl:(int)arg1;
+ (int)convertEDDiagonalEnumToXl:(int)arg1;
+ (id)edBordersFromXlXf:(struct XlXf *)arg1 edResources:(id)arg2;
+ (id)edBordersFromXlDXf:(struct XlDXf *)arg1 edResources:(id)arg2;

@end
