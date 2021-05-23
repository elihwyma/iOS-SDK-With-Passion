/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSTimer;

@protocol UIKeyboardTypingStyleEstimatorDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardTypingStyleEstimator : NSObject

{
    NSTimer *_tapTypingFlipTimer;
    double _lastContinuousPathEvent;
    unsigned long long _currentTypingStyle;
    id <UIKeyboardTypingStyleEstimatorDelegate> _delegate;
}

@property (weak, nonatomic) id <UIKeyboardTypingStyleEstimatorDelegate> delegate;

- (void)tapTypedKey;
- (void)beganContinuousPath;
- (void)endedContinuousPath;
- (unsigned long long)currentTypingStyleEstimation;
- (void)_setTypingStyleEstimation:(unsigned long long)arg1;

@end
