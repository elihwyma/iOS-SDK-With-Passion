/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, _UIDataSourceBatchUpdateMapHelper, _UIDataSourceSnapshotter;

__attribute__((visibility("hidden")))
@interface _UIDataSourceUpdateMap : NSObject

{
    _UIDataSourceSnapshotter *_initialSnapshot;
    _UIDataSourceSnapshotter *_finalSnapshot;
    NSArray *_originalUpdateItems;
    NSArray *_updateItems;
    NSArray *_reverseUpdateItems;
    _UIDataSourceBatchUpdateMapHelper *_batchUpdateMapHelper;
}

@property (retain, nonatomic) _UIDataSourceSnapshotter *initialSnapshot;
@property (copy, nonatomic) NSArray *originalUpdateItems;
@property (retain, nonatomic) NSArray *updateItems;
@property (retain, nonatomic) NSArray *reverseUpdateItems;
@property (retain, nonatomic) _UIDataSourceSnapshotter *finalSnapshot;
@property (retain, nonatomic) _UIDataSourceBatchUpdateMapHelper *batchUpdateMapHelper;
@property (nonatomic, readonly) _Bool isBatchUpdateMap;

+ (id)mapForInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 batchUpdateItems:(id)arg3;
+ (id)mapForInitialSnapshot:(id)arg1 orderedUpdateItems:(id)arg2;

- (id)description;
- (id)updates;
- (long long)finalSectionIndexForInitialSectionIndex:(long long)arg1;
- (long long)initialSectionIndexForFinalSectionIndex:(long long)arg1;
- (id)finalIndexPathForInitialIndexPath:(id)arg1;
- (id)initialIndexPathForFinalIndexPath:(id)arg1;
- (id)finalIndexPathForIndexPath:(id)arg1 startingAtUpdateWithIdentifier:(id)arg2;
- (id)initialIndexPathForIndexPath:(id)arg1 beforeUpdateWithIdentifier:(id)arg2;
- (id)rebasedMapFromNewBaseMap:(id)arg1;
- (void)_performAppendingInsertsFixups;
- (id)updateMapByRevertingUpdateWithIdentifier:(id)arg1;
- (void)_computeFinalSnapshotAndReverseUpdateItemsForCollectionViewUpdateItems:(id)arg1;
- (id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 updateItems:(id)arg3;
- (_Bool)_isSectionOnlyIndexPath:(id)arg1;
- (id)_sectionIndexPathForSection:(long long)arg1;
- (id)_transformIndexPath:(id)arg1 applyingUpdateItem:(id)arg2 withSnapshot:(id)arg3;
- (void)_updateSnapshot:(id)arg1 forUpdateItem:(id)arg2;
- (long long)_transformSectionIndex:(long long)arg1 applyingUpdateItem:(id)arg2 withSnapshot:(id)arg3;
- (_Bool)_mapIsSimpleInsertMoveSequence;
- (id)finalUpdateForInitialUpdate:(id)arg1;
- (id)initialUpdateForUpdateIdentifier:(id)arg1;
- (id)_rebasedUpdatesForUpdate:(id)arg1;
- (id)_findUpdateForIdentifier:(id)arg1;
- (id)_updateMapByRevertingAllUpdatesExceptUpdateWithIdentifier:(id)arg1;
- (id)submapAfterUpdate:(id)arg1;
- (id)submapBeforeUpdate:(id)arg1;
- (id)_mapUpdateForCollectionUpdateItem:(id)arg1 snapshot:(id)arg2;
- (id)initialUpdateForFinalUpdate:(id)arg1;

@end
