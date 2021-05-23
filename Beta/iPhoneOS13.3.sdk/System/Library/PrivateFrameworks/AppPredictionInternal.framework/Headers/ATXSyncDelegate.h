/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, NSURL;

@protocol OS_dispatch_queue, OS_os_transaction;

@interface ATXSyncDelegate : NSObject

{
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSURL *_lastSyncedFileURL;
    NSURL *_resultsFileURL;
    NSData *_syncData;
    NSObject<OS_os_transaction> *_syncTransaction;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic, readonly) NSURL *lastSyncedFileURL;
@property (nonatomic, readonly) NSURL *resultsFileURL;
@property (nonatomic, readonly) NSData *syncData;
@property (nonatomic, readonly) NSObject<OS_os_transaction> *syncTransaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)service:(id)arg1 startSession:(id)arg2 error:(id *)arg3;
- (void)service:(id)arg1 sessionEnded:(id)arg2 error:(id)arg3;
- (void)service:(id)arg1 incomingData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)syncSession:(id)arg1 enqueueChanges:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)syncSession:(id)arg1 didEndWithError:(id)arg2;
- (_Bool)syncSession:(id)arg1 resetDataStoreWithError:(id *)arg2;
- (id)pendingSyncFileURL;
- (_Bool)shouldResumeSync;
- (void)handleDataToSync:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
