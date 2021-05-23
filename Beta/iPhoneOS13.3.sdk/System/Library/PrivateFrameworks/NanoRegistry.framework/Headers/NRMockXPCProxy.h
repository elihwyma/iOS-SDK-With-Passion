/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <Foundation/NSProxy.h>

@class NSObject;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NRMockXPCProxy : NSProxy

{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _async;
    id _target;
}

@property (weak, nonatomic) id target;

- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithBlahBlahBlahTarget:(id)arg1 queue:(id)arg2 async:(_Bool)arg3;

@end
