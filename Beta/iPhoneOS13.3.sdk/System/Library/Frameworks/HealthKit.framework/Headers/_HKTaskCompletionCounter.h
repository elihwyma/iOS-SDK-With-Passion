/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface _HKTaskCompletionCounter : NSObject

{
    CDUnknownBlockType _completion;
    NSObject<OS_dispatch_queue> *_queue;
    long long _target;
}

+ (id)counterWithTargetCount:(long long)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;

- (void)_invalidate;
- (void)decrementCounter;
- (void)incrementCounter;
- (void)allTasksEnqueued;

@end
