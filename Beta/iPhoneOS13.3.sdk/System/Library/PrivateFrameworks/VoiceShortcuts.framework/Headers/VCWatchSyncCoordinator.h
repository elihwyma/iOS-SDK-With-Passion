/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <NSObject.h>

@class NSMutableSet, NSString, PSYSyncCoordinator, VCCompanionSyncService, VCDaemonXPCEventHandler;

@protocol OS_dispatch_queue, VCSyncDataEndpoint;

@interface VCWatchSyncCoordinator : NSObject

{
    PSYSyncCoordinator *_pairedSyncCoordinator;
    NSMutableSet *_startedSessions;
    id <VCSyncDataEndpoint> _syncDataEndpoint;
    VCDaemonXPCEventHandler *_eventHandler;
    NSObject<OS_dispatch_queue> *_queue;
    VCCompanionSyncService *_service;
}

@property (nonatomic, readonly) PSYSyncCoordinator *pairedSyncCoordinator;
@property (nonatomic, readonly) NSMutableSet *startedSessions;
@property (nonatomic, readonly) id <VCSyncDataEndpoint> syncDataEndpoint;
@property (nonatomic, readonly) VCDaemonXPCEventHandler *eventHandler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) VCCompanionSyncService *service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;
- (void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2;
- (_Bool)companionSyncServiceShouldStartSession:(id)arg1;
- (long long)companionSyncService:(id)arg1 typeForSession:(id)arg2;
- (void)companionSyncService:(id)arg1 outgoingSyncSessionDidFinishSendingChanges:(id)arg2;
- (void)companionSyncService:(id)arg1 outgoingSyncSession:(id)arg2 didUpdateProgress:(double)arg3;
- (void)companionSyncService:(id)arg1 didFinishSyncSession:(id)arg2 withError:(id)arg3;
- (void)companionSyncService:(id)arg1 didRejectSessionWithError:(id)arg2;
- (id)initWithSyncDataEndpoint:(id)arg1 eventHandler:(id)arg2;
- (void)requestSyncIfUnrestricted;
- (void)startObservingWatchChangeNotifications;
- (void)stopObservingWatchChangeNotifications;
- (void)handleDeviceDidChangeVersionNotification;
- (void)handleDidUnpairNotification:(id)arg1;

@end
