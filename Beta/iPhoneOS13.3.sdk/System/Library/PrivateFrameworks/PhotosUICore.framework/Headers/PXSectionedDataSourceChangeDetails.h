/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSIndexSet, NSNumber, NSString, PXArrayChangeDetails;

@interface PXSectionedDataSourceChangeDetails : NSObject

{
    NSDictionary *_itemChangeDetailsBySection;
    NSDictionary *_itemsWithSubitemChangesBySection;
    NSDictionary *_subitemChangeDetailsByItemBySection;
    NSNumber *_hasAnyInsertionsRemovalsOrMovesCache;
    unsigned long long _fromDataSourceIdentifier;
    unsigned long long _toDataSourceIdentifier;
    PXArrayChangeDetails *_sectionChanges;
    NSIndexSet *_sectionsWithItemChanges;
}

@property (nonatomic, readonly) unsigned long long fromDataSourceIdentifier;
@property (nonatomic, readonly) unsigned long long toDataSourceIdentifier;
@property (nonatomic, readonly) PXArrayChangeDetails *sectionChanges;
@property (nonatomic, readonly) NSIndexSet *sectionsWithItemChanges;
@property (nonatomic, readonly) _Bool hasAnyInsertionsRemovalsOrMoves;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (struct PXSimpleIndexPath)indexPathAfterApplyingChanges:(id)arg1 toIndexPath:(struct PXSimpleIndexPath)arg2 hasIncrementalChanges:(out _Bool *)arg3 objectChanged:(out _Bool *)arg4;
+ (struct PXSimpleIndexPath)indexPathAfterRevertingChanges:(id)arg1 fromIndexPath:(struct PXSimpleIndexPath)arg2 hasIncrementalChanges:(out _Bool *)arg3 objectChanged:(out _Bool *)arg4;
+ (id)indexPathSetAfterApplyingChanges:(id)arg1 toIndexPathSet:(id)arg2 hasIncrementalChanges:(out _Bool *)arg3;
+ (id)indexPathSetAfterRevertingChanges:(id)arg1 fromIndexPathSet:(id)arg2 hasIncrementalChanges:(out _Bool *)arg3;
+ (_Bool)changesHaveAnyInsertionsRemovalsOrMoves:(id)arg1;
+ (id)changeDetailsWithoutIncrementalChangesFromDataSourceIdentifier:(unsigned long long)arg1 toDataSourceIdentifier:(unsigned long long)arg2;
+ (id)changeDetailsWithNoChangesFromDataSourceIdentifier:(unsigned long long)arg1 toDataSourceIdentifier:(unsigned long long)arg2;
+ (void)debug_assertValidChangeDetails:(id)arg1 fromDataSource:(id)arg2 toDataSource:(id)arg3;

- (id)init;
- (id)itemChangesInSection:(long long)arg1;
- (id)initWithFromDataSourceIdentifier:(unsigned long long)arg1 toDataSourceIdentifier:(unsigned long long)arg2 sectionChanges:(id)arg3 itemChangeDetailsBySection:(id)arg4 subitemChangeDetailsByItemBySection:(id)arg5;
- (id)itemsWithSubitemChangesInSection:(long long)arg1;
- (id)subitemChangesInItem:(long long)arg1 section:(long long)arg2;
- (struct PXSimpleIndexPath)indexPathAfterApplyingChangesToIndexPath:(struct PXSimpleIndexPath)arg1 hasIncrementalChanges:(out _Bool *)arg2 objectChanged:(out _Bool *)arg3;
- (struct PXSimpleIndexPath)indexPathAfterRevertingChangesFromIndexPath:(struct PXSimpleIndexPath)arg1 hasIncrementalChanges:(out _Bool *)arg2 objectChanged:(out _Bool *)arg3;
- (id)indexPathSetAfterApplyingChangesToIndexPathSet:(id)arg1 hasIncrementalChanges:(out _Bool *)arg2;
- (id)indexPathSetAfterRevertingChangesFromIndexPathSet:(id)arg1 hasIncrementalChanges:(out _Bool *)arg2;
- (id)deletedItemsInSection:(long long)arg1;
- (id)insertedItemsInSection:(long long)arg1;
- (id)changedItemsInSection:(long long)arg1;

@end
