/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class CAMBurstController, CAMIrisVideoController, CAMLocationController, CAMPowerController, CAMProtectionController, CAMThumbnailGenerator, NSMapTable, NSMutableArray, NSMutableDictionary, NSString;

@protocol CAMPersistenceResultDelegate, OS_dispatch_queue;

@interface CAMPersistenceController : NSObject

{
    struct {
        _Bool respondsToDidCompleteAllLocalPersistenceForRequest;
    } _resultDelegateFlags;
    NSMutableArray *_pendingLocalPersistenceWrappers;
    NSMutableArray *_pendingRemotePersistenceWrappers;
    id <CAMPersistenceResultDelegate> _resultDelegate;
    NSObject<OS_dispatch_queue> *__localPersistenceQueue;
    NSObject<OS_dispatch_queue> *__remotePersistenceQueue;
    CAMThumbnailGenerator *__localPersistenceThumbnailGenerator;
    CAMThumbnailGenerator *__remotePersistenceThumbnailGenerator;
    CAMLocationController *__locationController;
    CAMProtectionController *__protectionController;
    CAMPowerController *__powerController;
    CAMBurstController *__burstController;
    CAMIrisVideoController *__irisVideoController;
    NSObject<OS_dispatch_queue> *__resultDelegateIsolationQueue;
    NSObject<OS_dispatch_queue> *__coordinationQueue;
    NSMapTable *__coordinationQueueGroupsByIdentifier;
    NSMutableDictionary *__coordinationQueue_stillImagePersistenceCoordinators;
    NSMutableDictionary *__coordinationQueue_videoPersistenceCoordinators;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_localPersistenceQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_remotePersistenceQueue;
@property (nonatomic, readonly) CAMThumbnailGenerator *_localPersistenceThumbnailGenerator;
@property (nonatomic, readonly) CAMThumbnailGenerator *_remotePersistenceThumbnailGenerator;
@property (nonatomic, readonly) NSMutableArray *_pendingLocalPersistenceWrappers;
@property (nonatomic, readonly) NSMutableArray *_pendingRemotePersistenceWrappers;
@property (nonatomic, readonly) CAMLocationController *_locationController;
@property (nonatomic, readonly) CAMProtectionController *_protectionController;
@property (nonatomic, readonly) CAMPowerController *_powerController;
@property (nonatomic, readonly) CAMBurstController *_burstController;
@property (nonatomic, readonly) CAMIrisVideoController *_irisVideoController;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_resultDelegateIsolationQueue;
@property (nonatomic, readonly) _Bool resultDelegateRespondsToDidCompleteAllLocalPersistenceForRequest;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_coordinationQueue;
@property (nonatomic, readonly) NSMapTable *_coordinationQueueGroupsByIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *_coordinationQueue_stillImagePersistenceCoordinators;
@property (nonatomic, readonly) NSMutableDictionary *_coordinationQueue_videoPersistenceCoordinators;
@property (weak, nonatomic) id <CAMPersistenceResultDelegate> resultDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)clientVideoMetadataForLocation:(id)arg1 withCreationDate:(id)arg2;
+ (id)clientVideoMetadataForRequest:(id)arg1 withCreationDate:(id)arg2 isEV0ForHDR:(_Bool)arg3 livePhotoIdentifierOverride:(id)arg4;
+ (id)uniquePathForAssetWithUUID:(id)arg1 captureTime:(double)arg2 extension:(id)arg3 usingIncomingDirectory:(_Bool)arg4;
+ (id)videoMetadataDateFormatter;
+ (id)_pathForIncomingDirectory;
+ (id)delimiterForIncomingAssetFilenames;
+ (id)uniqueIncomingPathForAssetWithUUID:(id)arg1 captureTime:(double)arg2 extension:(id)arg3;
+ (id)spatialOverCapturePathForPath:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)stillImageRequestDidCompleteCapture:(id)arg1 error:(id)arg2;
- (void)stillImagePersistenceCoordinator:(id)arg1 requestsTimeoutScheduledForDeferredRemotePersistenceForCoordinationInfo:(id)arg2 request:(id)arg3;
- (void)stillImagePersistenceCoordinator:(id)arg1 requestsRemotePersistenceForLocalPersistenceResult:(id)arg2 fullsizeRenderLocalResult:(id)arg3 spatialOverCaptureLocalResult:(id)arg4 request:(id)arg5 powerAssertionReason:(unsigned int)arg6;
- (void)stillImageRequest:(id)arg1 didCompleteVideoCaptureWithResult:(id)arg2;
- (void)_mainThread_handleApplicationDidEnterBackground:(id)arg1;
- (id)initWithLocationController:(id)arg1 burstController:(id)arg2 protectionController:(id)arg3 powerController:(id)arg4 irisVideoController:(id)arg5;
- (void)_handleStillImagePersistenceForRequest:(id)arg1 withResult:(id)arg2;
- (void)_handleVideoPersistenceForRequest:(id)arg1 withResult:(id)arg2;
- (id)_coordinationGroupForIdentifier:(id)arg1;
- (void)_removeCoordinationGroupForIdentifier:(id)arg1;
- (void)_coordinateRemotePersistenceForStillImageLocalResult:(id)arg1 coordinationInfo:(id)arg2 request:(id)arg3;
- (unsigned int)_stillImageLocalPowerAssertionReasonForCoordinationInfo:(id)arg1;
- (id)_ensureCoordinationGroupForIdentifier:(id)arg1;
- (void)_locallyPersistStillImageResult:(id)arg1 forRequest:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)_persistStillImageCaptureSurfaceResult:(id)arg1 withRequest:(id)arg2;
- (void)_notifyDelegateOfCompletedStillImageLocalPersistenceForRequest:(id)arg1 withResult:(id)arg2;
- (void)_dispatchRemotePersistenceForLocalPersistenceResult:(id)arg1 fullsizeRenderLocalResult:(id)arg2 spatialOverCaptureLocalResult:(id)arg3 request:(id)arg4 powerAssertionReason:(unsigned int)arg5;
- (id)_jobDictionaryForStillImageLocalResult:(id)arg1 fullsizeRenderLocalResult:(id)arg2 spatialOverCaptureLocalResult:(id)arg3 fromRequest:(id)arg4;
- (void)_remotelyPersistStillImageJob:(id)arg1 forRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_uniformTypeIdentifierForStillImageRequest:(id)arg1;
- (id)_physicallyRotatedJPEGDataFromCapturePhoto:(id)arg1;
- (id)_createMetadataForPhysicallyOrientedImage:(id)arg1;
- (id)_extensionForUniformTypeIdentifier:(id)arg1;
- (_Bool)_writeJPEGToURL:(id)arg1 withData:(id)arg2 thumbnail:(id)arg3 properties:(id)arg4 duringBurst:(_Bool)arg5 error:(out id *)arg6;
- (_Bool)_writeDataToURL:(id)arg1 withData:(id)arg2 duringBurst:(_Bool)arg3 error:(out id *)arg4;
- (id)_adjustmentsDataForRequest:(id)arg1 captureDimensions:(CDStruct_79c71658)arg2 portraitMetadata:(id)arg3;
- (id)_xmpEncodedDiagnosticDataFromDictionary:(id)arg1;
- (struct CGAffineTransform)_affineTransformForRotationDegrees:(int)arg1 mirrored:(_Bool)arg2;
- (struct __CFWriteStream *)_createOpenWriteStreamWithURL:(id)arg1 forBurst:(_Bool)arg2;
- (void)_notifyDelegateOfCompletedStillImageRemotePersistenceForRequest:(id)arg1 withReply:(id)arg2 fromBatchOfSize:(unsigned long long)arg3 error:(id)arg4;
- (void)_handleCompletedStillImageJobForRequest:(id)arg1 withReply:(id)arg2 fromBatchOfSize:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4 error:(id)arg5;
- (void)_coordinateRemotePersistenceForVideoLocalResult:(id)arg1 coordinationInfo:(id)arg2 request:(id)arg3;
- (unsigned int)_videoLocalPowerAssertionReasonForCoordinationInfo:(id)arg1;
- (void)_locallyPersistVideoCaptureResult:(id)arg1 forRequest:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_dispatchRemotePersistenceForLocalVideoPersistenceResult:(id)arg1 spatialOverCaptureLocalVideoResult:(id)arg2 request:(id)arg3 powerAssertionReason:(unsigned int)arg4;
- (id)_persistVideoCaptureResult:(id)arg1 withRequest:(id)arg2;
- (void)_notifyDelegateOfCompletedVideoLocalPersistenceForRequest:(id)arg1 withResult:(id)arg2;
- (id)_jobDictionaryForVideoLocalResult:(id)arg1 spatialOverCaptureLocalResult:(id)arg2 fromRequest:(id)arg3;
- (void)_remotelyPersistVideoJob:(id)arg1 forRequest:(id)arg2 withSendHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_videoPersistenceUUIDForRequest:(id)arg1 withResult:(id)arg2;
- (id)_stillPersistenceUUIDForRequest:(id)arg1 withVideoResult:(id)arg2;
- (id)_spatialOverCaptureIdentifierForVideoURL:(id)arg1;
- (void)_notifyDelegateOfCompletedVideoRemotePersistenceForRequest:(id)arg1 withReply:(id)arg2 error:(id)arg3;
- (void)_handleCompletedVideoJobForRequest:(id)arg1 withReply:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 error:(id)arg4;
- (id)_jobDictionaryForTimelapsePlaceholderResult:(id)arg1;
- (void)videoPersistenceCoordinator:(id)arg1 requestsRemotePersistenceForLocalPersistenceResult:(id)arg2 spatialOverCaptureResult:(id)arg3 captureRequest:(id)arg4 powerAssertionReason:(unsigned int)arg5;
- (void)videoPersistenceCoordinator:(id)arg1 requestsTimeoutScheduledForDeferredRemotePersistenceForCoordinationInfo:(id)arg2 request:(id)arg3;
- (void)stillImageRequest:(id)arg1 didCompleteStillImageCaptureWithResult:(id)arg2;
- (void)videoRequest:(id)arg1 didCompleteCaptureWithResult:(id)arg2;
- (void)panoramaRequest:(id)arg1 didCompleteCaptureWithResult:(id)arg2;
- (unsigned int)_videoRemotePowerAssertionReasonForCoordinationInfo:(id)arg1;
- (void)performDeferredRemotePersistenceWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)persistBurstWithIdentifier:(id)arg1 result:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)persistPlaceholderTimelapseVideoWithResult:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
