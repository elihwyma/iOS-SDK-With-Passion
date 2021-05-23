/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSIndexSet;

__attribute__((visibility("hidden")))
@interface IKDiffEvaluator : NSObject

{
    NSArray *_objects;
    NSArray *_oldObjects;
    NSIndexSet *_addedIndexes;
    NSIndexSet *_removedIndexes;
    NSDictionary *_movedIndexesByNewIndex;
    NSDictionary *_oldIndexesByNewIndex;
}

@property (copy, nonatomic, readonly) NSArray *objects;
@property (copy, nonatomic, readonly) NSArray *oldObjects;
@property (copy, nonatomic, readonly) NSIndexSet *addedIndexes;
@property (copy, nonatomic, readonly) NSIndexSet *removedIndexes;
@property (copy, nonatomic, readonly) NSDictionary *movedIndexesByNewIndex;
@property (copy, nonatomic, readonly) NSDictionary *oldIndexesByNewIndex;

- (id)initWithObjects:(id)arg1 oldObjects:(id)arg2 hashing:(CDUnknownBlockType)arg3;
- (void)enumerateCommonObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_evaluateWithHashing:(CDUnknownBlockType)arg1;

@end
