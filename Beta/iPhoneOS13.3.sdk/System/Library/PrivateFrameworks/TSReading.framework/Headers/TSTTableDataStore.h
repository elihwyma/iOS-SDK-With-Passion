/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSPContainedObject.h>

@class TSPLazyReference, TSTCustomFormatList, TSTMergeRegionMap, TSTTableHeaderStorage, TSTTileIDKeyDict;

@interface TSTTableDataStore : TSPContainedObject

{
    struct TSTTableRBTreeNode_s *mColumnTileIndex;
    struct TSTTableRBTreeNode_s *mRowTileIndex;
    TSTTileIDKeyDict *mTileStorage;
    TSTTableHeaderStorage *mRowHeaderStorage;
    TSPLazyReference *mColumnHeaderStorageReference;
    TSPLazyReference *mConditionalStyleSetTableReference;
    TSPLazyReference *mStringTableReference;
    TSPLazyReference *mStyleTableReference;
    TSPLazyReference *mFormulaTableReference;
    TSPLazyReference *mFormulaErrorTableReference;
    TSPLazyReference *mRichTextPayloadTableReference;
    TSPLazyReference *mFormatTableReference;
    TSPLazyReference *mMultipleChoiceListFormatTableReference;
    TSPLazyReference *mCommentStorageTableReference;
    TSTCustomFormatList *mPasteboardCustomFormatList;
    unsigned short mNextRowStripID;
    unsigned short mNextColumnStripID;
    TSTMergeRegionMap *mMergedCellRanges;
    unsigned int mCellCount;
    _Bool mCellCountValid;
    _Bool mDrawableIsBeingCopied;
    unsigned int mStorageVersion;
}

- (void)dealloc;
- (void)debugDump;
- (id)initWithOwner:(id)arg1;
- (void)validate;
- (void)setDrawableIsBeingCopied:(_Bool)arg1;
- (void)setStorageParentToInfo:(id)arg1;
- (void)p_updateTileStorageToCurrentVersion;
- (_Bool)needToUpgradeCellStorage;
- (void)upgradeDataStoreCellStorage;

@end
