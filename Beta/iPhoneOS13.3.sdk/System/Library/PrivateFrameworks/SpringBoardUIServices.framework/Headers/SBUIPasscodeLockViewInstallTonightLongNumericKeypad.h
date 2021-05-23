/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <SpringBoardUIServices/SBUIPasscodeLockViewLongNumericKeypad.h>

@class SBUIButton;

@interface SBUIPasscodeLockViewInstallTonightLongNumericKeypad : SBUIPasscodeLockViewLongNumericKeypad

{
    SBUIButton *_actionButton;
}

- (void)setShowsCancelButton:(_Bool)arg1;
- (void)setShowsEmergencyCallButton:(_Bool)arg1;
- (id)initWithLightStyle:(_Bool)arg1;
- (void)_layoutStatusView;
- (void)passcodeEntryFieldTextDidChange:(id)arg1;
- (void)_actionButtonHit;
- (void)_layoutActionButton;
- (void)_setShowsEmergencyCallButton:(_Bool)arg1 fromCancelButton:(_Bool)arg2;
- (void)_setShowsCancelButton:(_Bool)arg1 fromEmergencyCallButton:(_Bool)arg2;
- (void)_configureActionButton;
- (void)_sizeLabel:(id)arg1;

@end
