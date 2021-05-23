/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGestureRecognizer.h>

@class NSMutableDictionary, NSMutableSet;

@protocol UIKeyboardPinchGestureRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardPinchGestureRecognizer : UIGestureRecognizer

{
    id <UIKeyboardPinchGestureRecognizerDelegate> _pinchDelegate;
    _Bool _pinchDetected;
    double _initialPinchSeparation;
    double _pinchSeparationValues[4];
    NSMutableSet *_activeTouches;
    NSMutableDictionary *_initialTouchPoints;
    double _beginPinchTimestamp;
}

@property (nonatomic, readonly) _Bool pinchDetected;
@property (nonatomic, readonly) double initialPinchSeparation;
@property (nonatomic) id <UIKeyboardPinchGestureRecognizerDelegate> pinchDelegate;

- (void)dealloc;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (void)resetPinchCalculations;
- (double)finalProgressForInitialProgress:(double)arg1;
- (void)interpretTouchesForSplit;

@end
