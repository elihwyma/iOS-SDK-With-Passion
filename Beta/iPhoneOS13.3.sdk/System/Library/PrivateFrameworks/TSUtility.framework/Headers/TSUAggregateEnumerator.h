/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSEnumerator.h>

@class NSMutableArray;

@interface TSUAggregateEnumerator : NSEnumerator

{
    NSMutableArray *_objects;
}

+ (id)aggregateEnumeratorWithObjects:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)addObject:(id)arg1;
- (id)nextObject;
- (id)initWithObjects:(id)arg1;
- (id)initWithFirstObject:(id)arg1 argumentList:(char *)arg2;

@end
