/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <UIKit/UIViewController.h>

@class NSString, STIntroductionModel;

__attribute__((visibility("hidden")))
@interface STIntroPasscodeViewController : UIViewController

{
    _Bool _askForRecoveryAppleID;
    _Bool _numeric;
    STIntroductionModel *_model;
    NSString *_altDSID;
    CDUnknownBlockType _continueHandler;
    long long _passcodeState;
    NSString *_initialPasscode;
    unsigned long long _numericLength;
}

@property (readonly) STIntroductionModel *model;
@property (readonly) _Bool askForRecoveryAppleID;
@property (copy, readonly) NSString *altDSID;
@property (copy, readonly) CDUnknownBlockType continueHandler;
@property long long passcodeState;
@property (retain) NSString *initialPasscode;
@property (getter=isNumeric) _Bool numeric;
@property unsigned long long numericLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)nextButtonTapped;
- (id)initWithIntroductionModel:(id)arg1 askForRecoveryAppleID:(_Bool)arg2 altDSID:(id)arg3 continueHandler:(CDUnknownBlockType)arg4;
- (id)_passcodeView;
- (id)passcodeInputView;
- (void)passcodeTypeChanged:(_Bool)arg1;
- (void)userEnteredPasscode:(id)arg1;
- (void)_transitionToFirstPasscodePaneWithState:(long long)arg1;
- (void)passcodeInput:(id)arg1 enteredPasscode:(id)arg2;
- (void)updatePasscodeType;

@end
