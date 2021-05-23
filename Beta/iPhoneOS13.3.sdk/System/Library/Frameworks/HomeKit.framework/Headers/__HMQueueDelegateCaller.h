/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMDelegateCaller.h>

@class NSObject;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __HMQueueDelegateCaller : HMDelegateCaller

{
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)initWithQueue:(id)arg1;
- (void)invokeBlock:(CDUnknownBlockType)arg1;

@end
