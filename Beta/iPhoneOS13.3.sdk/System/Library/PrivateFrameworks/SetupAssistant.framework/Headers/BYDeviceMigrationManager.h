/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <NSObject.h>

@class BKSProcessAssertion, MBDeviceTransferConnectionInfo, MBDeviceTransferProgress, MBDeviceTransferTask, NSError, NSHashTable, RPFileTransferSession;

@protocol OS_dispatch_queue;

@interface BYDeviceMigrationManager : NSObject

{
    _Bool _willMigrate;
    _Bool _migrating;
    int _passcodeChangeNotificationToken;
    NSError *_error;
    RPFileTransferSession *_fileTransferSession;
    MBDeviceTransferTask *_deviceTransferTask;
    BKSProcessAssertion *_processAssertion;
    struct __MKBAssertion *_deviceLockAssertion;
    NSHashTable *_delegates;
    MBDeviceTransferConnectionInfo *_connectionInfo;
    MBDeviceTransferProgress *_progressInfo;
    unsigned long long _bytesTransferred;
    unsigned long long _filesTransferred;
    double _durationOfTransfer;
    double _durationOfRestore;
    long long _cancellationCause;
    NSObject<OS_dispatch_queue> *_migrationQueue;
}

@property (retain, nonatomic) NSError *error;
@property (nonatomic, getter=isMigrating) _Bool migrating;
@property (retain, nonatomic) RPFileTransferSession *fileTransferSession;
@property (retain, nonatomic) MBDeviceTransferTask *deviceTransferTask;
@property (retain, nonatomic) BKSProcessAssertion *processAssertion;
@property (nonatomic) struct __MKBAssertion *deviceLockAssertion;
@property (nonatomic) int passcodeChangeNotificationToken;
@property (retain, nonatomic) NSHashTable *delegates;
@property (retain, nonatomic) MBDeviceTransferConnectionInfo *connectionInfo;
@property (retain, nonatomic) MBDeviceTransferProgress *progressInfo;
@property (nonatomic) unsigned long long bytesTransferred;
@property (nonatomic) unsigned long long filesTransferred;
@property (nonatomic) double durationOfTransfer;
@property (nonatomic) double durationOfRestore;
@property (nonatomic) long long cancellationCause;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *migrationQueue;
@property (nonatomic) _Bool willMigrate;

+ (id)createDeviceTransferTask:(id)arg1;

- (void)dealloc;
- (void)start;
- (void)addDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)didCancel;
- (_Bool)takeAssertions;
- (void)didCompleteWithError:(id)arg1;
- (void)releaseAssertions;
- (void)startDeviceTransferTask;
- (void)cancelDeviceTransferTask;
- (_Bool)requiresProcessAssertion;
- (struct __MKBAssertion *)acquireDeviceLockAssertion;
- (void)_reacquireDeviceLockAssertion;
- (_Bool)_hasAssertions;
- (id)initWithFileTranferSession:(id)arg1;
- (void)cancelWithCause:(long long)arg1;
- (void)restartDeviceTransferTask:(id)arg1;

@end
