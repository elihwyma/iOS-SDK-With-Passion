/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMMapper.h>

@class EDStyle, EDWorkbook;

__attribute__((visibility("hidden")))
@interface EMCellNumberMapper : CMMapper

{
    double edValue;
    EDStyle *edStyle;
    EDWorkbook *workbook;
    double _columnWidth;
}

@property double columnWidth;

- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)initWithDoubleValue:(double)arg1 style:(id)arg2 columnWidth:(double)arg3 workbook:(id)arg4 parent:(id)arg5;
- (id)formatValueAsNumber;
- (id)insertRedSpanIfNegativeAt:(id)arg1;

@end
