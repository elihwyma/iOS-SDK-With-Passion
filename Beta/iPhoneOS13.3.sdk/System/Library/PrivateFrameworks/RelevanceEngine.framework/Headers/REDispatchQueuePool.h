/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface REDispatchQueuePool : NSObject

{
    unsigned long long _currentIndex;
    NSArray *_queues;
    struct os_unfair_lock_s _lock;
}

- (id)initWithQueueCount:(unsigned long long)arg1 prefix:(id)arg2;
- (id)nextAvailableQueue;

@end
