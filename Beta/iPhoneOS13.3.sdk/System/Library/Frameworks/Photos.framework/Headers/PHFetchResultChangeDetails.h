/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSArray, NSIndexSet, PHFetchResult;

@interface PHFetchResultChangeDetails : NSObject

{
    PHFetchResult *_fetchResultBeforeChanges;
    PHFetchResult *_fetchResultAfterChanges;
    NSArray *_previousItems;
    NSArray *_currentItems;
    NSIndexSet *_removedIndexes;
    NSIndexSet *_insertedIndexes;
    NSIndexSet *_movedIndexes;
    struct __CFArray *_movedFromIndexes;
    NSArray *_changedItems;
    NSIndexSet *_changedIndexes;
    _Bool _skipIncrementalChanges;
}

@property (nonatomic, readonly) NSIndexSet *movedIndexes;
@property (nonatomic, readonly) const struct __CFArray *movedFromIndexes;
@property (readonly) PHFetchResult *fetchResultBeforeChanges;
@property (readonly) PHFetchResult *fetchResultAfterChanges;
@property (readonly) _Bool hasIncrementalChanges;
@property (readonly) NSIndexSet *removedIndexes;
@property (readonly) NSArray *removedObjects;
@property (readonly) NSIndexSet *insertedIndexes;
@property (readonly) NSArray *insertedObjects;
@property (readonly) NSIndexSet *changedIndexes;
@property (readonly) NSArray *changedObjects;
@property (readonly) _Bool hasMoves;

+ (id)_identifiersForPHObjects:(id)arg1;
+ (id)changeDetailsFromFetchResult:(id)arg1 toFetchResult:(id)arg2 changedObjects:(id)arg3;

- (void)dealloc;
- (id)description;
- (_Bool)shouldReload;
- (void)enumerateMovesWithBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)snapshotIndexForContainedObject:(id)arg1;
- (id)initWithFetchResult:(id)arg1 currentFetchResult:(id)arg2 changedItems:(id)arg3 unknownMergeEvent:(_Bool)arg4;
- (id)initWithManualFetchResultAfterChanges:(id)arg1;
- (id)currentItems;
- (void)calculateDiffsAndAccumulateInsertedCount:(unsigned long long *)arg1 updatedCount:(unsigned long long *)arg2 deletedCount:(unsigned long long *)arg3;
- (void)calculateDiffs;
- (_Bool)hasDiffs;

@end
