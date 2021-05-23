/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _EFPriorityQueueStrategy : NSObject

{
    CDUnknownBlockType _comparator;
}

@property (nonatomic, readonly) CDUnknownBlockType comparator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *descriptionType;

- (id)initWithComparator:(CDUnknownBlockType)arg1;
- (unsigned long long)_insertionIndexForObject:(id)arg1 buffer:(id)arg2;
- (void)enqueueObject:(id)arg1 replaceIfExists:(_Bool)arg2 buffer:(id)arg3;
- (void)dequeueObject:(id)arg1 buffer:(id)arg2;
- (unsigned long long)_indexForObject:(id)arg1 buffer:(id)arg2;

@end
