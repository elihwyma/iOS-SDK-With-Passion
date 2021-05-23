/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

#import <WorkflowKit/Swift-Protocol.h>

@class NSIndexSet, NSOrderedSet, NSSet;

@interface WFChangeset : NSObject <Swift>

{
    NSIndexSet *_deletedIndexes;
    NSIndexSet *_insertedIndexes;
    NSOrderedSet *_insertedObjects;
    NSSet *_movedIndexes;
}

@property (copy, nonatomic, readonly) NSIndexSet *deletedIndexes;
@property (copy, nonatomic, readonly) NSIndexSet *insertedIndexes;
@property (copy, nonatomic, readonly) NSOrderedSet *insertedObjects;
@property (copy, nonatomic, readonly) NSSet *movedIndexes;
@property (nonatomic, readonly, getter=isEmpty) _Bool empty;

+ (id)changesetFromStart:(id)arg1 toEnd:(id)arg2;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)changesetByMergingChangeset:(id)arg1;
- (id)initWithDeletedIndexes:(id)arg1 insertedIndexes:(id)arg2 insertedObjects:(id)arg3 movedIndexes:(id)arg4;
- (id)endResultByApplyingToStart:(id)arg1;

@end
