/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGestureRecognizer.h>

@class NSArray, NSString, UITapRecognizer;

@interface UITapGestureRecognizer : UIGestureRecognizer

{
    struct CGPoint _locationInView;
    UITapRecognizer *_imp;
    unsigned int _delaysRecognitionForGreaterTapCounts;
    long long _buttonType;
}

@property (nonatomic, setter=_setButtonType:) long long _buttonType;
@property (nonatomic, readonly) struct CGPoint centroid;
@property (nonatomic, readonly) struct CGPoint location;
@property (nonatomic, readonly) NSArray *touches;
@property (nonatomic) double maximumTapDuration;
@property (nonatomic) unsigned long long numberOfTapsRequired;
@property (nonatomic) unsigned long long numberOfTouchesRequired;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (_Bool)_supportsTouchContinuation;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint)locationInView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setAllowableMovement:(double)arg1;
- (void)setAllowedPressTypes:(id)arg1;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (void)_resetGestureRecognizer;
- (void)_setAllowableTouchTimeSeparation:(double)arg1;
- (void)_setAllowableSeparation:(double)arg1;
- (double)allowableMovement;
- (_Bool)_shouldReceivePress:(id)arg1;
- (struct CGPoint)_digitizerLocation;
- (_Bool)shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (void)_appendSubclassDescription:(id)arg1;
- (unsigned long long)numberOfTouches;
- (struct CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;
- (double)_allowableSeparation;
- (double)_touchSloppinessFactor;
- (double)maximumIntervalBetweenSuccessiveTaps;
- (long long)_finalStateForRecognition;
- (_Bool)_shouldFailInResponseToPresses:(id)arg1 withEvent:(id)arg2;
- (_Bool)tapIsPossibleForTapRecognizer:(id)arg1;
- (void)tapRecognizerRecognizedTap:(id)arg1;
- (void)tapRecognizerFailedToRecognizeTap:(id)arg1;
- (double)_allowableTouchTimeSeparation;
- (double)maximumSingleTapDuration;
- (void)setMaximumSingleTapDuration:(double)arg1;
- (void)setMaximumIntervalBetweenSuccessiveTaps:(double)arg1;
- (_Bool)_delaysRecognitionForGreaterTapCounts;
- (void)_setDelaysRecognitionForGreaterTapCounts:(_Bool)arg1;

@end
