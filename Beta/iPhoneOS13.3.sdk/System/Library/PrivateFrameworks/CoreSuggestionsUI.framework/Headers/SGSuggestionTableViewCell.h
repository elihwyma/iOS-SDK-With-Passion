/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
 */

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, SGSuggestionAction, SGSuggestionTableViewController, UIButton, UIImageView, UILabel;

@protocol NSObject, SGSuggestion;

@interface SGSuggestionTableViewCell : UITableViewCell

{
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_dismissButton;
    UIButton *_primaryButton;
    SGSuggestionAction *_primaryAction;
    SGSuggestionAction *_dismissAction;
    NSLayoutConstraint *_topMarginConstraint;
    NSLayoutConstraint *_interLabelBaselineDeltaConstraint;
    NSLayoutConstraint *_interTitleAndButtonBaselineConstraint;
    NSLayoutConstraint *_interSubtitleAndButtonBaselineConstraint;
    NSLayoutConstraint *_bottomMarginConstraint;
    id <NSObject> _observerToken;
    long long _currentStyle;
    id <SGSuggestion> _suggestion;
    SGSuggestionTableViewController *_controller;
}

@property (retain, nonatomic) id <SGSuggestion> suggestion;
@property (weak, nonatomic) SGSuggestionTableViewController *controller;

+ (id)titleFont;
+ (double)topMarginConstant;
+ (double)interLabelBaselineDeltaConstant;
+ (double)bottomMarginConstant;
+ (id)buttonTitleFont;
+ (id)descriptionFont;
+ (double)interLabelAndButtonBaselineDeltaConstant;
+ (id)defaultReuseIdentifier;

- (id)init;
- (void)dealloc;
- (void)updateConstraints;
- (id)_backgroundColor;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)_titleColor;
- (void)_dismissButtonTapped:(id)arg1;
- (void)_activateConstraint:(id)arg1;
- (void)_setLabelAndButtonFonts;
- (id)_setButton:(id)arg1 action:(id)arg2;
- (void)_primaryButtonTapped:(id)arg1;
- (id)_subtitleColor;
- (void)_updateCurrentAppearance;

@end
