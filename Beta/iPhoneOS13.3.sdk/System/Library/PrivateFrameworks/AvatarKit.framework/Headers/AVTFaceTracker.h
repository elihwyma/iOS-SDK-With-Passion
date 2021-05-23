/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class ARConfiguration, ARFrame, ARRecordingTechnique, ARSession, AVTFaceTrackingInfo, MISSING_TYPE, NSLock, NSMutableArray, NSString, NSURL;

@protocol OS_dispatch_semaphore;

@interface AVTFaceTracker : NSObject

{
    ARSession *_arSession;
    ARConfiguration *_faceTracking;
    ARRecordingTechnique *_recordingTechnique;
    NSMutableArray *_delegates;
    AVTFaceTrackingInfo *_trackingInfo;
    CDStruct_32896d86 _trackingData;
    NSLock *_trackingDataLock;
    unsigned long long _lastTrackingCaptureTimestamp;
    CDStruct_14d5dc5e _rawTransform;
    NSObject<OS_dispatch_semaphore> *_recordingSemaphore;
    NSURL *_faceTrackingRecordingURL;
    _Bool _trackingIsPaused;
    _Bool _isActive;
    _Bool _shouldConstraintHeadPose;
    _Bool _shouldUseAudioData;
    struct {
        double refTimestamp;
        double arDelegateTimestamp;
    } _perfPacket;
    double _lastARFrameTime;
    long long _frame_id;
    double _timeBetweenARFrame;
    double _lastTrackingDate;
    long long _orientation;
    _Bool _lowLight;
    _Bool _isSensorCovered;
    _Bool limitRoll;
    _Bool _faceTrackingPaused;
    _Bool _skipUpdates;
    _Bool _faceIsTracked;
    _Bool _directRetargetingMode;
    ARFrame *_currentARFrame;
}

@property (nonatomic) _Bool shouldConstraintHeadPose;
@property (nonatomic) _Bool shouldUseAudioData;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic, getter=faceTrackingIsPaused) _Bool faceTrackingPaused;
@property (nonatomic) _Bool skipUpdates;
@property (readonly) _Bool faceIsTracked;
@property (readonly) _Bool lowLight;
@property (readonly, getter=isSensorCovered) _Bool sensorCovered;
@property (readonly) double lastTrackingDate;
@property (readonly) unsigned long long lastTrackingCaptureTimestamp;
@property (readonly) AVTFaceTrackingInfo *faceTrackingInfo;
@property (readonly) long long faceTrackingFrameID;
@property (readonly) CDStruct_14d5dc5e rawTransform;
@property (readonly) ARSession *arSession;
@property (readonly) ARFrame *currentARFrame;
@property (nonatomic) _Bool directRetargetingMode;
@property (nonatomic) _Bool limitRoll;
@property (readonly) float fieldOfView;
@property (readonly) MISSING_TYPE *videoDimensions;
@property (readonly) float videoAspectRatio;
@property (nonatomic, readonly) double arFrameTimestamp;
@property (nonatomic, readonly) double arDelegateTimestamp;
@property (nonatomic, readonly) double arFrameDeltaTime;
@property (copy) NSURL *faceTrackingRecordingURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)usesInternalTrackingPipeline;
+ (void)setUsesInternalTrackingPipeline:(_Bool)arg1;

- (id)init;
- (void)run;
- (_Bool)isActive;
- (void)stop;
- (void)addDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)stopRecording;
- (void)setLowLight:(_Bool)arg1;
- (void)startRecording;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)sessionWasInterrupted:(id)arg1;
- (void)sessionInterruptionEnded:(id)arg1;
- (void)session:(id)arg1 didOutputAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)session:(id)arg1 didUpdateFrame:(id)arg2;
- (void)technique:(id)arg1 didFinishWithResult:(id)arg2;
- (void)decreaseFrameRate;
- (void)increaseFrameRateToMaximum;
- (void)setupARKit;
- (void)_setupARKitWithRecordTechnique:(_Bool)arg1;
- (void)setupARKitWithRecordTechnique;
- (void)setFaceIsTracked:(_Bool)arg1;
- (void)enumerateDelegates:(CDUnknownBlockType)arg1;
- (void)setSensorCovered:(_Bool)arg1;
- (_Bool)faceTrackingPaused;
- (void)beginQuery;
- (void)endQuery;
- (void)copyTrackingData:(CDStruct_32896d86 *)arg1;

@end
