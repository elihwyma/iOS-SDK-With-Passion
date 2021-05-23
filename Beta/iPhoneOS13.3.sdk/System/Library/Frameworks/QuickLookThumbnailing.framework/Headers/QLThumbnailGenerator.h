/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, QLThumbnailServiceProxy;

@protocol OS_dispatch_queue;

@interface QLThumbnailGenerator : NSObject

{
    NSMutableDictionary *_requests;
    unsigned long long _batchingCount;
    NSMutableDictionary *_pendingCancelledRequests;
    NSMutableDictionary *_pendingGenerationRequests;
    NSMutableDictionary *_preparingGenerationRequests;
    QLThumbnailServiceProxy *_thumbnailServiceProxy;
    QLThumbnailServiceProxy *_syncThumbnailServiceProxy;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_requestPreparationQueue;
    NSObject<OS_dispatch_queue> *_serialResponseQueue;
}

@property (retain, nonatomic) NSMutableDictionary *requests;
@property (nonatomic) unsigned long long batchingCount;
@property (retain, nonatomic) NSMutableDictionary *pendingCancelledRequests;
@property (retain, nonatomic) NSMutableDictionary *pendingGenerationRequests;
@property (retain, nonatomic) NSMutableDictionary *preparingGenerationRequests;
@property (retain, nonatomic) QLThumbnailServiceProxy *thumbnailServiceProxy;
@property (retain, nonatomic) QLThumbnailServiceProxy *syncThumbnailServiceProxy;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *requestPreparationQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialResponseQueue;

+ (void)initialize;
+ (id)sharedGenerator;
+ (id)errorWithCode:(long long)arg1 request:(id)arg2 additionalUserInfo:(id)arg3;
+ (id)debugDescriptionForErrorCode:(long long)arg1;
+ (void)generateThumbnailOfMaximumSize:(struct CGSize)arg1 scale:(double)arg2 forURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

- (id)init;
- (void)cancelRequest:(id)arg1;
- (void)generateBestRepresentationForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)generateRepresentationsForRequest:(id)arg1 updateHandler:(CDUnknownBlockType)arg2;
- (void)_addRequest:(id)arg1;
- (void)_removeRequest:(id)arg1;
- (void)generateThumbnailForRequest:(id)arg1 updateHandler:(CDUnknownBlockType)arg2 statusHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)_isBuildingBatch;
- (void)_queueThumbnailRequest:(id)arg1;
- (void)_sendPendingGenerationRequests;
- (void)_prepareSyncThumbnailRequest:(id)arg1;
- (void)_sendSyncGenerationRequest:(id)arg1;
- (void)saveBestRepresentationForRequest:(id)arg1 toFileAtURL:(id)arg2 withContentType:(id)arg3 allowingThumbnailDownloads:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (_Bool)_cancelRequestIfNeeded:(id)arg1;
- (void)_sendPendingCancelledRequests;
- (_Bool)__requestWithUUIDIsStillRunning:(id)arg1;
- (void)_performInBatch:(CDUnknownBlockType)arg1;
- (void)_sendPendingBatches;
- (id)__requestWithUUID:(id)arg1;
- (_Bool)_finishRequestIfInvalid:(id)arg1;
- (_Bool)_finishRequestIfNeeded:(id)arg1;
- (void)_createSyncThumbnailServiceProxy;
- (void)_createThumbnailServiceProxy;
- (_Bool)__finishRequestIfInvalid:(id)arg1;
- (void)_queueIconGenerationForRequestIfNeeded:(id)arg1;
- (void)_prepareThumbnailRequestForQueueOrSending:(id)arg1 synchronous:(_Bool)arg2;
- (_Bool)_queueThumbnailGenerationForRequestIfNeeded:(id)arg1;
- (_Bool)__finishRequestIfNeeded:(id)arg1;
- (void)__finishRequestWithoutError:(id)arg1;
- (id)thumbnailIconForRequest:(id)arg1;
- (void)__notifyClientWithNewThumbnailRepresentationForRequestIfNeeded:(id)arg1 thumbnail:(id)arg2 type:(long long)arg3 error:(id)arg4;
- (id)_requestWithUUID:(id)arg1;
- (void)_notifyClientWithNewThumbnailRepresentationForRequestIfNeeded:(id)arg1 thumbnail:(id)arg2 type:(long long)arg3 error:(id)arg4;
- (void)_callUpdateBlockOfRequestIfRunning:(id)arg1 andUpdateMostRepresentativeThumbnail:(id)arg2 type:(long long)arg3 error:(id)arg4;
- (void)_setMostRepresentativeThumbnail:(id)arg1 forRequest:(id)arg2;
- (void)_finishAndCallCompletionBlockOfRequest:(id)arg1 withError:(id)arg2;
- (id)thumbnailIconForContentType:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 iconVariant:(long long)arg4;
- (_Bool)_requestRepresentationTypeIsMoreRepresentative:(id)arg1 thanType:(long long)arg2;
- (void)_finishRequest:(id)arg1 withError:(id)arg2;
- (void)__finishRequest:(id)arg1 withError:(id)arg2;
- (void)__callCompletionBlockOfRequest:(id)arg1 withError:(id)arg2;
- (void)_logRequestDuration:(id)arg1;
- (void)__removeRequestWithUUID:(id)arg1;
- (void)_handleThumbnailGenerationCompletionWithUUID:(id)arg1 data:(id)arg2 format:(id)arg3 metadata:(id)arg4 contentRect:(struct CGRect)arg5 iconFlavor:(int)arg6 thumbnailType:(long long)arg7 clientShouldTakeOwnership:(_Bool)arg8 error:(id)arg9;
- (void)_finishAllRequestsWithError:(id)arg1;
- (void)didUpdateStatus:(long long)arg1 ofThumbnailGenerationWithUUID:(id)arg2;
- (void)didGenerateThumbnailForRequestWithUUID:(id)arg1 data:(id)arg2 bitmapFormat:(id)arg3 metadata:(id)arg4 contentRect:(struct CGRect)arg5 iconFlavor:(int)arg6 thumbnailType:(long long)arg7 clientShouldTakeOwnership:(_Bool)arg8;
- (void)failedToGenerateThumbnailOfType:(long long)arg1 forRequestWithUUID:(id)arg2 error:(id)arg3;
- (void)synchronousGenerateThumbnailForRequest:(id)arg1 updateHandler:(CDUnknownBlockType)arg2 statusHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)saveBestRepresentationForRequest:(id)arg1 toFileAtURL:(id)arg2 withContentType:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)performInBatch:(CDUnknownBlockType)arg1;
- (void)_callCompletionBlockOfRequest:(id)arg1 withError:(id)arg2;
- (void)_finishRequestWithoutError:(id)arg1;

@end
