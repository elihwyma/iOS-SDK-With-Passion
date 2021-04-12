//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

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
    NSUInteger mRowBlockIndex;
    struct EDRowInfo mRowInfo;
    unsigned int mRowInfoIndex;
    unsigned int mCellIndex;
    unsigned int mNextArrayIndex;
    int mCurrentCellIndex;
    unsigned int mPreviousColumnNumber;
}

+ (id)referenceIteratorWithReferenceArray:(id)arg1 workbook:(id)arg2;
+ (id)referenceIteratorWithReference:(id)arg1 workbook:(id)arg2;
// - (void).cxx_destruct;
- (unsigned int)currentCellIndex;
- (struct EDCellHeader )nextCell;
- (void)setCurrentSheet:(id)arg1;
- (void)dealloc;
- (id)initWithReferenceArray:(id)arg1 workbook:(id)arg2;
- (id)initWithReference:(id)arg1 workbook:(id)arg2;
- (id)initWithReferenceArray:(id)arg1 reference:(id)arg2 workbook:(id)arg3;
- (BOOL)nextRow;
- (BOOL)nextReference;
- (void)setReference:(id)arg1;

@end

