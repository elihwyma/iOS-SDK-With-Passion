/*
 Image: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSNumber, NSString, UILabel, _KeypadButton, _KeypadDismissButton;

@protocol PTUINumericKeypadDelegate;

@interface PTUINumericKeypad : UIView

{
    id <PTUINumericKeypadDelegate> _delegate;
    _Bool _showing;
    UILabel *_valueLabel;
    NSArray *_digitButtons;
    _KeypadButton *_dotButton;
    _KeypadButton *_signButton;
    _KeypadButton *_clearButton;
    _KeypadButton *_backspaceButton;
    _KeypadDismissButton *_dismissButton;
    UIView *_backgroundView;
    NSMutableArray *_digitsBeforeDot;
    NSMutableArray *_digitsAfterDot;
    _Bool _negative;
    _Bool _hasDot;
    NSNumber *_cachedNumberValue;
    NSString *_cachedStringValue;
}

@property (nonatomic) double doubleValue;
@property (retain, nonatomic) NSString *stringValue;

+ (id)sharedKeypad;

- (id)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_clear;
- (void)_backspace;
- (void)_flash;
- (void)hideAnimated:(_Bool)arg1;
- (void)keyPress:(id)arg1;
- (void)_dismissButtonPress;
- (unsigned long long)_remainingAllowedDigits;
- (void)_updateDisplayedValue;
- (double)_layoutButtonRow:(id)arg1 atY:(double)arg2;
- (double)_layoutButtonRow:(id)arg1 atY:(double)arg2 stretch:(_Bool)arg3;
- (void)_appendDigit:(unsigned long long)arg1;
- (void)_appendDot;
- (void)_changeSign;
- (void)showAnimated:(_Bool)arg1 forDelegate:(id)arg2;

@end
