/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardLayout, TIKeyboardState, TIKeyboardTouchEvent;

@interface TITypologyRecordHitTest : TITypologyRecord

{
    TIKeyboardTouchEvent *_touchEvent;
    TIKeyboardState *_keyboardState;
    TIKeyboardLayout *_keyLayout;
    long long _keyCode;
}

@property (retain, nonatomic) TIKeyboardTouchEvent *touchEvent;
@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (retain, nonatomic) TIKeyboardLayout *keyLayout;
@property (nonatomic) long long keyCode;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;
- (id)currentKeyboardState;
- (void)removeContextFromKeyboardState;
- (void)replaceDocumentState:(id)arg1;
- (void)applyToStatistic:(id)arg1;

@end
