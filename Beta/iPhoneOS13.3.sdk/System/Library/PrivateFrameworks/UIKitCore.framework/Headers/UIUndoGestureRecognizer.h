/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPanGestureRecognizer.h>

@class NSMutableDictionary, NSMutableSet, _UIGestureRecognizerTransformAnalyzer;

__attribute__((visibility("hidden")))
@interface UIUndoGestureRecognizer : UIPanGestureRecognizer

{
    _Bool _tooMuchSingleMovement;
    double _beginPanTimestamp;
    NSMutableSet *_activeTouches;
    NSMutableSet *_shiftTouches;
    _UIGestureRecognizerTransformAnalyzer *_transformAnalyzer;
    NSMutableDictionary *_beginTouchLocations;
    struct CGPoint _beginPanCentroid;
}

@property (nonatomic) double beginPanTimestamp;
@property (nonatomic) struct CGPoint beginPanCentroid;
@property (retain, nonatomic) NSMutableSet *activeTouches;
@property (retain, nonatomic) NSMutableSet *shiftTouches;
@property (retain, nonatomic) _UIGestureRecognizerTransformAnalyzer *transformAnalyzer;
@property (retain, nonatomic) NSMutableDictionary *beginTouchLocations;
@property (nonatomic) _Bool tooMuchSingleMovement;

- (id)initWithCoder:(id)arg1;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (_Bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (_Bool)_analyticsIsGestureHandled;
- (struct CGPoint)centroidOfTouches:(id)arg1;
- (_Bool)isShiftOrMoreKeyForTouch:(id)arg1;

@end
