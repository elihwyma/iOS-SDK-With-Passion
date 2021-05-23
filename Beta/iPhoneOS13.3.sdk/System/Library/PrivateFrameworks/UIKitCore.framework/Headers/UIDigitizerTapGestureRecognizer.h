/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGestureRecognizer.h>

@class NSString, _UIDigitizerGestureRecognizerImp;

@interface UIDigitizerTapGestureRecognizer : UIGestureRecognizer

{
    _UIDigitizerGestureRecognizerImp *_imp;
}

@property (nonatomic) double maximumPressDuration;
@property (nonatomic, readonly) struct CGPoint digitizerLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setAllowedTouchTypes:(id)arg1;
- (void)setAllowedPressTypes:(id)arg1;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBeganSuccessfully:(id)arg1;
- (void)pressesEndedSuccessfully:(id)arg1;
- (void)pressesNotHeldLongEnough:(id)arg1;
- (void)pressesHeldForMinimum:(id)arg1;

@end
