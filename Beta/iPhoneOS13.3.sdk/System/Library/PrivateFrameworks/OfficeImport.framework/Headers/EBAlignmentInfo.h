/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBAlignmentInfo : NSObject

+ (int)convertXlHorizAlignEnumToED:(int)arg1;
+ (int)convertXlVertAlignEnumToED:(int)arg1;
+ (int)convertEDHorizontalAlignmentEnumToXl:(int)arg1;
+ (int)convertEDVerticalAlignmentEnumToXl:(int)arg1;
+ (id)edAlignmentInfoFromXlXf:(struct XlXf *)arg1;
+ (id)edAlignmentInfoFromXlDXfAlign:(struct XlDXfAlign *)arg1;
+ (id)edAlignmentInfoFromXlGraphicsInfo:(struct XlGraphicsInfo *)arg1;
+ (void)writeAlignmentInfo:(id)arg1 toXlXf:(struct XlXf *)arg2;
+ (struct XlDXfAlign *)xlDXfAlignFromEDAlignmentInfo:(id)arg1;
+ (void)writeAlignmentInfo:(id)arg1 toXlGraphicsInfo:(struct XlGraphicsInfo *)arg2;

@end
