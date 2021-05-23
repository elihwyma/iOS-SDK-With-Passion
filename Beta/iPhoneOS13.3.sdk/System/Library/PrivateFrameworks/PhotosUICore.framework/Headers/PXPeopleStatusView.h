/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, UIActivityIndicatorView, UIButton, UILabel, UIStackView;

@interface PXPeopleStatusView : UIView

{
    UILabel *_titleLabel;
    UILabel *_countLabel;
    UILabel *_descriptionLabel;
    UIButton *_continueButton;
    unsigned long long _viewState;
    UIStackView *_stackView;
    NSArray *_constraints;
    NSLayoutConstraint *_stackViewY;
    NSLayoutConstraint *_continueButtonBottom;
    UIActivityIndicatorView *_activityIndicator;
    struct UIEdgeInsets _contentInsets;
}

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) NSLayoutConstraint *stackViewY;
@property (retain, nonatomic) NSLayoutConstraint *continueButtonBottom;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) UILabel *countLabel;
@property (nonatomic, readonly) UILabel *descriptionLabel;
@property (retain, nonatomic) UIButton *continueButton;
@property (nonatomic) unsigned long long viewState;
@property (nonatomic) struct UIEdgeInsets contentInsets;

- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)_createViews;
- (id)_goButtonBackgroundImageWithColor:(id)arg1;

@end
