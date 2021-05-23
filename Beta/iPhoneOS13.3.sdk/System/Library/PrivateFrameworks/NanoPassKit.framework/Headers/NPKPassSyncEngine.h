/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NPKPassSyncChange, NPKPassSyncState, NSString;

@protocol NPKPassSyncEngineDataSource, NPKPassSyncEngineDelegate;

@interface NPKPassSyncEngine : NSObject

{
    NPKPassSyncState *_libraryState;
    NPKPassSyncState *_backupState;
    NPKPassSyncState *_reconciledState;
    NPKPassSyncState *_candidateState;
    unsigned long long _engineRole;
    id <NPKPassSyncEngineDelegate> _delegate;
    id <NPKPassSyncEngineDataSource> _dataSource;
    NPKPassSyncChange *_candidateChange;
    NPKPassSyncChange *_processingChange;
}

@property (retain, nonatomic) NPKPassSyncState *backupState;
@property (weak, nonatomic) id <NPKPassSyncEngineDelegate> delegate;
@property (weak, nonatomic) id <NPKPassSyncEngineDataSource> dataSource;
@property (retain, nonatomic) NPKPassSyncState *libraryState;
@property (retain, nonatomic) NPKPassSyncState *reconciledState;
@property (retain, nonatomic) NPKPassSyncState *candidateState;
@property (retain, nonatomic) NPKPassSyncChange *candidateChange;
@property (retain, nonatomic) NPKPassSyncChange *processingChange;
@property (nonatomic, readonly) NSString *engineName;
@property (nonatomic, readonly) unsigned long long engineRole;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_sendStateChange:(id)arg1;
- (id)initWithRole:(unsigned long long)arg1;
- (void)handleStateChange:(id)arg1;
- (void)handleStateChangeProcessedWithUUID:(id)arg1 changeAccepted:(_Bool)arg2 fullPassRequired:(_Bool)arg3;
- (void)handleReconciledStateUnrecognizedWithHash:(id)arg1 passSyncState:(id)arg2;
- (void)handleProposedReconciledState:(id)arg1;
- (void)handleReconciledStateAcceptedWithHash:(id)arg1;
- (void)syncIfNecessary;
- (void)_sendNextStateChange;
- (void)_unexpectedEventOccurred;
- (void)_sendStateChangeProcessedWithUUID:(id)arg1 changeAccepted:(_Bool)arg2 fullPassRequired:(_Bool)arg3;
- (void)_requestAddPassData:(id)arg1 forSyncStateItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_requestUpdatePassData:(id)arg1 forSyncStateItem:(id)arg2 baseManifestHashForPartialUpdate:(id)arg3 remoteAssetsForPartialUpdate:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_requestRemovePassWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_shouldProcessAddOrUpdateChangeOfType:(unsigned long long)arg1 changeSyncStateItem:(id)arg2 librarySyncStateItem:(id)arg3 reconciledSyncStateItem:(id)arg4 candidateChange:(id)arg5 shouldApplyToPassLibrary:(_Bool *)arg6 shouldApplyToReconciledState:(_Bool *)arg7;
- (void)_finishedProcessingChange:(id)arg1;
- (void)_sendReconciledStateUnrecognizedWithHash:(id)arg1 currentPassSyncState:(id)arg2;
- (void)_receivedStateChangeProcessed:(id)arg1 changeAccepted:(_Bool)arg2;
- (void)_sendProposedReconciledState:(id)arg1;
- (void)_sendReconciledStateAcceptedWithHash:(id)arg1;
- (void)_engineStateChanged;

@end
