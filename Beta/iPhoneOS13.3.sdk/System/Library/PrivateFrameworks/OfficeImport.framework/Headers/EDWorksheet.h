/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EDSheet.h>

@class EDCollection, EDColumnInfoCollection, EDMergedCellCollection, EDPane, EDReference, EDRowBlocks, EDWarnings, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface EDWorksheet : EDSheet

{
    EDRowBlocks *mRowBlocks;
    EDColumnInfoCollection *mColumnInfos;
    EDCollection *mConditionalFormattings;
    EDCollection *mHyperlinks;
    EDCollection *mTables;
    EDCollection *mPivotTables;
    EDMergedCellCollection *mMergedCells;
    EDPane *mPane;
    EDWarnings *mWorksheetWarnings;
    double mDefaultColumnWidth;
    unsigned short mDefaultRowHeight;
    unsigned long long mMaxRowOutlineLevel;
    unsigned long long mMaxColumnOutlineLevel;
    _Bool mFitToPage;
    EDReference *mMaxCellReferencedInFormulas;
    NSMutableDictionary *mMergedRows;
    NSMutableDictionary *mMergedCols;
    EDReference *mImplicitCellArea;
}

- (id)description;
- (void)teardown;
- (void)setup;
- (void)setPane:(id)arg1;
- (id)pane;
- (id)tables;
- (unsigned short)defaultRowHeight;
- (id)mergedCells;
- (id)rowBlocks;
- (double)defaultColumnWidth;
- (id)columnInfos;
- (id)maxCellReferencedInFormulas;
- (id)hyperlinks;
- (id)conditionalFormattings;
- (void)setDefaultColumnWidth:(double)arg1;
- (void)setDefaultRowHeight:(unsigned short)arg1;
- (void)setFitToPage:(_Bool)arg1;
- (void)setMaxRowOutlineLevel:(unsigned long long)arg1;
- (void)setMaxColumnOutlineLevel:(unsigned long long)arg1;
- (void)updateMaxColumnOutlineLevelIfNeeded:(unsigned long long)arg1;
- (void)reduceMemoryIfPossible;
- (_Bool)fitToPage;
- (id)pivotTables;
- (id)worksheetWarnings;
- (_Bool)hasMergedCells;
- (unsigned long long)maxRowOutlineLevel;
- (void)updateMaxRowOutlineLevelIfNeeded:(unsigned long long)arg1;
- (unsigned long long)maxColumnOutlineLevel;
- (void)setMergedRowsRef:(id)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3;
- (void)setMergedColsRef:(id)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3;
- (_Bool)hasMergedRow;
- (_Bool)isRowMerged:(unsigned int)arg1;
- (id)mergedRowRef:(unsigned int)arg1;
- (_Bool)hasMergedCol;
- (_Bool)isColMerged:(unsigned int)arg1;
- (id)mergedColRef:(unsigned int)arg1;
- (id)implicitCellArea;
- (void)setImplicitCellArea:(id)arg1;

@end
