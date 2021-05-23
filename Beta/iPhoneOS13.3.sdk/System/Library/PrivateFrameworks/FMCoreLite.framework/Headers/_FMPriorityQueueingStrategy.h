/*
 Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _FMPriorityQueueingStrategy : NSObject

{
    CDUnknownBlockType _priorityComparator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithComparator:(CDUnknownBlockType)arg1;
- (void)enqueueObject:(id)arg1 buffer:(id)arg2;
- (unsigned long long)_insertionIndexForObject:(id)arg1 buffer:(id)arg2;

@end
