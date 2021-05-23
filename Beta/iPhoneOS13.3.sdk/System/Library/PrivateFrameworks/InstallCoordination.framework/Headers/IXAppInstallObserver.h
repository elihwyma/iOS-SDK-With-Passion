/*
 Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCListener;

@protocol IXAppInstallObserverDelegate, OS_dispatch_queue;

@interface IXAppInstallObserver : NSObject

{
    id <IXAppInstallObserverDelegate> _delegate;
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (weak, nonatomic, readonly) id <IXAppInstallObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_internalInit;
- (id)_oncePerBootUniqueIdentifierForServiceName:(id)arg1;
- (oneway void)_client_coordinatorShouldPrioritizeWithSeed:(id)arg1;
- (oneway void)_client_shouldPrioritizeAppWithBundleID:(id)arg1;
- (oneway void)_client_coordinatorShouldResumeWithSeed:(id)arg1;
- (oneway void)_client_coordinatorShouldPauseWithSeed:(id)arg1;
- (oneway void)_client_coordinatorWithSeed:(id)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2;
- (oneway void)_client_coordinatorShouldBeginRestoringUserDataWithSeed:(id)arg1;
- (oneway void)_client_coordinatorDidInstallPlaceholderWithSeed:(id)arg1;
- (oneway void)_client_coordinatorDidCompleteSuccessfullyWithSeed:(id)arg1;
- (oneway void)_client_coordinatorWithSeed:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3;
- (id)initWithMachServiceName:(id)arg1 forClients:(id)arg2 delegate:(id)arg3;
- (id)initTransientForClients:(id)arg1 delegate:(id)arg2;

@end
