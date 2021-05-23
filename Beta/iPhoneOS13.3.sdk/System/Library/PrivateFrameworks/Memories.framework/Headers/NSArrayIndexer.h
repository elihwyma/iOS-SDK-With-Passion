/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSArray, NSIndexSet;

__attribute__((visibility("hidden")))
@interface NSArrayIndexer : NSObject

{
    NSArray *_initialArray;
    NSArray *_finalArray;
    NSIndexSet *_insertedIndexesAfterDeletions;
    NSIndexSet *_deletedIndexesBeforeInsertions;
}

@property (retain, nonatomic) NSIndexSet *insertedIndexesAfterDeletions;
@property (retain, nonatomic) NSIndexSet *deletedIndexesBeforeInsertions;
@property (retain, nonatomic) NSArray *initialArray;
@property (retain, nonatomic) NSArray *finalArray;

+ (id)indexerWithInitialArray:(id)arg1 finalArray:(id)arg2;

- (void)analyze;
- (id)initWithInitialArray:(id)arg1 finalArray:(id)arg2;

@end
