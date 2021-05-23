/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSTimer;

@protocol _UIDigitizerGestureRecognizerImpDelegate;

__attribute__((visibility("hidden")))
@interface _UIDigitizerGestureRecognizerImp : NSObject

{
    id <_UIDigitizerGestureRecognizerImpDelegate> _delegate;
    double _minimumPressDuration;
    double _maximumPressDuration;
    long long _numberOfActiveTouches;
    double _pressEndToTouchBeginDuration;
    double _touchEndToPressEndDuration;
    double _touchEndTime;
    double _pressBeginTime;
    double _pressEndTime;
    double _lastRecognitionTime;
    NSTimer *_shortTimer;
    struct CGPoint _digitizerLocation;
}

@property (weak, nonatomic) id <_UIDigitizerGestureRecognizerImpDelegate> delegate;
@property (nonatomic) double minimumPressDuration;
@property (nonatomic) double maximumPressDuration;
@property (nonatomic) struct CGPoint digitizerLocation;
@property (nonatomic) long long numberOfActiveTouches;
@property (nonatomic) double pressEndToTouchBeginDuration;
@property (nonatomic) double touchEndToPressEndDuration;
@property (nonatomic) double touchEndTime;
@property (nonatomic) double pressBeginTime;
@property (nonatomic) double pressEndTime;
@property (nonatomic) double lastRecognitionTime;
@property (weak, nonatomic) NSTimer *shortTimer;

- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)defaultDigitizerLocation;
- (void)_shortTimerFired:(id)arg1;
- (_Bool)_senderOfPressesHasTouchSurface:(id)arg1 withEvent:(id)arg2;

@end
