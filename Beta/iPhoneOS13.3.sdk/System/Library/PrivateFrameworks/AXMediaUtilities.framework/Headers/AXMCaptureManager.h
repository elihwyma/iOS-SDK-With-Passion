/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput, NSHashTable, NSString, _AXMCaptureManagerDetectionEngine;

@protocol OS_dispatch_queue;

@interface AXMCaptureManager : NSObject

{
    AVCaptureDevice *_captureDevice;
    AVCaptureSession *_captureSession;
    AVCaptureDeviceInput *_captureDeviceInput;
    AVCaptureVideoDataOutput *_videoDataOutput;
    NSObject<OS_dispatch_queue> *_videoFrameReceiveQueue;
    long long _activeScenario;
    NSHashTable *_videoFrameObservers;
    _AXMCaptureManagerDetectionEngine *_detectionEngine;
    NSHashTable *_featureDetectionObservers;
    struct os_unfair_lock_s _observerLock;
    long long _deviceOrientation;
}

@property (nonatomic, readonly) AVCaptureSession *session;
@property (nonatomic, readonly) long long activeScenario;
@property (nonatomic) long long deviceOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)captureSessionReport:(id)arg1;

- (id)init;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (id)initWithCaptureSession:(id)arg1;
- (id)idealCaptureSettingsForScenario:(long long)arg1;
- (_Bool)_configureSessionWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)startSessionIfNeeded;
- (void)stopSession;
- (_Bool)configureForScenario:(long long)arg1 error:(id *)arg2;
- (void)addVideoFrameObserver:(id)arg1;
- (void)removeVideoFrameObserver:(id)arg1;
- (void)addFeatureDetectionObserver:(id)arg1;
- (void)removeFeatureDetectionObserver:(id)arg1;
- (int)_minimumAcceptableFramerateForScenario:(long long)arg1;
- (int)_maximumAcceptableFramerateForScenario:(long long)arg1;
- (int)_minimumAcceptableResolutionForScenario:(long long)arg1;
- (int)_maximumAcceptableResolutionForScenario:(long long)arg1;
- (unsigned int)_pixelFormatForScenario:(long long)arg1;
- (id)_filteredDevicesAndFormatsForScenario:(long long)arg1;
- (id)_preferredFormatForFormats:(id)arg1;
- (void)printAllVideoDevices;
- (void)beginLiveDetectionWithOptions:(id)arg1;
- (void)endLiveDetection;

@end
