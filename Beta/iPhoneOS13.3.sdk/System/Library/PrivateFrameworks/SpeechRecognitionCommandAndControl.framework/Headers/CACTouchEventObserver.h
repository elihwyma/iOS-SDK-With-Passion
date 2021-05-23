/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@class AXEventProcessor, AXMutableReplayableGesture;

@protocol CACTouchEventObserverDelegate;

@interface CACTouchEventObserver : NSObject

{
    AXEventProcessor *_eventProcessor;
    _Bool _areTouchesDown;
    id <CACTouchEventObserverDelegate> _delegate;
    AXMutableReplayableGesture *_gestureBeingRecorded;
    double _startTimeForGestureBeingRecorded;
}

@property (retain, nonatomic) AXMutableReplayableGesture *gestureBeingRecorded;
@property (nonatomic) double startTimeForGestureBeingRecorded;
@property (weak, nonatomic) id <CACTouchEventObserverDelegate> delegate;

- (id)init;
- (void)beginObserving;
- (void)endObserving;
- (void)startRecordingGesture;
- (id)stopRecordingGesture;
- (void)_didReceiveEvent:(id)arg1;
- (_Bool)_isLiftEvent:(id)arg1;
- (void)_recordEvent:(id)arg1;
- (_Bool)_isTouchEvent:(id)arg1;

@end
