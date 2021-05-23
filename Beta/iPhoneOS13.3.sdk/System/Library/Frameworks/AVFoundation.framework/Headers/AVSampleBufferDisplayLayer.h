/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <QuartzCore/CALayer.h>

@class AVSampleBufferDisplayLayerInternal, NSError, NSString;

@interface AVSampleBufferDisplayLayer : CALayer

{
    AVSampleBufferDisplayLayerInternal *_sampleBufferDisplayLayerInternal;
}

@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) NSError *error;
@property (readonly, getter=isReadyForMoreMediaData) _Bool readyForMoreMediaData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, readonly) struct OpaqueCMTimebase *timebase;
@property (nonatomic, readonly) _Bool outputObscuredDueToInsufficientExternalProtection;
@property (nonatomic) _Bool preventsCapture;
@property (nonatomic) _Bool preventsDisplaySleepDuringVideoPlayback;
@property (retain) struct OpaqueCMTimebase *controlTimebase;
@property (copy) NSString *videoGravity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (_Bool)automaticallyNotifiesObserversOfStatus;
+ (_Bool)automaticallyNotifiesObserversOfError;

- (id)init;
- (void)dealloc;
- (void)setBounds:(struct CGRect)arg1;
- (void)flush;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (id)videoPerformanceMetrics;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)stopRequestingMediaData;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)flushAndRemoveImage;
- (void)prerollDecodeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)expectMinimumUpcomingSampleBufferPresentationTime:(CDStruct_1b6d18a9)arg1;
- (void)resetUpcomingSampleBufferPresentationTimeExpectations;
- (id)_weakReference;
- (void)_forBoundsAnimations:(id)arg1 applyBlock:(CDUnknownBlockType)arg2;
- (void)_didFinishSuspension:(id)arg1;
- (void)_refreshAboveHighWaterLevel;
- (void)copyFigSampleBufferAudioRenderer:(struct OpaqueFigSampleBufferAudioRenderer **)arg1;
- (_Bool)setRenderSynchronizer:(id)arg1 error:(id *)arg2;
- (void)_updateLayerTreeGeometryWithVideoGravity:(id)arg1 bounds:(struct CGRect)arg2 presentationSize:(struct CGSize)arg3;
- (void)_setStatus:(long long)arg1 error:(id)arg2;
- (void)_setControlTimebase:(struct OpaqueCMTimebase *)arg1;
- (_Bool)_setSynchronizerTimebase:(struct OpaqueCMTimebase *)arg1 error:(id *)arg2;
- (int)_initializeTimebases;
- (int)_createVideoQueue;
- (void)_updatePresentationSize:(struct CGSize)arg1;
- (void)_resetStatusWithOSStatus:(int)arg1;
- (void)_setOutputObscuredDueToInsufficientExternalProtection:(_Bool)arg1;
- (void)_addFigVideoQueueListeners;
- (void)_removeFigVideoQueueListeners;
- (void)_callOldPrerollCompletionHandlerWithSuccess:(_Bool)arg1 andSetNewPrerollCompletionHandler:(CDUnknownBlockType)arg2 forRequestID:(int)arg3;
- (id)_transformToAbsoluteAnimationOfBounds:(id)arg1;
- (void)_addAnimationsForContentLayer:(id)arg1 size:(struct CGSize)arg2 gravity:(id)arg3;
- (void)flushWithRemovalOfDisplayedImage:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_flushComplete;
- (void)_completedDecodeForPrerollForRequestID:(int)arg1;
- (_Bool)setUpcomingPresentationTimeExpectations:(int)arg1 minimumPresentationTime:(CDStruct_1b6d18a9)arg2;
- (void)expectMonotonicallyIncreasingUpcomingSampleBufferPresentationTimes;

@end
