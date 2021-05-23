/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class IDSService, NPKPassSyncEngine, NPKPassSyncServiceSyncStatus, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NPKPassSyncService : NSObject

{
    _Bool _dropAllMessages;
    NPKPassSyncEngine *_passSyncEngine;
    IDSService *_passSyncService;
    NSObject<OS_dispatch_queue> *_passSyncQueue;
    NSObject<OS_dispatch_source> *_passSyncEngineArchiveTimer;
    NSObject<OS_dispatch_source> *_passSyncEngineSyncTimer;
    NPKPassSyncServiceSyncStatus *_passSyncStatus;
}

@property (retain, nonatomic) NPKPassSyncEngine *passSyncEngine;
@property (retain, nonatomic) IDSService *passSyncService;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *passSyncQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *passSyncEngineArchiveTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *passSyncEngineSyncTimer;
@property (retain, nonatomic) NPKPassSyncServiceSyncStatus *passSyncStatus;
@property (nonatomic) _Bool dropAllMessages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)start;
- (void)syncStateChanged:(id)arg1;
- (void)syncStateChangeProcessed:(id)arg1;
- (void)reconciledStateUnrecognized:(id)arg1;
- (void)proposedReconciledState:(id)arg1;
- (void)reconciledStateAccepted:(id)arg1;
- (void)passSettingsChanged:(id)arg1;
- (void)catalogChanged:(id)arg1;
- (void)_archiveTimerFired;
- (id)_archivedPassSyncEngine;
- (void)_provideUpdatedLibraryStateToSyncEngineAndSyncIfNecessary:(_Bool)arg1;
- (void)_syncWhenAppropriate;
- (void)handleIncomingCatalog:(id)arg1;
- (void)handleIncomingPassSettings:(unsigned long long)arg1 forPassWithUniqueID:(id)arg2;
- (id)catalogToSend;
- (unsigned long long)settingsForPassWithUniqueID:(id)arg1;
- (void)handleSettingsChanged:(unsigned long long)arg1 forPassWithUniqueID:(id)arg2;
- (id)currentLibraryPassSyncStateWithReconciledState:(id)arg1;
- (void)_syncNow;
- (void)_ensureSyncTimerIsSet;
- (void)_syncTimerFired;
- (void)passSyncEngine:(id)arg1 sendStateChange:(id)arg2;
- (void)passSyncEngine:(id)arg1 sendStateChangeProcessedWithUUID:(id)arg2 changeAccepted:(_Bool)arg3 fullPassRequired:(_Bool)arg4;
- (void)passSyncEngine:(id)arg1 sendReconciledStateUnrecognizedWithHash:(id)arg2 currentPassSyncState:(id)arg3;
- (void)passSyncEngine:(id)arg1 sendProposedReconciledState:(id)arg2;
- (void)passSyncEngine:(id)arg1 sendReconciledStateAcceptedWithHash:(id)arg2;
- (void)passSyncEngine:(id)arg1 requestsAddPassData:(id)arg2 forSyncStateItem:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)passSyncEngine:(id)arg1 requestsUpdatePassData:(id)arg2 forSyncStateItem:(id)arg3 baseManifestHashForPartialUpdate:(id)arg4 remoteAssetsForPartialUpdate:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)passSyncEngine:(id)arg1 requestsRemovePassWithUniqueID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)passSyncEngineStateChanged:(id)arg1;
- (void)passSyncEngine:(id)arg1 receivedStateChangeProcessed:(id)arg2 changeAccepted:(_Bool)arg3;
- (void)passSyncEngine:(id)arg1 finishedProcessingChange:(id)arg2;
- (id)passSyncEngine:(id)arg1 partialDataForPassWithUniqueID:(id)arg2 baseManifest:(id)arg3 outRemoteAssets:(id *)arg4;
- (id)passSyncEngine:(id)arg1 dataForPassWithUniqueID:(id)arg2;
- (id)initWithPassSyncEngineRole:(unsigned long long)arg1;
- (void)handlePassLibraryChanged;
- (void)handleCatalogChanged:(id)arg1;
- (void)suggestSync;

@end
