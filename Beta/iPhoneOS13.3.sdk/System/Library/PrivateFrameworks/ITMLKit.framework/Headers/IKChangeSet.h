/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSIndexSet;

@interface IKChangeSet : NSObject

{
    NSIndexSet *_addedIndexes;
    NSIndexSet *_removedIndexes;
    NSDictionary *_movedIndexesByNewIndex;
    NSDictionary *_updatedIndexesByNewIndex;
}

@property (copy, nonatomic, readonly) NSIndexSet *addedIndexes;
@property (copy, nonatomic, readonly) NSIndexSet *removedIndexes;
@property (copy, nonatomic, readonly) NSDictionary *movedIndexesByNewIndex;
@property (copy, nonatomic, readonly) NSDictionary *updatedIndexesByNewIndex;

- (id)initWithAddedIndexes:(id)arg1 removedIndexes:(id)arg2 movedIndexesByNewIndex:(id)arg3 updatedIndexesByNewIndex:(id)arg4;
- (long long)oldIndexForNewIndex:(long long)arg1;
- (id)changeSetByConcatenatingChangeSet:(id)arg1;
- (long long)newIndexForOldIndex:(long long)arg1;
- (id)changeSetByConvertingOldIndexesUsingChangeSet:(id)arg1 andNewIndexesUsingChangeSet:(id)arg2;
- (long long)newIndexByShiftingOldIndex:(long long)arg1 grouped:(_Bool)arg2;
- (id)changeSetBySubtractingChangeSet:(id)arg1;

@end
