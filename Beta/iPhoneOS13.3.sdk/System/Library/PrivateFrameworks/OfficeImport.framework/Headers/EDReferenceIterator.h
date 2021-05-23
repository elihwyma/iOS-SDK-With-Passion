/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class EDCollection, EDReference, EDRowBlock, EDRowBlocks, EDWorkbook, EDWorksheet;

__attribute__((visibility("hidden")))
@interface EDReferenceIterator : NSObject

{
    EDWorkbook *mWorkbook;
    EDWorksheet *mCurrentSheet;
    EDCollection *mReferences;
    EDReference *mReference;
    EDRowBlocks *mRowBlocks;
    EDRowBlock *mRowBlock;
    unsigned long long mRowBlockIndex;
    struct EDRowInfo *mRowInfo;
    unsigned int mRowInfoIndex;
    unsigned int mCellIndex;
    unsigned int mNextArrayIndex;
    int mCurrentCellIndex;
    unsigned int mPreviousColumnNumber;
}

+ (id)referenceIteratorWithReferenceArray:(id)arg1 workbook:(id)arg2;
+ (id)referenceIteratorWithReference:(id)arg1 workbook:(id)arg2;

- (void)dealloc;
- (void)setReference:(id)arg1;
- (void)setCurrentSheet:(id)arg1;
- (struct EDCellHeader *)nextCell;
- (unsigned int)currentCellIndex;
- (id)initWithReferenceArray:(id)arg1 reference:(id)arg2 workbook:(id)arg3;
- (id)initWithReference:(id)arg1 workbook:(id)arg2;
- (id)initWithReferenceArray:(id)arg1 workbook:(id)arg2;
- (_Bool)nextRow;
- (_Bool)nextReference;

@end
