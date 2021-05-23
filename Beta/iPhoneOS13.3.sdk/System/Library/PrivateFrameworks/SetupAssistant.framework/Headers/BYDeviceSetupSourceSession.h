/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <NSObject.h>

@class BYBuddyDaemonMigrationSourceClient, BYBuddyDaemonProximitySourceClient, CUMessageSession, NSString, RPFileTransferSession;

@interface BYDeviceSetupSourceSession : NSObject

{
    _Bool _hasBackupCompleted;
    _Bool _hasSyncCompleted;
    CDUnknownBlockType _sendObjectHandler;
    CDUnknownBlockType _progressHandler;
    CUMessageSession *_messageSession;
    RPFileTransferSession *_fileTransferSessionTemplate;
    BYBuddyDaemonProximitySourceClient *_client;
    BYBuddyDaemonMigrationSourceClient *_migrationSourceClient;
    double _backupProgress;
    double _syncProgress;
    double _timeRemaining;
    unsigned long long _currentPhase;
}

@property (retain) BYBuddyDaemonProximitySourceClient *client;
@property (retain, nonatomic) BYBuddyDaemonMigrationSourceClient *migrationSourceClient;
@property double backupProgress;
@property double syncProgress;
@property _Bool hasBackupCompleted;
@property _Bool hasSyncCompleted;
@property double timeRemaining;
@property unsigned long long currentPhase;
@property (copy, nonatomic) CDUnknownBlockType sendObjectHandler;
@property (copy, nonatomic) CDUnknownBlockType progressHandler;
@property (retain, nonatomic) CUMessageSession *messageSession;
@property (retain, nonatomic) RPFileTransferSession *fileTransferSessionTemplate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (void)activate;
- (void)updateProgress;
- (void)syncProgress:(double)arg1;
- (void)syncCompletedWithErrors:(id)arg1;
- (void)finishedWithError:(id)arg1;
- (void)backupProgress:(double)arg1 estimatedTimeRemaining:(long long)arg2;
- (void)backupCompletedWithError:(id)arg1;
- (void)receivedObject:(id)arg1;

@end
