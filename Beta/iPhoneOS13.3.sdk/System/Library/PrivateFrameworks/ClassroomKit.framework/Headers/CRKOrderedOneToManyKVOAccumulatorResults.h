/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSIndexSet;

@interface CRKOrderedOneToManyKVOAccumulatorResults : NSObject

{
    NSIndexSet *_insertions;
    NSIndexSet *_deletions;
    NSIndexSet *_replacements;
    NSArray *_moves;
}

@property (retain, nonatomic) NSIndexSet *insertions;
@property (retain, nonatomic) NSIndexSet *deletions;
@property (retain, nonatomic) NSIndexSet *replacements;
@property (retain, nonatomic) NSArray *moves;
@property (nonatomic, readonly, getter=isEmpty) _Bool empty;
@property (nonatomic, readonly) long long netCountChange;

- (id)description;
- (id)resultsByExcludingLocalDeletions:(id)arg1;

@end
