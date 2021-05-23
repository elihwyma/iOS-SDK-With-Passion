/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol OS_dispatch_queue, SBRemoteTransientOverlaySessionManagerDelegate;

@interface SBRemoteTransientOverlaySessionManager : NSObject

{
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    NSMutableDictionary *_sessionIDToSession;
    id <SBRemoteTransientOverlaySessionManagerDelegate> _delegate;
}

@property (weak, nonatomic) id <SBRemoteTransientOverlaySessionManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)hasSessionWithPendingButtonEvents:(unsigned long long)arg1 options:(long long)arg2;
- (id)_createSessionWithDefinition:(id)arg1;
- (id)_existingSessionsWithDefinition:(id)arg1 options:(long long)arg2;
- (long long)activeWallpaperVariantForRemoteTransientOverlaySession:(id)arg1;
- (void)remoteTransientOverlaySession:(id)arg1 requestsHandlingForButtonEvents:(unsigned long long)arg2 viewController:(id)arg3;
- (_Bool)remoteTransientOverlaySession:(id)arg1 shouldActivateWithContext:(id)arg2;
- (_Bool)remoteTransientOverlaySession:(id)arg1 performDismissalRequest:(id)arg2;
- (_Bool)remoteTransientOverlaySession:(id)arg1 performPresentationRequest:(id)arg2;
- (_Bool)remoteTransientOverlaySession:(id)arg1 prefersStatusBarActivityItemVisibleForServiceBundleIdentifier:(id)arg2;
- (void)remoteTransientOverlaySession:(id)arg1 didInvalidateWithReason:(long long)arg2 error:(id)arg3;
- (id)createSessionWithDefinition:(id)arg1;
- (id)existingSessionsWithDefinition:(id)arg1 options:(long long)arg2;
- (id)existingSessionWithSessionID:(id)arg1 options:(long long)arg2;
- (_Bool)hasSessionWithServiceProcessIdentifier:(int)arg1 options:(long long)arg2;
- (id)sessionWithDefinition:(id)arg1 options:(long long)arg2;
- (id)sessionsWithDefinition:(id)arg1 options:(long long)arg2;

@end
