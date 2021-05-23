/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSPObject.h>

@class NSArray, TSKCommandController, TSTCell, TSTSearchReference, TSTTableInfo, TSTTableModel, TSTTableSelection, TSTTextStatisticsTracker, TSUPointerKeyDictionary, TSWPStorage;

@interface TSTEditingState : TSPObject

{
    TSWPStorage *mEditingStorage;
    TSTTableInfo *mTableInfo;
    TSTCell *mEditingCell;
    CDStruct_0441cfb5 mEditingCellID;
    int mEditingMode;
    TSTTableSelection *mSelection;
    TSTTableSelection *mSelectionReflectingEditingState;
    TSTSearchReference *mSearchReference;
    int mPreviousEditingMode;
    unsigned char mLastColumnHitByTap;
    TSUPointerKeyDictionary *mColoredReferences;
    _Bool mCellWasEditedInCurrentSession;
    _Bool mEditingCellInProxy;
    TSTTextStatisticsTracker *mTracker;
    _Bool mEndingEditingDueToCancelOperation;
    _Bool _dispatchingPreflight;
    CDStruct_0441cfb5 _lastEditingCellID;
    NSArray *_coloredReferences;
    TSKCommandController *_commandController;
}

@property (nonatomic, readonly) TSKCommandController *commandController;
@property (nonatomic, getter=isDispatchingPreflight) _Bool dispatchingPreflight;
@property (nonatomic, getter=isEndingEditingDueToCancelOperation) _Bool endingEditingDueToCancelOperation;
@property (retain, nonatomic) TSWPStorage *editingStorage;
@property (retain, nonatomic) TSTCell *editingCell;
@property (nonatomic) CDStruct_0441cfb5 editingCellID;
@property (nonatomic, readonly) CDStruct_5f1f7aa9 editingCellRange;
@property (nonatomic) TSTTableInfo *tableInfo;
@property (nonatomic) CDStruct_0441cfb5 lastEditingCellID;
@property (nonatomic, readonly) TSTTableModel *tableModel;
@property (nonatomic, readonly) int editingMode;
@property (copy, nonatomic) TSTTableSelection *selection;
@property (nonatomic) unsigned char lastColumnHitByTap;
@property (nonatomic) _Bool cellWasEditedInCurrentSession;
@property (nonatomic) _Bool editingCellInProxy;
@property (retain, nonatomic) TSTSearchReference *searchReference;
@property (nonatomic) TSTTextStatisticsTracker *tracker;
@property (nonatomic, readonly) int previousEditingMode;
@property (nonatomic, readonly) NSArray *coloredReferences;

- (void)dealloc;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4;
- (id)initWithTableInfo:(id)arg1;
- (void)p_unregisterStorageObserver;
- (void)p_performRichTextStorageDOLC:(id)arg1 newStorage:(id)arg2;
- (void)p_registerStorageObserver;
- (id)initForPasteboardFromSourceInfo:(id)arg1 stylesheet:(id)arg2;
- (id)storageForCellID:(CDStruct_0441cfb5)arg1;
- (id)prepareEditingStorageToEditCell:(CDStruct_0441cfb5)arg1;
- (void)performEndRichTextEditing;
- (void)reloadValue;
- (void)reloadValueFromFocusedCell;
- (void)changeEditingMode:(int)arg1;
- (_Bool)p_shouldSetCellPostFlight;
- (void)willEndEditingDueToCancelOperation;
- (void)didEndEditingDueToCancelOperation;

@end
