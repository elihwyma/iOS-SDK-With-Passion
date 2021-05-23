/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <NSObject.h>

@class NSSet, NSString, SYService, VCCompanionSyncSession, VCNRDeviceSyncService, WFDebouncer;

@protocol OS_dispatch_queue, VCCompanionSyncServiceDelegate, VCSyncDataEndpoint;

@interface VCCompanionSyncService : NSObject

{
    id <VCCompanionSyncServiceDelegate> _delegate;
    SYService *_service;
    NSObject<OS_dispatch_queue> *_queue;
    id <VCSyncDataEndpoint> _syncDataEndpoint;
    WFDebouncer *_debouncer;
    NSSet *_currentDataHandlers;
    VCCompanionSyncSession *_currentSession;
    VCNRDeviceSyncService *_currentSyncService;
}

@property (nonatomic, readonly) SYService *service;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) id <VCSyncDataEndpoint> syncDataEndpoint;
@property (nonatomic, readonly) WFDebouncer *debouncer;
@property (copy, nonatomic) NSSet *currentDataHandlers;
@property (retain, nonatomic) VCCompanionSyncSession *currentSession;
@property (copy, nonatomic) VCNRDeviceSyncService *currentSyncService;
@property (weak, nonatomic) id <VCCompanionSyncServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)requestSync;
- (_Bool)service:(id)arg1 startSession:(id)arg2 error:(id *)arg3;
- (void)service:(id)arg1 encounteredError:(id)arg2 context:(id)arg3;
- (void)service:(id)arg1 willSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3;
- (void)service:(id)arg1 didSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3;
- (void)resetSession;
- (void)requestFullResync;
- (void)companionSyncSession:(id)arg1 didFinishWithError:(id)arg2;
- (id)initWithSyncDataEndpoint:(id)arg1;
- (_Bool)isRunningOnWatch;
- (void)resumeServiceIfNecessary;
- (void)requestSyncImmediately;
- (void)updateSyncDataHandlers;
- (void)updateCurrentSyncServiceIfNecessary;
- (void)configureReasonForUnderlyingSession:(id)arg1 withSession:(id)arg2;
- (void)companionSyncSessionDidFinishSendingChanges:(id)arg1;
- (void)companionSyncSession:(id)arg1 didUpdateProgress:(double)arg2;

@end
