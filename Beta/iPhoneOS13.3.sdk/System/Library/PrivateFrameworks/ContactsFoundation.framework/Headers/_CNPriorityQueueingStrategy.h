/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _CNPriorityQueueingStrategy : NSObject

{
    CDUnknownBlockType _priorityComparator;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType priorityComparator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithComparator:(CDUnknownBlockType)arg1;
- (void)enqueueObject:(id)arg1 buffer:(id)arg2;
- (unsigned long long)_insertionIndexForObject:(id)arg1 buffer:(id)arg2;

@end
