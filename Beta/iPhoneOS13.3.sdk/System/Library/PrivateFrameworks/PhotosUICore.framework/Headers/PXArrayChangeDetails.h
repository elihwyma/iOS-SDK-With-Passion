/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSIndexSet;

@interface PXArrayChangeDetails : NSObject <Swift>

{
    NSIndexSet *_removedIndexes;
    NSIndexSet *_insertedIndexes;
    NSIndexSet *_movesToIndexes;
    const struct __CFArray *_movesFromIndexes;
    NSIndexSet *_changedIndexes;
}

@property (nonatomic, readonly) _Bool hasIncrementalChanges;
@property (nonatomic, readonly) NSIndexSet *removedIndexes;
@property (nonatomic, readonly) NSIndexSet *insertedIndexes;
@property (nonatomic, readonly) _Bool hasMoves;
@property (nonatomic, readonly) NSIndexSet *movesToIndexes;
@property (nonatomic, readonly) const struct __CFArray *movesFromIndexes;
@property (nonatomic, readonly) NSIndexSet *changedIndexes;
@property (nonatomic, readonly) _Bool hasAnyChanges;
@property (nonatomic, readonly) _Bool hasAnyInsertionsRemovalsOrMoves;

+ (id)changeDetailsFromArray:(id)arg1 toArray:(id)arg2 changedObjects:(id)arg3;
+ (id)changeDetailsFromFetchResultChangeDetails:(id)arg1;
+ (id)changeDetailsWithNoChanges;
+ (id)changeDetailsWithNoIncrementalChanges;
+ (id)changeDetailsWithInsertedIndexRange:(struct _NSRange)arg1;
+ (id)changeDetailsWithRemovedIndexRange:(struct _NSRange)arg1;
+ (id)changeDetailsWithChangedIndexRange:(struct _NSRange)arg1;
+ (id)changeDetailsWithChangedIndexes:(id)arg1;
+ (id)changeDetailsWithMovedFromIndexRange:(struct _NSRange)arg1 toIndexRange:(struct _NSRange)arg2;
+ (id)changeDetailsWithOldKeyItemIndex:(long long)arg1 oldCount:(long long)arg2 newKeyItemIndex:(long long)arg3 newCount:(long long)arg4;
+ (unsigned long long)indexAfterApplyingChanges:(id)arg1 toIndex:(unsigned long long)arg2 objectChanged:(out _Bool *)arg3;
+ (unsigned long long)indexAfterRevertingChanges:(id)arg1 fromIndex:(unsigned long long)arg2 objectChanged:(out _Bool *)arg3;
+ (_Bool)_mutableCopyInputs;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)indexAfterRevertingChangesFromIndex:(unsigned long long)arg1;
- (unsigned long long)indexAfterApplyingChangesToIndex:(unsigned long long)arg1;
- (id)initWithIncrementalChangeDetailsRemovedIndexes:(id)arg1 insertedIndexes:(id)arg2 movesToIndexes:(id)arg3 movesFromIndexes:(const struct __CFArray *)arg4 changedIndexes:(id)arg5;
- (id)changeDetailsShiftedBy:(long long)arg1;
- (id)changeDetailsByAddingChangedIndexes:(id)arg1;
- (void)enumerateMovedRangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateMovedIndexesUsingBlock:(CDUnknownBlockType)arg1;
- (id)indexSetAfterApplyingChangesToIndexSet:(id)arg1;
- (id)indexSetAfterRevertingChangesToIndexSet:(id)arg1;
- (void)applyToIndexSet:(id)arg1;
- (_Bool)canPreserveIncrementalChangesWhenAddingChangeDetails:(id)arg1;
- (id)changeDetailsByAddingChangeDetails:(id)arg1;
- (id)changeDetailsShiftedBy:(long long)arg1 scaledBy:(long long)arg2;

@end
