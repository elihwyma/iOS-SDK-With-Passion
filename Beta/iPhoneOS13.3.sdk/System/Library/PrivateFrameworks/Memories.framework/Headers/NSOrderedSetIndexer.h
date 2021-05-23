/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSIndexSet, NSOrderedSet;

__attribute__((visibility("hidden")))
@interface NSOrderedSetIndexer : NSObject

{
    NSOrderedSet *_initialOrderedSet;
    NSOrderedSet *_finalOrderedSet;
    NSIndexSet *_insertedIndexesAfterDeletions;
    NSIndexSet *_deletedIndexesBeforeInsertions;
}

@property (retain, nonatomic) NSIndexSet *insertedIndexesAfterDeletions;
@property (retain, nonatomic) NSIndexSet *deletedIndexesBeforeInsertions;
@property (retain, nonatomic) NSOrderedSet *initialOrderedSet;
@property (retain, nonatomic) NSOrderedSet *finalOrderedSet;

+ (id)indexerWithInitialSet:(id)arg1 finalSet:(id)arg2;

- (void)analyze;
- (id)initWithInitialSet:(id)arg1 finalSet:(id)arg2;

@end
