/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSXPCConnection, NSXPCListener, SBSRemoteAlertHandle;

@protocol OS_dispatch_queue, OS_dispatch_source, SFProxCardXPCClientInterface;

@interface SFProxCardSessionClient : NSObject

{
    _Bool _activateCalled;
    CDUnknownBlockType _activateCompletion;
    _Bool _dismissCalled;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    SBSRemoteAlertHandle *_remoteAlertHandle;
    struct LogCategory *_ucat;
    NSObject<OS_dispatch_source> *_xpcCheckinTimer;
    NSXPCConnection *_xpcCnx;
    NSXPCListener *_xpcListener;
    id <SFProxCardXPCClientInterface> _delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    NSDictionary *_userInfo;
    NSString *_viewControllerClassName;
    NSString *_viewServiceName;
}

@property (retain, nonatomic) id <SFProxCardXPCClientInterface> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType errorHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSString *viewControllerClassName;
@property (copy, nonatomic) NSString *viewServiceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (void)_reportError:(id)arg1;
- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_xpcConnectionInvalidated:(id)arg1;
- (void)_xpcCheckinTimerFired;
- (void)xpcCheckinWithCompletion:(CDUnknownBlockType)arg1;
- (void)xpcPerformAction:(int)arg1 completion:(CDUnknownBlockType)arg2;

@end
