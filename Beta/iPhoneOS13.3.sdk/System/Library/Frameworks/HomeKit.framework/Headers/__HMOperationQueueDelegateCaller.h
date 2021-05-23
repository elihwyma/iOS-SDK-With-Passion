/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMDelegateCaller.h>

@class NSOperationQueue;

__attribute__((visibility("hidden")))
@interface __HMOperationQueueDelegateCaller : HMDelegateCaller

{
    NSOperationQueue *_queue;
}

- (id)init;
- (id)initWithQueue:(id)arg1;
- (id)initWithOperationQueue:(id)arg1;
- (void)invokeBlock:(CDUnknownBlockType)arg1;

@end
