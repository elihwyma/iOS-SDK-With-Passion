/*
 Image: /System/Library/PrivateFrameworks/CellularBridgeUI.framework/CellularBridgeUI
 */

#import <BridgePreferences/BPSSetupOptinViewController.h>

@class NSArray, NSString, NSTimer, UIActivityIndicatorView, UIBarButtonItem, UIButton, UILabel, UIScrollView;

@protocol NPHSIMChoiceViewControllerDelegate;

@interface NPHSIMChoiceViewController : BPSSetupOptinViewController

{
    _Bool _isTransferFlow;
    _Bool _haveReceivedProxyPlanItems;
    long long _configuration;
    UIScrollView *_scrollView;
    UIActivityIndicatorView *_spinner;
    UILabel *_spinnerExplanation;
    UIBarButtonItem *_nextNavBarButtonItem;
    UIButton *_upperButton;
    NSString *_upperButtonTitle;
    UIButton *_lowerButton;
    NSString *_lowerButtonTitle;
    UIButton *_lowerSkipButton;
    UILabel *_messageTextLabel;
    UIButton *_cancelButton;
    NSArray *_userVisibleErrors;
    id <NPHSIMChoiceViewControllerDelegate> _SIMChoiceDelegate;
    unsigned long long _backgroundTaskID;
    NSTimer *_taskCompletionTimeout;
}

@property (nonatomic) _Bool isTransferFlow;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) _Bool haveReceivedProxyPlanItems;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) UILabel *spinnerExplanation;
@property (retain, nonatomic) UIBarButtonItem *nextNavBarButtonItem;
@property (retain, nonatomic) UIButton *upperButton;
@property (retain, nonatomic) NSString *upperButtonTitle;
@property (retain, nonatomic) UIButton *lowerButton;
@property (retain, nonatomic) NSString *lowerButtonTitle;
@property (retain, nonatomic) UIButton *lowerSkipButton;
@property (retain, nonatomic) UILabel *messageTextLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) NSArray *userVisibleErrors;
@property (weak, nonatomic) id <NPHSIMChoiceViewControllerDelegate> SIMChoiceDelegate;
@property (nonatomic) unsigned long long backgroundTaskID;
@property (retain, nonatomic) NSTimer *taskCompletionTimeout;
@property (nonatomic) long long configuration;

- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (id)titleString;
- (void)transfer;
- (id)imageResource;
- (_Bool)wantsLightenBlendedScreen;
- (double)sidePadding;
- (double)verticalTitleInset;
- (id)initWithSIMChoiceViewControllerDelegate:(id)arg1 andIsTransferFlow:(_Bool)arg2;
- (_Bool)isGeminiSetup;
- (void)userTappedSetUp:(id)arg1;
- (void)ctCellularPlanInfoDidChange:(id)arg1;
- (void)checkForSoftwareUpdate;
- (void)updateUIFromCellularPlanItems;
- (void)userTappedNext:(id)arg1;
- (void)userTappedSkip:(id)arg1;
- (void)userTappedCancel:(id)arg1;
- (void)navigateToNextView;
- (void)setUpNow;
- (void)updateUIToShowSetUpNowSIMChoices;
- (void)updateUIToShowSpinner;
- (void)updateUIToShowUserVisibleError;
- (void)updateUIToShowPlanTransferOrSetUpNewOptions;
- (void)updateUIToShowPreinstall;
- (void)updateUIToShowUserConsent:(long long)arg1 relevantPlan:(id)arg2;
- (void)updateUIToShowContinue;
- (void)updateUIToShowPlanSetUpTrial;
- (void)updateUIToShowSetUpNow;
- (void)userTappedContinue:(id)arg1;
- (void)userTappedConsent:(id)arg1;
- (void)userTappedTransfer:(id)arg1;
- (void)userTappedSetUpNew:(id)arg1;
- (void)userTappedSetUpCarrier:(id)arg1;
- (id)trialOfferMessage;
- (_Bool)legacyButtonStyles;

@end
