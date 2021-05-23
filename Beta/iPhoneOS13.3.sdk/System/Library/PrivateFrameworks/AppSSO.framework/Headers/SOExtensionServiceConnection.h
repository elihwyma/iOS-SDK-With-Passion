/*
 Image: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection, NSXPCListenerEndpoint;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SOExtensionServiceConnection : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
    NSXPCListenerEndpoint *_serviceXpcEndpoint;
}

@property (retain) NSXPCConnection *xpcConnection;
@property (retain) NSXPCListenerEndpoint *serviceXpcEndpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithListenerEndpoint:(id)arg1;
- (_Bool)_connectToService;
- (void)beginAuthorizationWithCompletion:(CDUnknownBlockType)arg1;

@end
