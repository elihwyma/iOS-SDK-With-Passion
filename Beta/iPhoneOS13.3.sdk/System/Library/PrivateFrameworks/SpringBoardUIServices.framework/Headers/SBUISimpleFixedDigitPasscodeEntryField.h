/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <SpringBoardUIServices/SBUINumericPasscodeEntryFieldBase.h>

@class NSMutableArray, UIView;

@interface SBUISimpleFixedDigitPasscodeEntryField : SBUINumericPasscodeEntryFieldBase

{
    UIView *_characterIndicatorsContainerView;
    NSMutableArray *_characterIndicators;
    UIView *_springView;
    UIView *_springViewParent;
}

- (void)reset;
- (struct CGSize)_viewSize;
- (void)_resetForFailedPasscode:(_Bool)arg1;
- (void)_autofillForBiometricAuthenticationWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithDefaultSizeAndLightStyle:(_Bool)arg1;
- (id)initWithDefaultSizeAndLightStyle:(_Bool)arg1 numberOfDigits:(unsigned long long)arg2;
- (struct CGRect)_entryFieldBoundsWithXOffset:(double)arg1;
- (struct UIEdgeInsets)_entryFieldPaddingOutsideRing;
- (void)_appendString:(id)arg1;
- (void)_deleteLastCharacter;
- (_Bool)_hasAnyCharacters;

@end
