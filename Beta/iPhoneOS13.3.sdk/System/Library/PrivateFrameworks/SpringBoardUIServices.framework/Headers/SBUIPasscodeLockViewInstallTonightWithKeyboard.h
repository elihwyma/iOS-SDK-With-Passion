/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <SpringBoardUIServices/SBUIPasscodeLockViewWithKeyboard.h>

@class SBUIButton;

@interface SBUIPasscodeLockViewInstallTonightWithKeyboard : SBUIPasscodeLockViewWithKeyboard

{
    SBUIButton *_actionButton;
}

- (void)setShowsCancelButton:(_Bool)arg1;
- (void)setShowsEmergencyCallButton:(_Bool)arg1;
- (id)initWithLightStyle:(_Bool)arg1;
- (void)_layoutStatusView;
- (void)_actionButtonHit;
- (void)_layoutActionButton;
- (void)_configureActionButton;

@end
