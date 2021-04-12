//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCEFormulaOwning-Protocol.h>
#import <iWorkImport/TSTGroupByChangeProtocol-Protocol.h>

@class NSArray, NSMutableArray, NSMutableIndexSet, TSCECalculationEngine, TSTHiddenStatesOwner, TSTTableFilterSet, TSTTableInfo, TSUMutableUUIDSet, TSUUUIDSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSTHiddenStateExtent : NSObject <TSCEFormulaOwning, TSTGroupByChangeProtocol>
{
    UUIDData_5fbc143e _hiddenStateExtentUid;
    struct unordered_map<TSU::UUIDData<TSP::UUIDData>, unsigned char, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, unsigned char>>> _hiddenByUid;
    BOOL _forRows;
    TSTTableFilterSet *_filterSet;
    TSUMutableUUIDSet *_collapsedGroupUids;
    UUIDData_5fbc143e _hiddenStatesOwnerUid;
    TSTHiddenStatesOwner *_hiddenStatesOwner;
    TSCECalculationEngine *_calcEngine;
    TSTTableInfo *_tableInfo;
    NSMutableIndexSet *_baseUserHiddenIndexes;
    NSMutableIndexSet *_baseFilteredIndexes;
    NSMutableIndexSet *_anyBaseHiddenIndexes;
    struct _opaque_pthread_mutex_t _viewIndexesMutex;
    NSMutableIndexSet *_userHiddenIndexes;
    NSMutableIndexSet *_filteredIndexes;
    NSMutableIndexSet *_anyHiddenIndexes;
    NSMutableIndexSet *_collapsedRowIndexes;
    NSMutableArray *_thresholdCellValues;
    BOOL _needsToUpdateFilterSetForImport;
    TSTTableFilterSet *_rewrittenFilterSet;
    struct vector<std::__1::pair<unsigned int, bool>, std::__1::allocator<std::__1::pair<unsigned int, bool>>> _pendingComputedShowRowResults;
    NSObject<OS_dispatch_queue> *_pendingComputedShowRowResultsQueue;
    vector_e87daf7b _cellRangesToInvalidate;
    BOOL _invalidateViewGeometry;
    BOOL _invalidateCollapsedRows;
}

+ (void)swapIndexesWithIndexSet:(id)arg1 index:(NSUInteger)arg2 withIndex:(NSUInteger)arg3;
+ (id)mutableIndexSetByIntersecting:(id)arg1 withRange:(NSRange)arg2;
@property(readonly, nonatomic) TSUUUIDSet *collapsedGroupUids; // @synthesize collapsedGroupUids=_collapsedGroupUids;
@property(readonly, nonatomic) BOOL forRows; // @synthesize forRows=_forRows;
@property(readonly, nonatomic) NSArray *thresholdCellValues; // @synthesize thresholdCellValues=_thresholdCellValues;
@property(nonatomic) BOOL needsToUpdateFilterSetForImport; // @synthesize needsToUpdateFilterSetForImport=_needsToUpdateFilterSetForImport;
@property(nonatomic) UUIDData_5fbc143e hiddenStateExtentUid; // @synthesize hiddenStateExtentUid=_hiddenStateExtentUid;
@property(nonatomic) __weak TSTHiddenStatesOwner *hiddenStatesOwner; // @synthesize hiddenStatesOwner=_hiddenStatesOwner;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)didChangeGroupByStructure;
- (void)didRemoveRowUID:(const UUIDData_5fbc143e )arg1 fromGroup:(id)arg2;
- (void)didAddRowUID:(const UUIDData_5fbc143e )arg1 toGroup:(id)arg2;
- (void)didRemoveGroup:(id)arg1;
- (void)willRemoveGroup:(id)arg1;
- (void)didCreateGroup:(id)arg1;
- (void)endOfGroupingChangesBatch;
- (void)startOfGroupingChangesBatch;
- (void)hiddenStateChangedForViewIndex:(struct TSUViewColumnOrRowIndex)arg1;
- (struct TSCECellRef)cellReferenceForIndex:(struct TSUModelColumnOrRowIndex)arg1;
- (BOOL)hasFilterRulesWithTable:(id)arg1 inBaseColumns:(id)arg2;
- (void)dirtyFilterState;
- (void)dirtyFilterStateForHeaders;
- (void)dirtyFilterStateForRowRange:(NSRange)arg1;
- (void)filterSetUpdated;
- (BOOL)hasActiveFilters;
- (void)setFilterSetType:(int)arg1;
- (void)enableFilterSet:(BOOL)arg1;
- (void)mutateFormulaFiltersWithTable:(id)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
@property(nonatomic) BOOL needsFilterFormulaRewriteForImport;
- (id)duplicateFilterSetInUidFormWithTable:(id)arg1;
- (id)duplicateFilterSet;
@property(retain, nonatomic) TSTTableFilterSet *filterSet;
- (void)invalidateForCalcEngine:(id)arg1;
- (void)writeResultsForCalcEngine:(id)arg1;
- (CDStruct_2a4d9400)recalculateForCalcEngine:(id)arg1 atFormulaCoord:(struct TSUCellCoord)arg2 recalcOptions:(CDStruct_3d581f42)arg3;
- (id)linkedResolver;
- (UUIDData_5fbc143e)ownerUID;
- (unsigned short)ownerKind;
- (id)p_createThresholdCellValue:(struct TSCEValue)arg1 locale:(id)arg2;
- (struct TSCEValue)p_calculateTopOrBottomThresholdWithCalcEngine:(id)arg1 formulaCoord:(const struct TSUCellCoord )arg2 isTop:(BOOL)arg3 keyScale:(int)arg4;
- (struct TSCEValue)p_calculateAverageThresholdWithCalcEngine:(id)arg1 formulaCoord:(const struct TSUCellCoord )arg2;
- (id)runChange:(id)arg1 withCollapsedState:(id)arg2 outUndoState:(id )arg3;
- (id)applyCollapseExpandState:(id)arg1 outUndoState:(id )arg2;
- (id)copyCollapsedStateToUpdatedGroupUids:(id)arg1;
- (id)expandSummaryGroupUIDs:(id)arg1;
- (id)collapseSummaryGroupUIDs:(id)arg1;
- (void)setCategoryGroupUID:(const UUIDData_5fbc143e )arg1 asCollapsed:(BOOL)arg2;
- (BOOL)isCategoryGroupUIDCollapsed:(const UUIDData_5fbc143e )arg1;
- (BOOL)isCategoryGroupOrParentsCollapsed:(const UUIDData_5fbc143e )arg1;
- (void)p_registerAllFormulaToCalculationEngine;
- (id)precedentsForFilterSet:(id)arg1 calcEngine:(id)arg2 hostOwnerUID:(const UUIDData_5fbc143e )arg3 hostCellID:(const struct TSUCellCoord )arg4;
- (void)p_removeAllFormulaFromCalculationEngine;
- (void)remapTableUIDsInFormulasWithMap:(const UUIDMap_b66c2694 )arg1 calcEngine:(id)arg2;
- (void)unregisterFromCalcEngine;
- (int)registerWithCalcEngine:(id)arg1 baseOwnerUID:(const UUIDData_5fbc143e )arg2;
- (void)encodeToArchive:(struct HiddenStateExtentArchive )arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct HiddenStateExtentArchive )arg1 unarchiver:(id)arg2 forHiddenStatesOwner:(id)arg3;
- (id)mutableAnyHiddenIndexes;
- (id)mutableFilteredIndexes;
- (id)mutableUserHiddenIndexes;
- (void)swapBaseIndex:(struct TSUModelColumnOrRowIndex)arg1 withIndex:(struct TSUModelColumnOrRowIndex)arg2;
- (void)moveViewRangeOnlyFrom:(NSRange)arg1 toIndex:(struct TSUViewColumnOrRowIndex)arg2;
- (void)moveBaseRangeFrom:(NSRange)arg1 toIndex:(struct TSUModelColumnOrRowIndex)arg2;
- (void)deleteBaseRange:(NSRange)arg1 withUids:(const vector_4dc5f307 )arg2;
- (void)insertBaseRange:(NSRange)arg1;
- (unsigned int)indexOfVisibleAfterAndIncludingIndex:(unsigned int)arg1;
- (unsigned int)indexOfVisibleAfterIndex:(unsigned int)arg1;
- (unsigned int)indexOfVisibleBeforeAndIncludingIndex:(unsigned int)arg1;
- (unsigned int)indexOfVisibleBeforeIndex:(unsigned int)arg1;
- (BOOL)hasHiddenAtIndex:(unsigned int)arg1;
- (BOOL)anyHiddenInRange:(NSRange)arg1 forAction:(unsigned char)arg2;
- (BOOL)anyHiddenInRange:(NSRange)arg1;
- (unsigned int)numberOfUserHiddenInRange:(NSRange)arg1;
- (unsigned int)numberOfUserHiddenInBaseRange:(NSRange)arg1;
- (unsigned int)numberOfHiddenInBaseRange:(NSRange)arg1;
- (unsigned int)numberOfHiddenInRange:(NSRange)arg1;
- (id)indexesOfVisibleIndexesInIndexes:(id)arg1;
- (id)indexesOfUserVisibleInRange:(NSRange)arg1;
- (id)indexesOfVisibleInRange:(NSRange)arg1;
- (id)indexesOfCollapsedInRange:(NSRange)arg1;
- (id)indexesOfFilteredInRange:(NSRange)arg1;
- (id)indexesOfUserHiddenInRange:(NSRange)arg1;
- (id)indexesOfHiddenInBaseRange:(NSRange)arg1;
- (id)indexesOfHiddenInRange:(NSRange)arg1;
- (unsigned char)hidingActionForBaseIndex:(struct TSUModelColumnOrRowIndex)arg1;
- (unsigned char)hidingActionForViewIndex:(struct TSUViewColumnOrRowIndex)arg1;
- (BOOL)showAtBaseIndex:(struct TSUModelColumnOrRowIndex)arg1 forAction:(unsigned char)arg2;
- (BOOL)hideAtBaseIndex:(struct TSUModelColumnOrRowIndex)arg1 forAction:(unsigned char)arg2;
- (BOOL)showAtViewIndex:(struct TSUViewColumnOrRowIndex)arg1 forAction:(unsigned char)arg2;
- (BOOL)hideAtViewIndex:(struct TSUViewColumnOrRowIndex)arg1 forAction:(unsigned char)arg2;
- (id)userHiddenIndexes;
- (id)filteredIndexes;
- (id)anyHiddenIndexes;
- (id)collapsedRowIndexes;
- (BOOL)useCollapsedRows;
- (void)clearInvalidIndexes;
- (void)loadIndexesFromTable:(id)arg1;
@property(readonly, nonatomic) unsigned int numberOfUserHidden;
@property(readonly, nonatomic) unsigned int numberOfHidden;
@property(readonly, nonatomic) BOOL anyUserHidden;
@property(readonly, nonatomic) BOOL anyCollapsed;
@property(readonly, nonatomic) BOOL anyHidden;
- (void)removeUid:(const UUIDData_5fbc143e )arg1;
- (unsigned char)hidingActionForUid:(const UUIDData_5fbc143e )arg1;
- (BOOL)showAtUid:(const UUIDData_5fbc143e )arg1 forIndex:(struct TSUModelColumnOrRowIndex)arg2 forAction:(unsigned char)arg3;
- (BOOL)showAtUid:(const UUIDData_5fbc143e )arg1 forAction:(unsigned char)arg2;
- (BOOL)hideAtUid:(const UUIDData_5fbc143e )arg1 forIndex:(struct TSUModelColumnOrRowIndex)arg2 forAction:(unsigned char)arg3;
- (BOOL)hideAtUid:(const UUIDData_5fbc143e )arg1 forAction:(unsigned char)arg2;
- (void)removeHiddenIndex:(struct TSUModelColumnOrRowIndex)arg1 forAction:(unsigned char)arg2;
- (void)addHiddenIndex:(struct TSUModelColumnOrRowIndex)arg1 forAction:(unsigned char)arg2;
- (struct TSUViewColumnOrRowIndex)viewIndexForBaseIndex:(struct TSUModelColumnOrRowIndex)arg1;
- (struct TSUModelColumnOrRowIndex)baseIndexForViewIndex:(struct TSUViewColumnOrRowIndex)arg1;
- (void)willChangeGroupByTo:(id)arg1;
- (void)syncUpHiddenStateFormulaOwnerUIDs;
@property(readonly, nonatomic) TSTTableInfo *tableInfo;
- (void)dealloc;
- (id)initWithHiddenStatesOwner:(id)arg1 forRows:(BOOL)arg2;

@end

