/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <OnBoardingKit/OBWelcomeFullCenterContentController.h>

@class NSLayoutConstraint, UIView;

@interface HUCenterFillOBWelcomeController : OBWelcomeFullCenterContentController

{
    UIView *_centerFillContentView;
    unsigned long long _contentMode;
    UIView *_contentViewContainer;
    NSLayoutConstraint *_contentViewContainerHeightConstraint;
    NSLayoutConstraint *_contentViewContainerWidthConstraint;
    NSLayoutConstraint *_contentViewTopConstraint;
    NSLayoutConstraint *_contentViewBottomConstraint;
    NSLayoutConstraint *_contentViewLeadingConstraint;
    NSLayoutConstraint *_contentViewTrailingConstraint;
    struct UIEdgeInsets _contentInsets;
}

@property (nonatomic, readonly) UIView *contentViewContainer;
@property (nonatomic, readonly) NSLayoutConstraint *contentViewContainerHeightConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *contentViewContainerWidthConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *contentViewTopConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *contentViewBottomConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *contentViewLeadingConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *contentViewTrailingConstraint;
@property (nonatomic, readonly) UIView *centerFillContentView;
@property (nonatomic) unsigned long long contentMode;
@property (nonatomic) struct UIEdgeInsets contentInsets;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (double)_contentAspectRatio;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentView:(id)arg4;
- (void)_viewDidUpdateContent;
- (void)_updateContentViewContainerConstraints;
- (void)_updateContentViewInsetConstraints;

@end
