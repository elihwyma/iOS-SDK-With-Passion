/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADDrawable.h>

@class NSMutableArray, OADTableGrid;

__attribute__((visibility("hidden")))
@interface OADTable : OADDrawable

{
    OADTableGrid *mGrid;
    NSMutableArray *mRows;
}

+ (void)applyTextStyle:(id)arg1 toParagraphProperties:(id)arg2;

- (id)init;
- (id)description;
- (unsigned long long)rowCount;
- (id)rowAtIndex:(unsigned long long)arg1;
- (id)grid;
- (id)tableProperties;
- (id)addRow;
- (void)flipTableRTL;
- (void)setParentTextListStyle:(id)arg1;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (id)cellAtPos:(struct OADTMatrixPos)arg1;
- (struct OADTMatrixPos)masterPosOfPos:(struct OADTMatrixPos)arg1;
- (id)masterCellOfPos:(struct OADTMatrixPos)arg1;
- (void)flattenStyle;

@end
