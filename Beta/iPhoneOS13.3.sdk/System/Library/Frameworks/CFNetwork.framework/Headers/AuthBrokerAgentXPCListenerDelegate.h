/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class ABRequestHandler, NSString;

@protocol OS_dispatch_queue;

@interface AuthBrokerAgentXPCListenerDelegate : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    ABRequestHandler *_requestHandler;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (retain) ABRequestHandler *requestHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
