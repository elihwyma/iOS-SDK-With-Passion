/*
 Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
 */

#import <Foundation/NSObject.h>

@class NSArray, NSIndexSet, NSSet;

@interface NAUniqueArrayDiff : NSObject

{
    NSArray *_fromArray;
    NSArray *_toArray;
    NSIndexSet *_deletedIndexes;
    NSIndexSet *_insertedIndexes;
    NSIndexSet *_changedIndexes;
    NSSet *_movedIndexes;
}

@property (retain, nonatomic) NSArray *fromArray;
@property (retain, nonatomic) NSArray *toArray;
@property (retain, nonatomic) NSIndexSet *deletedIndexes;
@property (retain, nonatomic) NSIndexSet *insertedIndexes;
@property (retain, nonatomic) NSIndexSet *changedIndexes;
@property (retain, nonatomic) NSSet *movedIndexes;
@property (nonatomic, readonly) unsigned long long numberOfOperations;

+ (id)_createContainerSetFromArray:(id)arg1 options:(id)arg2;
+ (id)diffFromArray:(id)arg1 toArray:(id)arg2 options:(id)arg3;

- (void)enumerateChangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateInsertsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateDeletesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateMovesUsingBlock:(CDUnknownBlockType)arg1;

@end
