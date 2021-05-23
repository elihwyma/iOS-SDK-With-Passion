/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class CUMessageSession, NSString, NSXPCListener, NSXPCListenerEndpoint;

@protocol OS_dispatch_queue;

@interface CUMessageSessionServer : NSObject

{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _registerRequestHandler;
    CDUnknownBlockType _deregisterRequestHandler;
    CDUnknownBlockType _sendRequestHandler;
    struct NSMutableSet *_xpcConnections;
    NSXPCListenerEndpoint *_xpcEndpoint;
    NSXPCListener *_xpcListener;
    CDUnknownBlockType _invalidationHandler;
    CUMessageSession *_templateSession;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) CDUnknownBlockType registerRequestHandler;
@property (copy, nonatomic) CDUnknownBlockType deregisterRequestHandler;
@property (copy, nonatomic) CDUnknownBlockType sendRequestHandler;
@property (retain, nonatomic) CUMessageSession *templateSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)invalidate;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)activate;
- (void)_connectionInvalidated:(id)arg1;

@end
