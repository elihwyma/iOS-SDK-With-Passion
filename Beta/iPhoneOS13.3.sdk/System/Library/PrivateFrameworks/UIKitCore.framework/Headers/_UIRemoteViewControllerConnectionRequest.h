/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSError, NSString, NSUUID, _UIAsyncInvocation, _UIRemoteViewControllerConnectionInfo, _UIRemoteViewService;

@protocol OS_dispatch_queue, _UIViewServiceDeputyXPCInterface;

__attribute__((visibility("hidden")))
@interface _UIRemoteViewControllerConnectionRequest : NSObject

{
    _UIRemoteViewService *_service;
    CDUnknownBlockType _handler;
    NSString *_viewServiceBundleIdentifier;
    NSString *_viewControllerClassName;
    NSUUID *_contextToken;
    NSArray *_serializedAppearanceCustomizations;
    id _exportedHostingObject;
    Class _remoteViewControllerClass;
    id <_UIViewServiceDeputyXPCInterface> _serviceViewControllerDeputyInterface;
    _UIAsyncInvocation *_cancelInvocationForCurrentOperation;
    _UIRemoteViewControllerConnectionInfo *_connectionInfo;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _isCancelledOrComplete;
    NSError *_error;
    _UIAsyncInvocation *_requestCancellationInvocation;
}

+ (id)__requestRemoteViewController:(id)arg1 service:(id)arg2 fromServiceWithBundleIdentifier:(id)arg3 serializedAppearanceCustomizations:(id)arg4 exportedHostingObject:(id)arg5 serviceViewControllerDeputyInterface:(id)arg6 connectionHandler:(CDUnknownBlockType)arg7;
+ (id)requestViewController:(id)arg1 fromServiceWithBundleIdentifier:(id)arg2 serializedAppearanceCustomizations:(id)arg3 exportedHostingObject:(id)arg4 serviceViewControllerDeputyInterface:(id)arg5 connectionHandler:(CDUnknownBlockType)arg6;
+ (id)requestViewControllerWithService:(id)arg1 serializedAppearanceCustomizations:(id)arg2 exportedHostingObject:(id)arg3 remoteViewControllerClass:(Class)arg4 serviceViewControllerDeputyInterface:(id)arg5 connectionHandler:(CDUnknownBlockType)arg6;

- (void)dealloc;
- (void)_cancelUnconditionallyThen:(CDUnknownBlockType)arg1;
- (id)_cancelWithError:(id)arg1;
- (void)_connectToPlugInKitService;
- (void)_connectToViewService;
- (void)_connectToViewControllerOperator;
- (void)_sendServiceViewControllerRequest;
- (void)_connectToDeputyWithInterface:(id)arg1 fromExportedHostingObject:(id)arg2 successHandler:(CDUnknownBlockType)arg3;
- (void)_connectToTextEffectsOperator;
- (void)_connectToServiceViewController;
- (void)_sendServiceTextEffectsRequest;
- (void)_connectToViewControllerControlMessageDeputy;
- (void)_didFinishEstablishingConnection;

@end
