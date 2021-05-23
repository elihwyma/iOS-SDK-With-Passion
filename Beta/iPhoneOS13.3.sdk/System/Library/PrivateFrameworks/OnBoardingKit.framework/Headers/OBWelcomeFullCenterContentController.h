/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@class NSArray, NSLayoutConstraint, UIView;

@interface OBWelcomeFullCenterContentController

{
    UIView *_centerContentView;
    NSLayoutConstraint *_contentViewOptionalHeightAnchor;
    double _contentViewMaxHeight;
    NSArray *_floatingConstraintGroup;
    NSArray *_pinnedConstraintGroup;
}

@property (retain, nonatomic) UIView *centerContentView;
@property (retain, nonatomic) NSLayoutConstraint *contentViewOptionalHeightAnchor;
@property (nonatomic) double contentViewMaxHeight;
@property (retain, nonatomic) NSArray *floatingConstraintGroup;
@property (retain, nonatomic) NSArray *pinnedConstraintGroup;

- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)insertCenterContentView;
- (double)_availablePreScrollContentHeight;
- (void)recalculateLayoutForTraitCollectionChange;
- (void)setCenteredContentView:(id)arg1;

@end
