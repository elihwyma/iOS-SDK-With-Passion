/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIControl.h>

@class GKBubbleView, MISSING_TYPE, NSLayoutConstraint, NSString, UIView;

@interface GKBubbleControl : UIControl

{
    _Bool _animatingIn;
    _Bool _animateOnTouch;
    GKBubbleView *_bubbleView;
    UIView *_contentView;
    NSString *_debuggingTag;
    double _maximumDimension;
    NSLayoutConstraint *_maxHeightConstraint;
    NSLayoutConstraint *_maxWidthConstraint;
    NSLayoutConstraint *_contentViewHeightConstraint;
    NSLayoutConstraint *_contentViewWidthConstraint;
}

@property (nonatomic, readonly, getter=isSharedBubble) _Bool sharedBubble;
@property (nonatomic) struct CGRect screenFrame;
@property (nonatomic, readonly) struct CGPoint screenPosition;
@property (nonatomic, readonly) struct CGSize screenSize;
@property (nonatomic) MISSING_TYPE *worldPosition;
@property (nonatomic, readonly) MISSING_TYPE *worldSize;
@property (retain, nonatomic) NSLayoutConstraint *maxHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *maxWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentViewHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentViewWidthConstraint;
@property (nonatomic) long long bubbleType;
@property (retain, nonatomic) GKBubbleView *bubbleView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) NSString *debuggingTag;
@property (nonatomic) double maximumDimension;
@property (nonatomic, readonly) struct CGSize projectedContentSize;
@property (nonatomic) double moveAnimationRangeMultiplier;
@property (nonatomic) _Bool animateOnTouch;

+ (void)initialize;
+ (double)maximumDimensionBasedOnDeviceAdjustForTallness:(_Bool)arg1;
+ (double)maximumDimensionWhenContainedInViewWithSize:(struct CGSize)arg1;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)contentsWrapperView;
- (void)didTouchDown;
- (void)didTouchUp;
- (id)pathForHitTesting;
- (_Bool)bouncing;
- (void)bounceAfterDelay:(double)arg1 fromZ:(double)arg2 toZ:(double)arg3;
- (MISSING_TYPE *)worldPositionForScreenFrame:(struct CGRect)arg1 assumingSuperviewSize:(struct CGSize)arg2;
- (MISSING_TYPE *)worldPositionForScreenFrame:(struct CGRect)arg1;
- (MISSING_TYPE *)worldPositionForScreenPosition:(struct CGPoint)arg1 andScreenSize:(struct CGSize)arg2;
- (void)setScreenPosition:(struct CGPoint)arg1 andScreenSize:(struct CGSize)arg2;
- (MISSING_TYPE *)worldPositionForScreenPosition:(struct CGPoint)arg1 andScreenSize:(struct CGSize)arg2 andSuperviewSize:(struct CGSize)arg3;

@end
