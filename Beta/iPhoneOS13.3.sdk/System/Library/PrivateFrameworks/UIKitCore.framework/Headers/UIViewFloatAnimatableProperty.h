/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIAnimatablePropertyBase.h>

@class UIAnimatableProperty, _UIViewAnimatablePropertyTransformer;

@interface UIViewFloatAnimatableProperty : UIAnimatablePropertyBase

{
    _Bool _performingInterpolationBetweenTwoStates;
    UIAnimatableProperty *_animatableProperty;
}

@property (retain, nonatomic) UIAnimatableProperty *animatableProperty;
@property (retain, nonatomic) _UIViewAnimatablePropertyTransformer *transformer;
@property (nonatomic) _Bool performingInterpolationBetweenTwoStates;
@property (nonatomic) double value;
@property (nonatomic, readonly) double presentationValue;
@property (nonatomic) double velocity;
@property (nonatomic, readonly, getter=isInvalidated) _Bool invalidated;

- (id)init;
- (void)dealloc;
- (void)invalidate;

@end
