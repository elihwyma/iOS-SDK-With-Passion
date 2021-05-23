/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableIndexSet, _UIDataSourceSnapshotter;

__attribute__((visibility("hidden")))
@interface _UIDataSourceBatchUpdateMapHelper : NSObject

{
    _UIDataSourceSnapshotter *_initialSnapshot;
    _UIDataSourceSnapshotter *_finalSnapshot;
    NSArray *_updateItems;
    NSMutableIndexSet *_movedItems;
    NSMutableIndexSet *_movedSections;
    NSMutableIndexSet *_deletedSections;
    NSMutableIndexSet *_insertedSections;
    long long *_oldSectionMap;
    long long *_newSectionMap;
    long long *_oldGlobalItemMap;
    long long *_newGlobalItemMap;
}

- (void)dealloc;
- (id)description;
- (long long)finalSectionIndexForInitialSectionIndex:(long long)arg1;
- (long long)initialSectionIndexForFinalSectionIndex:(long long)arg1;
- (id)finalIndexPathForInitialIndexPath:(id)arg1;
- (long long)finalGlobalIndexForInitialGlobalIndex:(long long)arg1;
- (long long)initialGlobalIndexForFinalGlobalIndex:(long long)arg1;
- (void)_computeSectionUpdates;
- (void)_computeItemUpdates;
- (id)initialIndexPathForFinalIndexPath:(id)arg1;
- (id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 updates:(id)arg3;

@end
