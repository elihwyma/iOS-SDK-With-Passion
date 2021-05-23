/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <Foundation/NSProxy.h>

__attribute__((visibility("hidden")))
@interface NRLoggingXPCProxy : NSProxy

{
    id _proxy;
}

@property (retain, nonatomic) id proxy;

- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithBlahBlahBlahProxy:(id)arg1;

@end
