/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBCell : NSObject

+ (int)convertXlCellTypeToED:(int)arg1;
+ (int)convertXlErrorEnumToED:(int)arg1;
+ (void)readXlCell:(struct XlCell *)arg1 edRowInfo:(struct EDRowInfo **)arg2 edRowBlock:(id)arg3 edRowBlocks:(id)arg4 state:(id)arg5;
+ (int)convertEDErrorValueEnumToXl:(int)arg1;

@end
