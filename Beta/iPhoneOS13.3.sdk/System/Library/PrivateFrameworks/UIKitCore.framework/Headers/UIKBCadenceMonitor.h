/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIDelayedAction;

__attribute__((visibility("hidden")))
@interface UIKBCadenceMonitor : NSObject

{
    _Bool _isUserTyping;
    float _cadence;
    float _confidence;
    float _typingAvg;
    int _touchCount;
    double _gapAvg;
    double _prevTouchDown;
    UIDelayedAction *_touchLogTimer;
}

@property (nonatomic) _Bool isUserTyping;
@property (nonatomic) float cadence;
@property (nonatomic) float confidence;
@property (nonatomic) float typingAvg;
@property (nonatomic) double gapAvg;
@property (nonatomic) double prevTouchDown;
@property (nonatomic) int touchCount;
@property (retain, nonatomic) UIDelayedAction *touchLogTimer;

- (id)init;
- (void)reset;
- (void)addTypingTouchTime:(double)arg1;
- (void)updateConfidenceWithGap:(double)arg1;
- (void)logUserTyping:(id)arg1;
- (void)typingCadence:(double)arg1;
- (id)recognizer:(id)arg1 confidenceWhenPendingTouchInfo:(id)arg2;
- (id)recognizer:(id)arg1 confidenceWhenSettingTouchInfo:(id)arg2;

@end
