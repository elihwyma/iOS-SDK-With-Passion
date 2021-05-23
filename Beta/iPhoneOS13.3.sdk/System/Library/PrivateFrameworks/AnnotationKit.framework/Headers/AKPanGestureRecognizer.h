/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIPanGestureRecognizer.h>

@class NSMutableArray, NSString;

@interface AKPanGestureRecognizer : UIPanGestureRecognizer

{
    _Bool _penGestureDetected;
    double _currentWeight;
    double _currentMaxWeight;
    NSMutableArray *_currentAccumulatedTouches;
    struct CGPoint _locationOfFirstTouch;
}

@property (nonatomic) struct CGPoint locationOfFirstTouch;
@property (nonatomic) _Bool penGestureDetected;
@property (retain, nonatomic) NSMutableArray *currentAccumulatedTouches;
@property (nonatomic) double currentWeight;
@property (nonatomic) double currentMaxWeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)locationOfFirstTouchInView:(id)arg1;
- (void)resetAccumulatedTouches;
- (void)_checkTouchForStylus:(id)arg1;
- (id)accumulatedTouches;

@end
