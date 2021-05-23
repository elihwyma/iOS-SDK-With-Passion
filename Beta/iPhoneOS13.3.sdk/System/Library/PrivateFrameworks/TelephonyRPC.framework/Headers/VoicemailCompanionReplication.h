/*
 Image: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
 */

#import <Foundation/NSObject.h>

@class NPHVMSyncSessionManager, NPSDomainAccessor, NSMutableArray, NSString, PSYServiceSyncSession, PSYSyncCoordinator, SYService, VMVoicemailManager;

@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_os_transaction;

@interface VoicemailCompanionReplication : NSObject

{
    NPSDomainAccessor *_domainAccessor;
    struct _opaque_pthread_mutex_t _domainAccessorMutexLock;
    NSObject<OS_dispatch_queue> *_companionSyncQueue;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    NSObject<OS_dispatch_queue> *_vmSyncServiceQueue;
    NSMutableArray *_vmAfterSyncComplete;
    PSYSyncCoordinator *_coordinator;
    NPHVMSyncSessionManager *_vmSyncSessionManager;
    PSYServiceSyncSession *_vmServiceSyncSession;
    struct _opaque_pthread_mutex_t _syncTransactionMutex;
    NSObject<OS_os_transaction> *_syncTransaction;
    VMVoicemailManager *_voicemailManager;
    NSObject<OS_dispatch_semaphore> *_deltaSyncInProgress;
    _Bool _deltaSyncSuccessful;
    NSObject<OS_dispatch_semaphore> *waitForFirstSyncRestrictionSemaphore;
    _Bool _didSuspendCompanionSyncQueue;
    NSObject<OS_dispatch_semaphore> *vmdIsReadySemaphore;
    _Bool _syncRestrictionsAtStartup;
    _Bool _sigtermCalled;
    SYService *_vmSyncService;
}

@property _Bool sigtermCalled;
@property (retain, nonatomic) SYService *vmSyncService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)reportProgress:(double)arg1;
- (void)_registerForNotifications;
- (void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;
- (void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2;
- (_Bool)service:(id)arg1 startSession:(id)arg2 error:(id *)arg3;
- (void)service:(id)arg1 sessionEnded:(id)arg2 error:(id)arg3;
- (void)service:(id)arg1 encounteredError:(id)arg2 context:(id)arg3;
- (void)serviceDidPairDevice:(id)arg1;
- (void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)syncSession:(id)arg1 didEndWithError:(id)arg2;
- (_Bool)syncSession:(id)arg1 resetDataStoreWithError:(id *)arg2;
- (void)_handleVoicemailsChangedNotification:(id)arg1;
- (void)_deltaSyncIsReunion:(_Bool)arg1;
- (void)_performAfterFirstDeviceUnlockAndSyncRestrictionNone:(CDUnknownBlockType)arg1;
- (id)listOfVoicemailsToSync;
- (id)voicemailChangeSetFrom:(id)arg1;
- (void)setRemoteVoicemails:(id)arg1;
- (id)remoteVoicemails;
- (void)_initializeDomainAccessor;
- (void)_retrySyncSession:(id)arg1;
- (void)removeFromRemoteVoicemails:(id)arg1;
- (id)changeSetForRemoteVoicemails:(id)arg1 fromVMVoicemails:(id)arg2;
- (void)_handleVoicemailSubscriptionStateStatusChanged:(id)arg1;
- (void)waitForVMDToBeUpAndRunning;
- (void)_enqueueAllVoicemailsAndLockSyncTransactionMutex;
- (long long)indexOfVoicemail:(id)arg1 inArray:(id)arg2;
- (void)handleSIGTERM;

@end
