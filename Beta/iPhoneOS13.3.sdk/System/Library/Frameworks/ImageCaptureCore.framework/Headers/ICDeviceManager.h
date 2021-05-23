/*
 Image: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface ICDeviceManager : NSObject

{
    NSXPCConnection *_managerConnection;
    NSMutableArray *_deviceHandles;
    struct os_unfair_lock_s _deviceHandlesLock;
    NSDictionary *_deviceMatchingInfo;
    NSMutableDictionary *_devices;
    NSOperationQueue *_deviceOperationQueue;
    struct os_unfair_lock_s _deviceOperationQueueLock;
    _Bool _deviceOperationQueueSuspended;
    _Bool _managerIsRunning;
}

@property (retain) NSOperationQueue *deviceOperations;
@property (retain, nonatomic) NSXPCConnection *managerConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)postNotification:(id)arg1;
- (_Bool)openRemoteDeviceManager;
- (void)getDeviceList;
- (void)closeDeviceHandle:(id)arg1;
- (void)stopRunning;
- (void)startRunning;
- (id)remoteManager;
- (void)addSelectorToInterface:(id)arg1 selectorString:(id)arg2 origin:(_Bool)arg3;
- (void)startDeviceWithHandle:(id)arg1;
- (void)notifyAddedDevice:(id)arg1;
- (void)openDeviceHandle:(id)arg1;
- (void)addInteractiveOperation:(id)arg1;
- (id)deviceManagerConnection;
- (void)notifyRemovedDevice:(id)arg1;
- (void)restartRunning;
- (void)resumeOperations;
- (void)openDeviceImp:(id)arg1;
- (void)closeDeviceImp:(id)arg1;
- (void)getFileThumbnailImp:(id)arg1;
- (void)getFileMetadataImp:(id)arg1;
- (void)getFileDataImp:(id)arg1;
- (void)openSessionImp:(id)arg1;
- (void)closeSessionImp:(id)arg1;
- (void)syncClockImp:(id)arg1;
- (void)addInitiatedOperation:(id)arg1;
- (void)deleteFileImp:(id)arg1;
- (void)extracted:(id)arg1;
- (void)downloadFileImp:(id)arg1;
- (void)sendDevice:(id)arg1 ptpCommandImp:(id)arg2;
- (void)registerDevice:(id)arg1 forImageCaptureEventNotificationsImp:(id)arg2;
- (void)unregisterDevice:(id)arg1 forImageCaptureEventNotificationsImp:(id)arg2;
- (void)ejectImp:(id)arg1;
- (long long)openDevice:(id)arg1 contextInfo:(void *)arg2;
- (long long)closeDevice:(id)arg1 contextInfo:(void *)arg2;
- (long long)openSession:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)closeSession:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)getFileThumbnail:(id)arg1 fromDevice:(id)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (long long)getFileMetadata:(id)arg1 fromDevice:(id)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (long long)getFileData:(id)arg1 fromDevice:(id)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (long long)syncClock:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)deleteFile:(id)arg1 fromDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)downloadFile:(id)arg1 fromDevice:(id)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (long long)sendDevice:(id)arg1 ptpCommand:(id)arg2 andPayload:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (long long)registerDevice:(id)arg1 forImageCaptureEventNotifications:(id)arg2;
- (long long)unregisterDevice:(id)arg1 forImageCaptureEventNotifications:(id)arg2;
- (long long)eject:(id)arg1;
- (void)enumerateContent;
- (id)deviceForConnection:(id)arg1;
- (id)deviceForUUID:(id)arg1;
- (void)postCommandCompletionNotification:(id)arg1;
- (void)suspendOperations;

@end
