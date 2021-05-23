/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class ESDContainer, OABReaderState, OABTableSortedIntArray, OADTable;

__attribute__((visibility("hidden")))
@interface OABRTable : NSObject

{
    ESDContainer *mSrcTable;
    OADTable *mTgtTable;
    OABReaderState *mState;
    struct CGPoint mScale;
    int mRowCount;
    int mColumnCount;
    OABTableSortedIntArray *mXCoords;
    OABTableSortedIntArray *mYCoords;
    struct OABTable2DArray<EshShape *> *mHorzLines;
    struct OABTable2DArray<EshShape *> *mVertLines;
    struct OABTable2DArray<OABTableCell> *mCells;
}

- (void)dealloc;
- (void)map;
- (id)readStrokeFromShape:(struct EshShape *)arg1;
- (void)readAnchor;
- (void)mapScale;
- (void)readCoordinates;
- (void)readCellsAndLines;
- (void)validateTable;
- (void)createTargetTableContents;
- (id)initWithSourceTable:(id)arg1 targetTable:(id)arg2 state:(id)arg3;

@end
