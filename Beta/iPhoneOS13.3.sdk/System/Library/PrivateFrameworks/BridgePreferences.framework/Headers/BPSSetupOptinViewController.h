/*
 Image: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
 */

#import <BridgePreferences/BPSSetupPageViewController.h>

@class BPSWatchView, NSString, UIButton, UILabel, UIScrollView;

@interface BPSSetupOptinViewController : BPSSetupPageViewController

{
    unsigned long long _style;
    BPSWatchView *_watchView;
    UIScrollView *_scrollView;
    UILabel *_detailTextTitleLabel;
    UILabel *_detailTextLabel;
    UIButton *_suggestedChoiceButton;
    UIButton *_alternateChoiceButton;
    UIButton *_learnMoreButton;
    UIButton *_okayButton;
}

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailTextTitleLabel;
@property (retain, nonatomic) UILabel *detailTextLabel;
@property (retain, nonatomic) BPSWatchView *watchView;
@property (retain, nonatomic) UIButton *suggestedChoiceButton;
@property (retain, nonatomic) UIButton *alternateChoiceButton;
@property (retain, nonatomic) UIButton *learnMoreButton;
@property (retain, nonatomic) UIButton *okayButton;
@property (nonatomic) unsigned long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)detailString;
- (id)alternateButtonTitle;
- (_Bool)wantsAlternateChoicePillButton;
- (_Bool)wantsAlternateChoiceSystemButton;
- (_Bool)wantsSuggestedChoicePillButton;
- (_Bool)wantsLearnMoreButton;
- (_Bool)wantsOkayPillButton;
- (id)detailTitleString;
- (id)detailAtrributedString;
- (_Bool)wantsToShowWatchHW;
- (id)imageResource;
- (id)imageResourceBundleIdentifier;
- (_Bool)wantsLightenBlendedScreen;
- (id)suggestedButtonTitle;
- (id)okayButtonTitle;
- (double)sidePadding;
- (void)suggestedButtonPressed:(id)arg1;
- (void)okayButtonPressed:(id)arg1;
- (void)alternateButtonPressed:(id)arg1;
- (id)learnMoreButtonTitle;
- (void)learnMoreButtonPressed:(id)arg1;
- (double)noHWImageOffset;
- (double)noHWDetailOffset;
- (double)alternateButtonDetailTextPaddingWithImage;
- (double)suggestedChoicePillDetailTextLabelVerticalOffset;
- (double)imageDetailPadding;
- (double)okayButtonTopPadding;
- (id)optinLocalizationBundle;
- (id)optinLocalizationStringsFile;
- (void)applyConfirmedOptin:(_Bool)arg1;
- (void)_madeOptinChoice:(_Bool)arg1 withAlertController:(id)arg2;
- (void)showOptinConfirmationAlert:(id)arg1 optinChoice:(_Bool)arg2;

@end
