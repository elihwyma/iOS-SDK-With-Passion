/*
 Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

#import <UIView.h>

@class NSLayoutConstraint, UIButton, UILabel, WGWidgetPinningTeachingAnimationView;

@protocol WGWidgetPinningTeachingViewDelegate;

@interface WGWidgetPinningTeachingView : UIView

{
    UIView *_contentView;
    id <WGWidgetPinningTeachingViewDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UIButton *_yesButton;
    UIButton *_noButton;
    WGWidgetPinningTeachingAnimationView *_iconImageView;
    NSLayoutConstraint *_titleLabelTopConstraint;
    NSLayoutConstraint *_titleLabelToBodyLabelConstraint;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) UIButton *yesButton;
@property (retain, nonatomic) UIButton *noButton;
@property (retain, nonatomic) WGWidgetPinningTeachingAnimationView *iconImageView;
@property (retain, nonatomic) NSLayoutConstraint *titleLabelTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleLabelToBodyLabelConstraint;
@property (retain, nonatomic) UIView *contentView;
@property (weak, nonatomic) id <WGWidgetPinningTeachingViewDelegate> delegate;

- (id)init;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)startAnimating;
- (void)stopAnimating;
- (void)_createConstraints;
- (void)_updateAppearance;
- (void)_updateFonts;
- (void)_contentSizeCategoryDidChange;
- (void)_createContainerViews;
- (void)_createContentViews;
- (void)_setupButtonsTargets;
- (void)_updateFontDependantConstraints;
- (void)_yesButtonTapped;
- (void)_noButtonTapped;

@end
