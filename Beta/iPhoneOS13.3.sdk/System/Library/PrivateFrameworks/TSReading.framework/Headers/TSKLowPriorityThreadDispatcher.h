/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSKThreadDispatcher.h>

@class NSObject;

@protocol OS_dispatch_queue;

@interface TSKLowPriorityThreadDispatcher : TSKThreadDispatcher

{
    NSObject<OS_dispatch_queue> *_queue;
    int _suspendCount;
}

@property (readonly, getter=isSuspended) _Bool suspended;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)_singletonAlloc;
+ (id)sharedLowPriorityDispatcher;

- (id)init;
- (unsigned long long)retainCount;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)resume;
- (void)suspend;
- (id)p_dispatchQueue;

@end
