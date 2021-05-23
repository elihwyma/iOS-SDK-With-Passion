/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <SpringBoardUIServices/SBUIPasscodeLockViewBase.h>

@class NSString, SBUIPasscodeLockNumberPad, UILabel;

@interface SBUIPasscodeLockViewWithKeypad : SBUIPasscodeLockViewBase

{
    UILabel *_statusTitleView;
    UILabel *_statusSubtitleView;
    SBUIPasscodeLockNumberPad *_numberPad;
    NSString *_lastCharacterBeforeBackspace;
    _Bool _undoInputOnTouchCancellation;
    _Bool _useLightStyle;
    _Bool _hasPerformedLayoutOnce;
}

@property (retain, nonatomic) NSString *lastCharacterBeforeBackspace;
@property (retain, nonatomic) UILabel *statusTitleView;
@property (retain, nonatomic) UILabel *statusSubtitleView;
@property (nonatomic, getter=_undoInputOnTouchCancellation, setter=_setUndoInputOnTouchCancellation:) _Bool undoInputOnTouchCancellation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)reset;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)setShowsCancelButton:(_Bool)arg1;
- (_Bool)_usesLightStyle;
- (void)_updateFonts;
- (id)passcode;
- (void)setShowsEmergencyCallButton:(_Bool)arg1;
- (void)setShowsStatusField:(_Bool)arg1;
- (void)willTransitionToPasscodeView;
- (void)updateForTransitionToPasscodeView:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateStatusText:(id)arg1 subtitle:(id)arg2 animated:(_Bool)arg3;
- (void)resetForFailedPasscode;
- (void)setKeypadVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithLightStyle:(_Bool)arg1;
- (id)_newStatusSubtitleView;
- (void)_toggleForStatusField;
- (void)_notifyDelegatePasscodeEntered;
- (void)_notifyDelegatePasscodeCancelled;
- (void)_layoutStatusView;
- (double)_statusTitleWidth;
- (void)passcodeEntryFieldDidAcceptEntry:(id)arg1;
- (void)passcodeEntryFieldDidCancelEntry:(id)arg1;
- (_Bool)passcodeEntryField:(id)arg1 shouldInsertText:(id)arg2;
- (void)passcodeEntryFieldTextDidChange:(id)arg1;
- (id)_statusTitleView;
- (id)_statusSubtitleView;
- (id)_numberPad;
- (void)passcodeLockNumberPad:(id)arg1 keyDown:(id)arg2;
- (void)passcodeLockNumberPad:(id)arg1 keyUp:(id)arg2;
- (void)passcodeLockNumberPad:(id)arg1 keyCancelled:(id)arg2;
- (void)passcodeLockNumberPadCancelButtonHit:(id)arg1;
- (void)passcodeLockNumberPadBackspaceButtonHit:(id)arg1;
- (void)passcodeLockNumberPadEmergencyCallButtonHit:(id)arg1;
- (id)_newStatusTitleView;
- (id)_newEntryField;
- (void)_setHasInput:(_Bool)arg1;
- (void)_layoutEntryField;
- (id)_statusTitleViewTitleFont;
- (id)_statusSubtitleViewTitleFont;
- (double)_entryFieldBottomYDistanceFromNumberPadTopButton;
- (struct CGRect)_defaultEntryFieldPosition;
- (double)_offsetForCenteringTitleAndEntryFieldFrame:(struct CGRect)arg1 withTopYvalue:(double)arg2 bottomYvalue:(double)arg3;
- (id)_numericEntryFieldIfExists;
- (void)_noteBackspaceHit;
- (void)_noteStringEntered:(id)arg1 eligibleForPlayingSounds:(_Bool)arg2;
- (void)_noteKeyUp:(id)arg1;
- (_Bool)_includesStatusView;

@end
