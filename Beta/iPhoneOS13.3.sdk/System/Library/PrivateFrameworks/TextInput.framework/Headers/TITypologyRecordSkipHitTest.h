/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardLayout, TIKeyboardState, TIKeyboardTouchEvent;

@interface TITypologyRecordSkipHitTest : TITypologyRecord

{
    TIKeyboardTouchEvent *_touchEvent;
    TIKeyboardState *_keyboardState;
    TIKeyboardLayout *_keyLayout;
}

@property (retain, nonatomic) TIKeyboardTouchEvent *touchEvent;
@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (retain, nonatomic) TIKeyboardLayout *keyLayout;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;
- (id)currentKeyboardState;
- (void)removeContextFromKeyboardState;
- (void)replaceDocumentState:(id)arg1;
- (void)applyToStatistic:(id)arg1;

@end
