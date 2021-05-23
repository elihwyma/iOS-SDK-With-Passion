/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, SBRemoteTransientOverlaySessionManager;

@protocol OS_dispatch_queue;

@interface SBRemoteAlertHandleLocalClient : NSObject

{
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    SBRemoteTransientOverlaySessionManager *_sessionManager;
    NSMutableDictionary *_sessionIDToRemoteAlertHandle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)remoteAlertHandlesForDefinition:(id)arg1 allowsCreation:(_Bool)arg2 configurationContext:(id)arg3;
- (id)createRemoteAlertHandleWithDefinition:(id)arg1 configurationContext:(id)arg2;
- (void)activateRemoteAlertHandle:(id)arg1 withContext:(id)arg2;
- (void)invalidateRemoteAlertHandle:(id)arg1;
- (id)initWithSessionManager:(id)arg1;
- (void)remoteTransientOverlaySession:(id)arg1 didInvalidateWithReason:(long long)arg2 error:(id)arg3;
- (void)_registerHandle:(id)arg1 forSession:(id)arg2;
- (void)_unregisterHandle:(id)arg1;
- (void)remoteTransientOverlaySessionDidActivate:(id)arg1;
- (void)remoteTransientOverlaySessionDidDeactivate:(id)arg1;

@end
