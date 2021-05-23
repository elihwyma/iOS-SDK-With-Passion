/*
 Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <MobileBackup/MBDeviceTransferTask.h>

@interface MBSourceDeviceTransferTask : MBDeviceTransferTask

- (void)cancel;
- (void)resume;
- (void)start;
- (void)_start;
- (void)_cancel;
- (void)_finishWithError:(id)arg1;
- (long long)taskType;
- (id)initWithFileTransferSession:(id)arg1;
- (void)manager:(id)arg1 didFinishDeviceTransferWithError:(id)arg2;
- (void)manager:(id)arg1 didFinishDeviceTransferKeychainTransfer:(id)arg2;
- (void)manager:(id)arg1 didFinishDeviceTransferPreflight:(id)arg2 error:(id)arg3;
- (void)manager:(id)arg1 didUpdateDeviceTransferProgress:(id)arg2;

@end
