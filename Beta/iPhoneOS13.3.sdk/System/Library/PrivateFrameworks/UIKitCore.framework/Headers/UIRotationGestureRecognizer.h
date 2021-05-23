/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGestureRecognizer.h>

@class UITouch;

@interface UIRotationGestureRecognizer : UIGestureRecognizer

{
    double _initialTouchDistance;
    double _initialTouchAngle;
    double _currentTouchAngle;
    long long _currentRotationCount;
    double _lastTouchTime;
    double _velocity;
    double _previousVelocity;
    struct CGPoint _anchorSceneReferencePoint;
    id _transformAnalyzer;
    UITouch *_touches[2];
    float _preRecognitionWeight;
    float _postRecognitionWeight;
}

@property (nonatomic) double rotation;
@property (nonatomic, readonly) double velocity;

+ (_Bool)supportsSecureCoding;
+ (_Bool)_shouldDefaultToTouches;

- (id)initWithCoder:(id)arg1;
- (struct CGPoint)anchorPoint;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_resetGestureRecognizer;
- (void)_updateTransformAnalyzerWeights;
- (void)_setPreRecognitionWeight:(double)arg1;
- (double)_preRecognitionWeight;
- (void)_setPostRecognitionWeight:(double)arg1;
- (double)_postRecognitionWeight;

@end
