/*
 Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@protocol FMQueueingStrategy;

@interface FMQueue : NSObject

{
    NSMutableArray *_buffer;
    id <FMQueueingStrategy> _strategy;
}

@property (readonly) unsigned long long count;
@property (readonly) NSArray *allObjects;

+ (id)priorityQueueWithComparator:(CDUnknownBlockType)arg1;
+ (id)boundedQueueWithCapacity:(unsigned long long)arg1;
+ (id)boundedQueueWithCapacity:(unsigned long long)arg1 overflowHandler:(CDUnknownBlockType)arg2;

- (id)init;
- (id)drain;
- (id)peek;
- (id)dequeue;
- (id)initWithStrategy:(id)arg1;
- (void)enqueue:(id)arg1;
- (void)dequeueObject:(id)arg1;

@end
