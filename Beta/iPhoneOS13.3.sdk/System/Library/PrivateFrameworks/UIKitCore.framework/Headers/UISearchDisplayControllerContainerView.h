/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface UISearchDisplayControllerContainerView : UIView

{
    _Bool _collapsedTopView;
    NSLayoutConstraint *_topViewHeightConstraint;
    NSLayoutConstraint *_topViewAttributeTopConstraint;
    UIView *_topView;
    UIView *_bottomView;
    UIView *_behindView;
}

@property (retain, nonatomic) NSLayoutConstraint *topViewHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *topViewAttributeTopConstraint;
@property (nonatomic, readonly) UIView *topView;
@property (nonatomic, readonly) UIView *bottomView;
@property (nonatomic, readonly) UIView *behindView;

- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setBottomViewUserInteractionEnabled:(_Bool)arg1;
- (void)updateTopViewHeight:(double)arg1;
- (void)updateTopAttributeConstant:(double)arg1;
- (void)collapseTopView;
- (void)updateTopViewHeight:(double)arg1 animateUpdate:(_Bool)arg2;
- (void)configureInteractionForContainment:(_Bool)arg1;
- (void)adjustTopAttributeConstantByDelta:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1 topViewHeight:(double)arg2;

@end
