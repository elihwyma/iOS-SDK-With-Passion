/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

#import <UIKit/UIViewController.h>

@class BFFPasscodeCreationManager, NSObject, NSString;

@protocol BFFPasscodeViewControllerDelegate;

@interface BFFPasscodeViewController : UIViewController

{
    _Bool _footerButtonIsSkip;
    _Bool _showingSpinner;
    NSObject<BFFPasscodeViewControllerDelegate> *_passcodeCreationDelegate;
    BFFPasscodeCreationManager *_passcodeManager;
}

@property (retain, nonatomic) BFFPasscodeCreationManager *passcodeManager;
@property (weak, nonatomic) NSObject<BFFPasscodeViewControllerDelegate> *passcodeCreationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)allowSkip;
+ (id)localizedFirstEntryInstructionsForTouchID;

- (void)dealloc;
- (void)clear;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)titleForState:(unsigned long long)arg1;
- (id)passcodeInputView;
- (void)passcodeInput:(id)arg1 willChangeContents:(id)arg2;
- (void)passcodeInput:(id)arg1 enteredPasscode:(id)arg2;
- (void)passcodeInput:(id)arg1 tappedFooterButton:(id)arg2;
- (void)configurePasscodeTypeUsingAnimations:(_Bool)arg1;
- (id)_passcodeInputViewForState:(unsigned long long)arg1;
- (void)_setupFirstEntry;
- (void)_updateNextButtonForPasscode:(id)arg1;
- (id)passcodeOptionAlertController;
- (_Bool)_allowSkip;
- (id)instructionsForState:(unsigned long long)arg1;
- (void)_animatedPasscodeViewTransitionToState:(unsigned long long)arg1 animation:(unsigned long long)arg2;
- (void)_showWeakWarningAlert;
- (void)_finishedWithPasscode:(id)arg1;
- (void)_updateNextButton;
- (void)_showSkipPasscodeAlert;
- (void)_showPasscodeOptionsSheet;
- (id)_firstEntryInstructions;
- (void)nextButtonPressed;
- (void)_commitPasscodeEntryTypeChange;
- (void)passcodeManager:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)passcodeManagerWillSetPasscode:(id)arg1;
- (void)passcodeManager:(id)arg1 didSetPasscodeWithSuccess:(_Bool)arg2 error:(id)arg3;

@end
