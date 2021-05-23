/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@protocol EFQueueingStrategy;

@interface EFQueue : NSObject

{
    NSMutableArray *_buffer;
    id <EFQueueingStrategy> _strategy;
}

@property (nonatomic, readonly) NSMutableArray *buffer;
@property (nonatomic, readonly) id <EFQueueingStrategy> strategy;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSArray *allObjects;

+ (id)priorityQueueWithComparator:(CDUnknownBlockType)arg1;
+ (id)boundedQueueWithCapacity:(unsigned long long)arg1;
+ (id)boundedQueueWithCapacity:(unsigned long long)arg1 overflowHandler:(CDUnknownBlockType)arg2;
+ (id)bufferedQueueWithCapacity:(unsigned long long)arg1 batchHandler:(CDUnknownBlockType)arg2;

- (id)init;
- (id)description;
- (id)debugDescription;
- (id)drain;
- (id)peek;
- (id)dequeue;
- (id)initWithStrategy:(id)arg1;
- (void)enqueue:(id)arg1;
- (void)dequeueObject:(id)arg1;
- (void)enqueue:(id)arg1 replaceIfExists:(_Bool)arg2;

@end
