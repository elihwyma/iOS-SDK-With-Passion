/*
 Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <Foundation/NSObject.h>

@class MBManager, NSError, RPFileTransferSession;

@protocol OS_dispatch_queue;

@interface MBDeviceTransferTask : NSObject

{
    MBManager *_manager;
    NSObject<OS_dispatch_queue> *_queue;
    _Atomic _Bool _started;
    _Atomic _Bool _canceled;
    _Atomic _Bool _finished;
    _Atomic _Bool _suspended;
    NSError *_completionError;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _connectionStateHandler;
    CDUnknownBlockType _connectionInfoHandler;
    CDUnknownBlockType _completionHandler;
    RPFileTransferSession *_fileTransferSession;
}

@property (retain, nonatomic) MBManager *manager;
@property (retain, nonatomic) RPFileTransferSession *fileTransferSession;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSError *completionError;
@property (copy, nonatomic) CDUnknownBlockType progressHandler;
@property (copy, nonatomic) CDUnknownBlockType connectionStateHandler;
@property (copy, nonatomic) CDUnknownBlockType connectionInfoHandler;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;

- (void)dealloc;
- (void)_suspend;
- (void)_resume;
- (void)cancel;
- (void)start;
- (_Bool)finished;
- (_Bool)canceled;
- (void)_start;
- (_Bool)started;
- (void)_cancel;
- (void)_finishWithError:(id)arg1;
- (long long)taskType;
- (id)initWithFileTransferSession:(id)arg1;
- (void)managerDidLoseConnectionToService:(id)arg1;
- (void)manager:(id)arg1 didUpdateDeviceTransferConnectionInfo:(id)arg2;
- (_Bool)_handleCompletionWithError:(id *)arg1;

@end
