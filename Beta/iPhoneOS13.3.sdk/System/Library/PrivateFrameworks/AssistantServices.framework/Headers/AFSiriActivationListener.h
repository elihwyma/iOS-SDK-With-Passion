/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCListener;

@protocol AFSiriActivationListenerDelegate, OS_dispatch_queue;

@interface AFSiriActivationListener : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_xpcListener;
    id <AFSiriActivationListenerDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)stop;
- (void)_stop;
- (oneway void)prewarmWithRequestInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)activateWithRequestInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)deactivateForReason:(long long)arg1 options:(unsigned long long)arg2 analyticsContext:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (oneway void)handleContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)handleIntent:(id)arg1 inBackgroundAppWithBundleId:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)startWithDelegate:(id)arg1;
- (void)_startWithDelegate:(id)arg1;
- (void)_prewarmWithRequestInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_activateWithRequestInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_deactivateForReason:(long long)arg1 options:(unsigned long long)arg2 analyticsContext:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
