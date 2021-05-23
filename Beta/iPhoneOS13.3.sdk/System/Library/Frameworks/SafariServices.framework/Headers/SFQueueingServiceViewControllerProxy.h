/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSProxy.h>

@class NSMutableArray, Protocol;

@protocol SFQueueingServiceViewControllerProxyDelegate;

__attribute__((visibility("hidden")))
@interface SFQueueingServiceViewControllerProxy : NSProxy

{
    NSMutableArray *_queuedInvocations;
    Protocol *_protocol;
    id _target;
    id <SFQueueingServiceViewControllerProxyDelegate> _delegate;
}

@property (retain, nonatomic) id target;
@property (weak, nonatomic) id <SFQueueingServiceViewControllerProxyDelegate> delegate;

- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithProtocol:(id)arg1;

@end
