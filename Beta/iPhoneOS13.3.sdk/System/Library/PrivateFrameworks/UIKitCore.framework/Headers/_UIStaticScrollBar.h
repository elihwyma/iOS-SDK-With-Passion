/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, NSInvocation, UIButton, UIScrollView;

@interface _UIStaticScrollBar : UIView

{
    UIButton *_upButton;
    UIButton *_downButton;
    UIView *_dividerLine;
    NSInvocation *_invocation;
    NSArray *_constraints;
    _Bool _shouldInsetButtonsForIndex;
    UIScrollView *_scrollView;
    long long _edge;
}

@property (nonatomic) _Bool shouldInsetButtonsForIndex;
@property (nonatomic, readonly) long long desiredAccessoryEdge;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (nonatomic) long long edge;
@property (nonatomic, readonly) _Bool overlay;

- (void)update;
- (int)_axis;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)willMoveToWindow:(id)arg1;
- (struct CGRect)centeringBounds;
- (void)buttonTapped:(id)arg1;
- (void)_setupSubviewsIfNeeded;
- (id)_constraintsForEdge:(long long)arg1;

@end
