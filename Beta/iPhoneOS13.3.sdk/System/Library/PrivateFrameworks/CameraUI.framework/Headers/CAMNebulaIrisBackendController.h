/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

#import <CameraUI/Swift-Protocol.h>

@class AVAssetExportSession, BKSApplicationStateMonitor, CAMNebulaKeepAliveController, CAMPersistenceController, NSHashTable, NSMutableArray, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface CAMNebulaIrisBackendController : NSObject <Swift>

{
    _Bool __IOWorkSuspended;
    _Bool __shouldCheckMarkerFileForIOWorkSuspension;
    _Bool __crashRecoveryNeeded;
    int __notifyRegisterTokenSuspendIO;
    int __notifyRegisterTokenResumeIO;
    NSObject<OS_dispatch_queue> *__coordinationQueue;
    NSObject<OS_dispatch_queue> *__linkWorkQueue;
    CAMPersistenceController *__persistenceController;
    CAMNebulaKeepAliveController *__keepAliveController;
    NSMutableDictionary *__pendingOrInFlightJobsByUniqueIdentifier;
    NSMutableArray *__pendingExportVideoJobs;
    AVAssetExportSession *__activeExportSession;
    NSMutableDictionary *__bundleIdentifiersByVideoPersistenceUUID;
    BKSApplicationStateMonitor *__applicationStateMonitor;
    NSHashTable *__clientConnections;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_coordinationQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_linkWorkQueue;
@property (nonatomic, readonly) CAMPersistenceController *_persistenceController;
@property (nonatomic, readonly) CAMNebulaKeepAliveController *_keepAliveController;
@property (nonatomic, getter=_coordinationQueue_isIOWorkSuspended, setter=_coordinationQueue_setIOWorkSuspended:) _Bool _IOWorkSuspended;
@property (nonatomic, readonly) int _notifyRegisterTokenSuspendIO;
@property (nonatomic, readonly) int _notifyRegisterTokenResumeIO;
@property (nonatomic, getter=_coordinationQueue_shouldCheckMarkerFileForIOWorkSuspension, setter=_coordinationQueue_setShouldCheckMarkerFileForIOWorkSuspension:) _Bool _shouldCheckMarkerFileForIOWorkSuspension;
@property (nonatomic, readonly) NSMutableDictionary *_pendingOrInFlightJobsByUniqueIdentifier;
@property (nonatomic, readonly) NSMutableArray *_pendingExportVideoJobs;
@property (retain, nonatomic, setter=_setActiveExportSession:) AVAssetExportSession *_activeExportSession;
@property (nonatomic, readonly) NSMutableDictionary *_bundleIdentifiersByVideoPersistenceUUID;
@property (nonatomic, getter=_coordinationQueue_isCrashRecoveryNeeded, setter=_coordinationQueue_setCrashRecoveryNeeded:) _Bool _crashRecoveryNeeded;
@property (nonatomic, readonly) BKSApplicationStateMonitor *_applicationStateMonitor;
@property (nonatomic, readonly) NSHashTable *_clientConnections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)_removeItemAtURL:(id)arg1;
- (void)stillImageRequestDidCompleteVideoRemotePersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
- (void)performIrisCrashRecovery;
- (void)enqueueIrisVideoJobs:(id)arg1;
- (void)persistenceController:(id)arg1 didGenerateVideoLocalPersistenceResult:(id)arg2 forCaptureResult:(id)arg3 fromRequest:(id)arg4;
- (id)initWithPersistenceController:(id)arg1 keepAliveController:(id)arg2;
- (void)_coordinationQueue_destroyApplicationStateMonitor;
- (void)_dispatchToQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_dispatchToQueue:(id)arg1 afterDelay:(double)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)_coordinationQueue_createJobsForCrashRecoveryIfNeeded;
- (void)_dispatchToCoordinationQueueWithBlock:(CDUnknownBlockType)arg1;
- (void)performIrisCrashRecoveryForceFileSystemCheck:(_Bool)arg1;
- (void)_coordinationQueue_setupCameraProcessingMonitoringIfNecessary;
- (void)_coordinationQueue_enqueuePendingExportJobIfPossible;
- (void)_coordinationQueue_enqueueJobs:(id)arg1;
- (void)_coordinationQueue_enqueueAndTrackNewJob:(id)arg1;
- (id)_uniqueIdentifierForJob:(id)arg1;
- (void)_linkWorkQueue_linkAndPersistSelfContainedVideo:(id)arg1;
- (void)_dispatchToLinkWorkQueueWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)_removeItemAtURL:(id)arg1 maxAttempts:(long long)arg2;
- (void)_dispatchToMainQueueWithBlock:(CDUnknownBlockType)arg1;
- (void)_coordinationQueue_didPermanentlyFinishJob:(id)arg1;
- (unsigned long long)_coordinationQueue_failureCountForVideoURL:(id)arg1;
- (void)_coordinationQueue_setFailureCount:(unsigned long long)arg1 forVideoURL:(id)arg2;
- (void)_dispatchToLinkWorkQueueAfterDelay:(double)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_coordinationQueue_didCompleteExportJob:(id)arg1;
- (void)_dispatchToCoordinationQueueAfterDelay:(double)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)_videoJobFromURL:(id)arg1;
- (_Bool)_extractIrisPropertiesFromAVAsset:(id)arg1 stillImageDisplayTime:(CDStruct_1b6d18a9 *)arg2 irisIdentifier:(id *)arg3;
- (void)handleClientConnection:(id)arg1;
- (void)handleClientDisconnection:(id)arg1;

@end
