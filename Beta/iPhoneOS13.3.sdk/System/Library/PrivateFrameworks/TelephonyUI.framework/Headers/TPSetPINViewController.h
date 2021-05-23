/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UIViewController.h>

@class NSString, TPPasscodeView, TPSimpleNumberPad, UILabel, UIView;

@protocol TPSetPINViewControllerDelegate;

@interface TPSetPINViewController : UIViewController

{
    _Bool _confirmPIN;
    int _initialState;
    int _state;
    unsigned int _minPINLength;
    unsigned int _maxPINLength;
    id <TPSetPINViewControllerDelegate> _delegate;
    NSString *_promptTextForOldPIN;
    NSString *_promptTextForNewPIN;
    NSString *_promptTextForConfirmingNewPIN;
    NSString *_promptTextForSavingPIN;
    UIView *_customBackgroundView;
    UILabel *_statusLabel;
    TPPasscodeView *_passcodeView;
    TPSimpleNumberPad *_numberPad;
    NSString *_oldPIN;
    NSString *_unconfirmedPIN;
}

@property int initialState;
@property (nonatomic) int state;
@property unsigned int minPINLength;
@property unsigned int maxPINLength;
@property _Bool confirmPIN;
@property (retain) UILabel *statusLabel;
@property (retain) TPPasscodeView *passcodeView;
@property (retain) TPSimpleNumberPad *numberPad;
@property (retain) NSString *oldPIN;
@property (retain) NSString *unconfirmedPIN;
@property id <TPSetPINViewControllerDelegate> delegate;
@property (retain, nonatomic) NSString *promptTextForOldPIN;
@property (retain, nonatomic) NSString *promptTextForNewPIN;
@property (retain, nonatomic) NSString *promptTextForConfirmingNewPIN;
@property (retain, nonatomic) NSString *promptTextForSavingPIN;
@property (retain) UIView *customBackgroundView;

- (id)init;
- (void)dealloc;
- (void)loadView;
- (_Bool)wantsFullScreenLayout;
- (void)_updateStatusLabel;
- (void)_doneButtonTapped;
- (void)_cancelButtonTapped;
- (id)_initForMinLength:(unsigned int)arg1 maxLength:(unsigned int)arg2 confirmPIN:(_Bool)arg3;
- (double)numberPadTopConstraintConstant;
- (void)_updateUIForStateChange;
- (void)resetWithErrorPrompt:(id)arg1 title:(id)arg2;
- (void)_updateDeleteAllowed;
- (void)_updateNavBarButtons;
- (void)simpleNumberPad:(id)arg1 buttonPressedWithCharacter:(id)arg2;
- (void)simpleNumberPadDeletePressed:(id)arg1;
- (id)initForNewPINWithMinLength:(unsigned int)arg1 maxLength:(unsigned int)arg2 confirmPIN:(_Bool)arg3;
- (id)initForChangePINWithMinLength:(unsigned int)arg1 maxLength:(unsigned int)arg2 confirmPIN:(_Bool)arg3;
- (void)resetWithErrorPrompt:(id)arg1;

@end
