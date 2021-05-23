/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMMapper.h>

@class EDReference;

__attribute__((visibility("hidden")))
@interface EMCellMapper : CMMapper

{
    struct EDCellHeader *edCell;
    EDReference *edMergedCellReference;
    int rowNumber;
    int firstColumn;
    int lastColumn;
    int columnSpan;
    _Bool firstCellFlag;
    _Bool spreadLeftFlag;
    double columnWidth;
}

+ (_Bool)isCellEmpty:(struct EDCellHeader *)arg1;

- (id)initWithParent:(id)arg1;
- (int)columnSpan;
- (double)columnWidth;
- (int)firstColumn;
- (int)lastColumn;
- (void)mapRowColSpansAt:(id)arg1 withState:(id)arg2;
- (id)mapHyperlink:(id)arg1 at:(id)arg2;
- (id)initWithEDCell:(struct EDCellHeader *)arg1 rowInfo:(struct EDRowInfo *)arg2 parent:(id)arg3 state:(id)arg4;
- (void)setLastColumn:(int)arg1;
- (void)setFirstColumn:(int)arg1;
- (void)resetColumnSpan:(int)arg1;
- (_Bool)isCellEmpty;
- (void)setFirstCellFlag;
- (_Bool)isFirstCell;
- (_Bool)isCellSpreading:(id)arg1;
- (_Bool)isCellMerged;
- (void)adjustColumnSpanForGrid:(double *)arg1 columnCount:(unsigned long long)arg2 nextCell:(struct EDCellHeader *)arg3 withState:(id)arg4;
- (void)mapAt:(id)arg1 withState:(id)arg2 height:(double)arg3 nextCell:(struct EDCellHeader *)arg4;

@end
