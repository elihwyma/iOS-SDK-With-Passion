/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UIControl.h>

@class NSArray, NSMutableArray;

@interface TPNumberPad : UIControl

{
    NSMutableArray *_buttons;
    _Bool _numberButtonsEnabled;
    double _buttonBackgroundAlpha;
}

@property (nonatomic) _Bool numberButtonsEnabled;
@property (retain) NSArray *buttons;
@property (nonatomic) double buttonBackgroundAlpha;

- (void)dealloc;
- (struct CGSize)intrinsicContentSize;
- (void)buttonTapped:(id)arg1;
- (void)buttonDown:(id)arg1;
- (void)buttonUp:(id)arg1;
- (id)initWithButtons:(id)arg1;
- (void)buttonCancelled:(id)arg1;
- (void)replaceButton:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)buttonUpOutside:(id)arg1;
- (void)buttonLongPressed:(id)arg1;
- (void)_addButton:(id)arg1;
- (void)_layoutGrid;
- (void)handleCurrentLocaleDidChangeNotification:(id)arg1;
- (void)buttonLongPressedViaGesture:(id)arg1;

@end
