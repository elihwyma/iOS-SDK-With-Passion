/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/SiriUIClearBackgroundCell.h>

@class NSString, SiriUIAceObjectViewController, UIView;

@interface SiriUIAceObjectControllerCell : SiriUIClearBackgroundCell

{
    UIView *_animationView;
    double _topPadding;
    SiriUIAceObjectViewController *_aceViewController;
    long long _insertionAnimationType;
    long long _replacementAnimationType;
    UIView *_replacedView;
}

@property (retain, nonatomic) SiriUIAceObjectViewController *aceViewController;
@property (nonatomic) long long insertionAnimationType;
@property (nonatomic) long long replacementAnimationType;
@property (retain, nonatomic) UIView *replacedView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)reuseIdentifier;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)beginAnimation;
- (void)setTopPadding:(double)arg1;
- (void)_parentViewInCell;
- (void)_parentPreviousViewInCell;
- (void)_animateInsertionFlyIn;
- (void)_animateInsertionFadeIn;
- (void)_animateReplacementCrossFade;
- (id)_flyInAnimationForAceViewController:(id)arg1;
- (void)configureSubviewsForAnimationType;

@end
