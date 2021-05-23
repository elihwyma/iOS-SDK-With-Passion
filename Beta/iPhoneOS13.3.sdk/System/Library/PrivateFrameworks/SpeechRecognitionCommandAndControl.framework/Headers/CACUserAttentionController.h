/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@class AWAttentionAwarenessClient, CACUserAttentionSignalProviderFactory, CMWakeGestureManager, NSMutableDictionary, NSString;

@protocol CACUserAttentionControllerDelegate, OS_dispatch_queue;

@interface CACUserAttentionController : NSObject

{
    CACUserAttentionSignalProviderFactory *_userAttentionSignalProviderFactory;
    unsigned long long _supportedAttentionAwarenessEvents;
    _Bool _deviceSupportsRaiseGestureDetection;
    AWAttentionAwarenessClient *_faceAttentionAwarenessClient;
    AWAttentionAwarenessClient *_touchAttentionAwarenessClient;
    CMWakeGestureManager *_wakeGestureManager;
    NSObject<OS_dispatch_queue> *_attentionAwarenessHandlerQueue;
    NSMutableDictionary *_attentionDetectionStatuses;
    NSObject<OS_dispatch_queue> *_asynchronousCallQueue;
    _Bool _deviceLowered;
    id <CACUserAttentionControllerDelegate> _delegate;
}

@property (nonatomic, getter=_isDeviceLowered, setter=_setDeviceLowered:) _Bool deviceLowered;
@property (weak, nonatomic) id <CACUserAttentionControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2;
- (_Bool)_deviceSupportsFaceDetection;
- (id)initWithSignalProviderFactory:(id)arg1 supportedAttentionAwarenessEvents:(unsigned long long)arg2 deviceSupportsRaiseGestureDetection:(_Bool)arg3;
- (_Bool)stopIfNeeded:(id *)arg1;
- (_Bool)startIfNeededForTypes:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)_detectionStartedForType:(unsigned long long)arg1;
- (_Bool)_startFaceAttentionAwarenessClient:(id *)arg1;
- (void)_setDetectionStarted:(_Bool)arg1 forType:(unsigned long long)arg2;
- (_Bool)_startTouchAttentionAwarenessClient:(id *)arg1;
- (void)_startWakeGestureManagerIfNeeded;
- (_Bool)stopIfNeededForTypes:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)_stopFaceAttentionAwarenessClient:(id *)arg1;
- (_Bool)_stopTouchAttentionAwarenessClient:(id *)arg1;
- (void)_stopWakeGestureManagerIfNeeded;
- (void)_handleFaceAttentionEvent:(id)arg1;
- (void)_handleFaceInterruptNotification:(unsigned long long)arg1;
- (void)_handleTouchAttentionEvent:(id)arg1;
- (_Bool)_restartFaceAttentionAwarenessClient:(id *)arg1;
- (id)initWithSamplingInterval:(double)arg1 attentionLossTimeout:(double)arg2 supportedAttentionAwarenessEvents:(unsigned long long)arg3 deviceSupportsRaiseGestureDetection:(_Bool)arg4;
- (_Bool)startIfNeeded:(id *)arg1;
- (void)startIfNeededForTypes:(unsigned long long)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
