/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <SpringBoardUIServices/SBUIInteractionForwardingView.h>

@class NSLayoutConstraint, NSString, PKGlyphView, SBUIButton, SBUIPasscodePillButton, UIButton, UILabel, UILayoutGuide;

@protocol SBUIPasscodeBiometricAuthenticationViewDelegate, SBUIPasscodeBiometricAuthenticationViewLayoutDelegate;

@interface SBUIPasscodeBiometricAuthenticationView : SBUIInteractionForwardingView

{
    _Bool _ancillaryButtonsVisible;
    _Bool _faceIDUsePasscodeButtonVisible;
    unsigned long long _type;
    id <SBUIPasscodeBiometricAuthenticationViewLayoutDelegate> _layoutDelegate;
    id <SBUIPasscodeBiometricAuthenticationViewDelegate> _delegate;
    NSString *_unlockDestination;
    NSString *_touchIDReason;
    NSString *_faceIDReason;
    NSString *_faceIDReasonLine2;
    SBUIButton *_touchIDUsePasscodeButton;
    SBUIPasscodePillButton *_faceIDUsePasscodeButton;
    PKGlyphView *_touchIDGlyphView;
    SBUIButton *_emergencyCallButton;
    SBUIButton *_cancelButton;
    UIButton *_backgroundCancelButton;
    UIButton *_invisibleUsePasscodeButton;
    UILabel *_touchIDReasonLabel;
    UILabel *_faceIDLabel;
    UILabel *_faceIDReasonLabel;
    UILayoutGuide *_faceIDLabelAndReasonHelperGuide;
    UILayoutGuide *_faceIDLabelAndReasonLayoutGuide;
    NSLayoutConstraint *_faceIDLabelFaceIDReasonBaselineConstraint;
}

@property (copy, nonatomic, setter=_setTouchIDReason:) NSString *touchIDReason;
@property (copy, nonatomic, setter=_setFaceIDReason:) NSString *faceIDReason;
@property (copy, nonatomic, setter=_setFaceIDReason2:) NSString *faceIDReasonLine2;
@property (retain, nonatomic) SBUIButton *touchIDUsePasscodeButton;
@property (retain, nonatomic) SBUIPasscodePillButton *faceIDUsePasscodeButton;
@property (retain, nonatomic) PKGlyphView *touchIDGlyphView;
@property (retain, nonatomic) SBUIButton *emergencyCallButton;
@property (retain, nonatomic) SBUIButton *cancelButton;
@property (retain, nonatomic) UIButton *backgroundCancelButton;
@property (retain, nonatomic) UIButton *invisibleUsePasscodeButton;
@property (retain, nonatomic) UILabel *touchIDReasonLabel;
@property (retain, nonatomic) UILabel *faceIDLabel;
@property (retain, nonatomic) UILabel *faceIDReasonLabel;
@property (retain, nonatomic) UILayoutGuide *faceIDLabelAndReasonHelperGuide;
@property (retain, nonatomic) UILayoutGuide *faceIDLabelAndReasonLayoutGuide;
@property (retain, nonatomic) NSLayoutConstraint *faceIDLabelFaceIDReasonBaselineConstraint;
@property (nonatomic) unsigned long long type;
@property (weak, nonatomic) id <SBUIPasscodeBiometricAuthenticationViewLayoutDelegate> layoutDelegate;
@property (weak, nonatomic) id <SBUIPasscodeBiometricAuthenticationViewDelegate> delegate;
@property (copy, nonatomic) NSString *unlockDestination;
@property (nonatomic) _Bool showsEmergencyCallButton;
@property (nonatomic) _Bool showsCancelButton;
@property (nonatomic) _Bool ancillaryButtonsVisible;
@property (nonatomic) _Bool faceIDUsePasscodeButtonVisible;

- (void)layoutSubviews;
- (void)_updateSubviews;
- (void)_updateConstraints;
- (void)_noteContentSizeCategoryDidChange;
- (void)_layoutAuthReasonLabel:(id)arg1;
- (void)_setFaceIDReasonLine2:(id)arg1;
- (void)setAncillaryButtonsVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_cancelButtonHit;
- (void)_usePasscodeButtonHit;
- (void)_emergencyCallButtonHit;
- (double)_leadingForFaceIDReason;
- (id)initWithFrame:(struct CGRect)arg1 layoutDelegate:(id)arg2;
- (void)setGlyphViewState:(long long)arg1;
- (void)setGlyphViewState:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end
