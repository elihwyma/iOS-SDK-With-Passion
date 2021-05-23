/*
 Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

#import <UIKit/UIViewController.h>

@class UIButton, UILabel, UIScrollView, UIView;

@interface FAExplainAppleIDViewController : UIViewController

{
    UIScrollView *_scrollView;
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIButton *_goToSettingsButton;
    _Bool _shouldShowInviteeInstructions;
}

@property (nonatomic) _Bool shouldShowInviteeInstructions;

- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)_updateFonts;
- (double)_heightForText:(id)arg1 constrainedToWidth:(double)arg2;

@end
