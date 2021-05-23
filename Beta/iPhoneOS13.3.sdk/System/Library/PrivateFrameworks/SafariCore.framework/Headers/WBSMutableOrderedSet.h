/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableOrderedSet;

@interface WBSMutableOrderedSet : NSObject

{
    NSMutableOrderedSet *_mutableOrderedSet;
    unsigned long long _maximumCount;
}

@property (nonatomic, readonly) NSArray *array;

- (id)init;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (_Bool)containsObject:(id)arg1;
- (void)removeObjectsInArray:(id)arg1;
- (id)initWithMaximumCount:(unsigned long long)arg1;
- (void)_moveObjectAtIndexToLast:(unsigned long long)arg1;
- (id)objectAtIndexWithoutAffectingRecency:(unsigned long long)arg1;
- (void)markObjectAsRecentlyUsed:(id)arg1;

@end
