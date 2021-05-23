/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@protocol CNQueueingStrategy;

@interface CNQueue : NSObject

{
    NSMutableArray *_buffer;
    id <CNQueueingStrategy> _strategy;
}

@property (nonatomic, readonly) NSMutableArray *buffer;
@property (nonatomic, readonly) id <CNQueueingStrategy> strategy;
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
- (void)enqueueObjectsFromArray:(id)arg1;
- (void)enqueue:(id)arg1;
- (void)dequeueObject:(id)arg1;

@end
