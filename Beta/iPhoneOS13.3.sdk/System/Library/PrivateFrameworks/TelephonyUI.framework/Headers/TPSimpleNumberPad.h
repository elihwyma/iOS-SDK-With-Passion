/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <TelephonyUI/TPNumberPad.h>

@class UIButton;

@protocol TPSimpleNumberPadDelegate;

@interface TPSimpleNumberPad : TPNumberPad

{
    UIButton *_deleteButton;
    _Bool _showsDeleteButton;
    id <TPSimpleNumberPadDelegate> _delegate;
}

@property id <TPSimpleNumberPadDelegate> delegate;
@property (nonatomic) _Bool showsDeleteButton;

+ (id)_numberPadCharacters;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)buttonUp:(id)arg1;
- (void)_updateDeleteButton;
- (id)initWithButtons:(id)arg1;
- (Class)numberPadButtonClass;
- (void)setNumberButtonsEnabled:(_Bool)arg1;
- (void)_deleteButtonClicked:(id)arg1 withEvent:(id)arg2;

@end
