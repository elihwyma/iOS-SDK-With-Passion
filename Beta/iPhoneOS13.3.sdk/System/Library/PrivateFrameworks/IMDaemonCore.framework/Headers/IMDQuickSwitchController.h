/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <Foundation/NSObject.h>

@class IDSService, NSString, PSYSyncCoordinator;

@interface IMDQuickSwitchController : NSObject

{
    IDSService *_quickSwitchIDSService;
    PSYSyncCoordinator *_syncCoordinator;
}

@property (retain, nonatomic) IDSService *quickSwitchIDSService;
@property (retain, nonatomic) PSYSyncCoordinator *syncCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (id)_defaultPairedDevice;
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;
- (void)_deleteFileAtPath:(id)arg1;
- (void)_cleanUpTemporaryFiles;
- (_Bool)_isPairedDeviceInProxyMode;
- (void)_initiateQuickSwitch;
- (unsigned long long)_getFileSizeAtPath:(id)arg1;
- (id)_getTempDBPath;
- (id)_getTempRecentsPath;
- (id)_getZippedDBPath;
- (id)_getZippedRecentsPath;
- (id)_getTruncatedDBPath;
- (id)_getDowngradedDBPath;
- (_Bool)_sendIDSMessage:(id)arg1;
- (void)_quickSwitchCompleted:(_Bool)arg1;
- (void)_notifyPSYWithResult:(_Bool)arg1;
- (_Bool)_sendIDSFile:(id)arg1 withCommand:(long long)arg2;
- (long long)_getCurrentDBVersion;
- (_Bool)_truncateDBToPath:(id)arg1;
- (_Bool)_sendZippedFileAtPath:(id)arg1 withCommand:(long long)arg2;
- (void)_notifyPSYDataSent;
- (void)_compressFileAtPath:(id)arg1 toPath:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)_handleQuickSwitchInitiateRequest;
- (void)_handleDBVersionResponse:(id)arg1;
- (void)_handleRecentsRequest;
- (void)_handleQuickSwitchCompleted:(id)arg1;
- (void)_handleIncomingDB:(id)arg1;
- (void)_handleIncomingRecents:(id)arg1;
- (_Bool)_supportsQuickSwitchWithPairedDevice;
- (void)dummyMethod;
- (void)_decompressFileAtPath:(id)arg1 toPath:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)_sendDBVersionResponse:(long long)arg1;
- (void)_sendRecentsRequest;
- (void)_sendQuickSwitchCompletedWithResult:(_Bool)arg1;

@end
