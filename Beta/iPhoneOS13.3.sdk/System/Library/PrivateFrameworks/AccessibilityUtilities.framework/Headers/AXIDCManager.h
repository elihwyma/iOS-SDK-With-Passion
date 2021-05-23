/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class AXIDCSlaveController, NSMutableArray, NSNetServiceBrowser, NSString;

@protocol AXIDCControllerBrowserDelegateProtocol, AXIDCManagerSecurityDelegate;

@interface AXIDCManager : NSObject

{
    Class _slaveClass;
    Class _remoteClass;
    id <AXIDCControllerBrowserDelegateProtocol> _delegate;
    id <AXIDCManagerSecurityDelegate> _securityDelegate;
    long long _state;
    AXIDCSlaveController *_slaveController;
    NSString *_serviceType;
    NSNetServiceBrowser *_browser;
    NSMutableArray *_remoteControllers;
}

@property (retain, nonatomic) NSString *serviceType;
@property (retain, nonatomic) AXIDCSlaveController *slaveController;
@property (retain, nonatomic) NSNetServiceBrowser *browser;
@property (retain, nonatomic) NSMutableArray *remoteControllers;
@property (weak, nonatomic) id <AXIDCControllerBrowserDelegateProtocol> delegate;
@property (weak, nonatomic) id <AXIDCManagerSecurityDelegate> securityDelegate;
@property (nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)stop;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowserWillSearch:(id)arg1;
- (id)initWithServiceType:(id)arg1;
- (id)initWithServiceType:(id)arg1 remoteClass:(Class)arg2 andSlaveClass:(Class)arg3;
- (Class)validateClass:(Class)arg1 isKindOfClass:(Class)arg2;
- (void)sendObject:(id)arg1 toController:(id)arg2 withSendCompletion:(CDUnknownBlockType)arg3;
- (_Bool)shouldBecomeMaster;
- (void)clearControllers;
- (void)resolveMasterWithCompletion:(CDUnknownBlockType)arg1;
- (id)remoteControllerForHostname:(id)arg1;
- (void)controller:(id)arg1 didReceiveData:(id)arg2;
- (void)controller:(id)arg1 didFinishSendingData:(id)arg2;
- (void)controllerDidFinishConnecting:(id)arg1;
- (void)controller:(id)arg1 didCloseConnectionWithError:(id)arg2;
- (id)availableControllers;
- (id)availableRemoteControllers;
- (void)sendObject:(id)arg1 toAllControllersExcept:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)becomeMaster;
- (void)transitionToSlaveWithCompletion:(CDUnknownBlockType)arg1;

@end
