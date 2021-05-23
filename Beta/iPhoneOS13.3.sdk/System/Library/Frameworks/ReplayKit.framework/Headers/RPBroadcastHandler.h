/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSExtensionContext, NSString, NSXPCConnection, NSXPCListener, NSXPCListenerEndpoint;

@interface RPBroadcastHandler : NSObject

{
    NSDictionary *_serviceInfo;
    NSExtensionContext *_extensionContext;
    NSXPCListenerEndpoint *_listenerEndpoint;
    NSXPCConnection *_connection;
    NSXPCListener *_listener;
}

@property (retain, nonatomic) NSDictionary *serviceInfo;
@property (retain, nonatomic) NSExtensionContext *extensionContext;
@property (retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)_completeRequestWithReturnItems:(id)arg1;
- (void)updateServiceInfo:(id)arg1;
- (void)updateBroadcastURL:(id)arg1;

@end
