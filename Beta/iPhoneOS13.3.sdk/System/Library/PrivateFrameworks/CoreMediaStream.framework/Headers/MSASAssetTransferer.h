/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSObject.h>

@class MMCSEngine, MSASPersonModel, MSAlbumSharingDaemon, MSBackoffManager, NSString;

@protocol OS_dispatch_queue;

@interface MSASAssetTransferer : NSObject

{
    _Bool _hasShutDown;
    int _maxBatchCount;
    int _maxRetryCount;
    id _delegate;
    NSString *_personID;
    MMCSEngine *_engine;
    double _maxMMCSTokenValidityTimeInterval;
    MSAlbumSharingDaemon *_daemon;
    MSASPersonModel *_model;
    MSBackoffManager *_backoffManager;
    NSString *_focusAlbumGUID;
    NSString *_focusAssetCollectionGUID;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
}

@property (weak, nonatomic) id delegate;
@property (copy, nonatomic) NSString *personID;
@property (nonatomic, readonly) MMCSEngine *engine;
@property (nonatomic) double maxMMCSTokenValidityTimeInterval;
@property (weak, nonatomic) MSAlbumSharingDaemon *daemon;
@property (weak, nonatomic) MSASPersonModel *model;
@property (weak, nonatomic) MSBackoffManager *backoffManager;
@property (copy, nonatomic) NSString *focusAlbumGUID;
@property (copy, nonatomic) NSString *focusAssetCollectionGUID;
@property (nonatomic) int maxBatchCount;
@property (nonatomic) int maxRetryCount;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) _Bool hasShutDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)retryOutstandingActivities;
- (void)shutDownCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithPersonID:(id)arg1;
- (id)initWithPersonID:(id)arg1 eventQueue:(id)arg2;
- (void)cancelCompletionBlock:(CDUnknownBlockType)arg1;
- (void)workQueueRetryOutstandingActivities;
- (id)_canceledError;
- (id)_pathForPersonID:(id)arg1;
- (void)workQueueStop;
- (void)workQueueShutDownCompletionBlock:(CDUnknownBlockType)arg1;
- (void)workQueueCancel;
- (void)MMCSEngine:(id)arg1 didFinishPuttingAsset:(id)arg2 putReceipt:(id)arg3 error:(id)arg4;
- (void)MMCSEngine:(id)arg1 didCreateRequestorContext:(id)arg2 forAssets:(id)arg3;
- (void)MMCSEngine:(id)arg1 didMakePutProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;
- (void)didFinishPuttingAllAssets;
- (void)MMCSEngine:(id)arg1 didFinishGettingAsset:(id)arg2 path:(id)arg3 error:(id)arg4;
- (void)MMCSEngine:(id)arg1 didMakeGetProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;
- (void)didFinishGettingAllAssets;
- (_Bool)MMCSEngine:(id)arg1 shouldLogAtLogLevel:(int)arg2;
- (void)MMCSEngine:(id)arg1 logMessage:(id)arg2 logLevel:(int)arg3;
- (void)MMCSEngine:(id)arg1 logPerformanceMetrics:(id)arg2;
- (void)_rereadPerformanceLoggingSetting;
- (void)stopCompletionBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)workQueueNextItemID;
- (double)workQueueMaxMMCSTokenValidityTimeInterval;
- (id)_missingURLError;
- (id)_missingMMCSTokenError;
- (id)_MMCSTokenTooOldError;
- (void)_sendDidIdleNotification;

@end
