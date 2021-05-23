/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UIViewController.h>

@class ICNote, NSLayoutConstraint, NSString, UIButton, UIImageView, UILabel;

@interface ICPasswordEntryViewController : UIViewController

{
    _Bool _isAnimatingOut;
    ICNote *_note;
    unsigned long long _intent;
    CDUnknownBlockType _passwordEntryCompletionHandler;
    CDUnknownBlockType _passwordEntryFailedAttemptHandler;
    UIImageView *_lockImage;
    UILabel *_titleLabel;
    UIButton *_unlockButton;
    UIButton *_largeUnlockButton;
    NSLayoutConstraint *_titleLabelLeadingConstraint;
    NSLayoutConstraint *_titleLabelTrailingConstraint;
    NSLayoutConstraint *_titleLabelBaselineConstraint;
    NSLayoutConstraint *_titleLabelBottomConstraintForAXLargerTextSizes;
    NSString *_contentSizeCategory;
}

@property (weak, nonatomic) UIImageView *lockImage;
@property (weak, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) UIButton *unlockButton;
@property (weak, nonatomic) UIButton *largeUnlockButton;
@property (weak, nonatomic) NSLayoutConstraint *titleLabelLeadingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *titleLabelTrailingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *titleLabelBaselineConstraint;
@property (weak, nonatomic) NSLayoutConstraint *titleLabelBottomConstraintForAXLargerTextSizes;
@property (copy, nonatomic) NSString *contentSizeCategory;
@property (nonatomic) unsigned long long intent;
@property (retain, nonatomic) ICNote *note;
@property (nonatomic) _Bool isAnimatingOut;
@property (copy, nonatomic) CDUnknownBlockType passwordEntryCompletionHandler;
@property (copy, nonatomic) CDUnknownBlockType passwordEntryFailedAttemptHandler;

- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)updateFonts;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)updateforAccessibilityDarkerSystemColors;
- (void)updateTitleLabelPreferredMaxLayoutWidth;
- (void)updateConstraintsForContentSizeCategoryIfNecessary;
- (void)unlockPasswordButtonPressed:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 note:(id)arg3 intent:(unsigned long long)arg4;
- (void)beginAuthentication;

@end
