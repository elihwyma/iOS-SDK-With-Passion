/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/UIView.h>

@class NSArray, NSString, SBNumberPadWithDelegate, SBUIButton, UIColor, UIControl;

@protocol SBUIPasscodeLockNumberPadDelegate, SBUIPasscodeNumberPadButton;

@interface SBUIPasscodeLockNumberPad : UIView

{
    SBNumberPadWithDelegate *_numberPad;
    UIColor *_customBackgroundColor;
    _Bool _useLightStyle;
    _Bool _visible;
    _Bool _snapshotsDisabled;
    _Bool _showsBackspaceButton;
    _Bool _showsEmergencyCallButton;
    _Bool _showsCancelButton;
    id <SBUIPasscodeLockNumberPadDelegate> _delegate;
    double _ancillaryButtonOffset;
    UIControl<SBUIPasscodeNumberPadButton> *_downButton;
    SBUIButton *_emergencyCallButton;
    SBUIButton *_backspaceButton;
    SBUIButton *_cancelButton;
    UIColor *_reduceTransparencyButtonColor;
}

@property (retain, nonatomic) UIControl<SBUIPasscodeNumberPadButton> *downButton;
@property (nonatomic) double ancillaryButtonOffset;
@property (nonatomic, readonly) SBUIButton *emergencyCallButton;
@property (nonatomic, readonly) SBUIButton *backspaceButton;
@property (nonatomic, readonly) SBUIButton *cancelButton;
@property (retain, nonatomic) UIColor *reduceTransparencyButtonColor;
@property (weak, nonatomic) id <SBUIPasscodeLockNumberPadDelegate> delegate;
@property (nonatomic) _Bool showsBackspaceButton;
@property (nonatomic) _Bool showsEmergencyCallButton;
@property (nonatomic) _Bool showsCancelButton;
@property (weak, nonatomic, readonly) NSArray *buttons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (struct CGSize)_inputButtonCircleSize;
+ (struct UIEdgeInsets)_inputButtonCircleSpacing;
+ (id)_buttonForCharacter:(unsigned int)arg1 withLightStyle:(_Bool)arg2;

- (void)traitCollectionDidChange:(id)arg1;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_cancelButtonHit;
- (void)_emergencyCallButtonHit;
- (double)_distanceToTopOfFirstButton;
- (id)initWithDefaultSizeAndLightStyle:(_Bool)arg1;
- (id)_fontForAncillaryButton;
- (void)_backspaceButtonHit;
- (void)_configureAdditionalButtons;
- (void)_numberPadTouchDown:(id)arg1 forEvent:(id)arg2;
- (void)_numberPadTouchUp:(id)arg1 forEvent:(id)arg2;
- (void)_numberPadTouchCancelled:(id)arg1 forEvent:(id)arg2;
- (void)_numberPadTouchDrag:(id)arg1 forEvent:(id)arg2;
- (void)_setSnapshotsDisabled:(_Bool)arg1;

@end
