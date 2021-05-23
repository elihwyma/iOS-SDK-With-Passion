/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class TSTCell, TSTCellRegion, TSTTableDataStore, TSTTableModel, TSTTableTile, TSTTableTileRowInfo;

@interface TSTCellIterator : NSObject

{
    TSTTableModel *mTableModel;
    TSTCellRegion *mModelRegion;
    struct NSObject *mModelRegionIterator;
    TSTTableDataStore *mTableDataStore;
    CDStruct_0441cfb5 mPreviousCellID;
    TSTTableTileRowInfo *mCurRow;
    TSTTableTile *mCurTile;
    unsigned short mCurRowID;
    struct _NSRange mCurTileRange;
    TSTCell *mCell;
    _Bool mSkipStyleOnlyCells;
    _Bool mSkipCommentStorageOnlyCells;
    _Bool mDontExpandCellRefs;
    int mRowWalkDirection;
    _Bool mDontCheckSize;
    _Bool mDontReturnMergeRegions;
    _Bool mReturnHiddenCells;
    _Bool mDontInflateFormulas;
    _Bool mReturnEmptyCells;
}

@property (readonly) _Bool dontExpandCellRefs;
@property (readonly) int rowWalkDirection;

- (void)dealloc;
- (void)terminate;
- (id)initWithTableModel:(id)arg1 region:(id)arg2 flags:(unsigned long long)arg3;
- (_Bool)getNext:(CDStruct_6188ab8e *)arg1;
- (id)initWithTableModel:(id)arg1;
- (id)initWithTableModel:(id)arg1 range:(CDStruct_5f1f7aa9)arg2;
- (id)initWithTableModel:(id)arg1 flags:(unsigned long long)arg2;
- (id)initWithTableModel:(id)arg1 range:(CDStruct_5f1f7aa9)arg2 flags:(unsigned long long)arg3;
- (void)p_resetIterData:(CDStruct_6188ab8e *)arg1;
- (_Bool)p_getData:(CDStruct_6188ab8e *)arg1 forCellID:(CDStruct_0441cfb5)arg2;
- (id)initWithTableModel:(id)arg1 region:(id)arg2;

@end
