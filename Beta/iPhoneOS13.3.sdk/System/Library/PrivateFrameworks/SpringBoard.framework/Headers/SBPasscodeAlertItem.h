/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface SBPasscodeAlertItem : SBAlertItem

{
    int _mode;
    int _unlockScreenType;
    int _simplePasscodeType;
    NSString *_errorString;
    _Bool _hasEmergencyCall;
    _Bool _alreadySubmittedPassword;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)_clearAlertController;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (_Bool)shouldShowInLockScreen;
- (void)submitPassword;
- (void)configureTextField:(id)arg1;
- (void)makeEmergencyCall;
- (id)initWithPasscodeMode:(int)arg1 unlockScreenType:(int)arg2 simplePasscodeType:(int)arg3;
- (void)_setErrorString:(id)arg1;
- (void)didEndCall;

@end
