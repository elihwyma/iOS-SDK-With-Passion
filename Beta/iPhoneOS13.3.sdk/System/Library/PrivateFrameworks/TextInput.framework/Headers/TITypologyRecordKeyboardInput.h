/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardConfiguration, TIKeyboardInput, TIKeyboardOutput, TIKeyboardState;

@interface TITypologyRecordKeyboardInput : TITypologyRecord

{
    TIKeyboardInput *_input;
    TIKeyboardState *_keyboardState;
    TIKeyboardOutput *_output;
    TIKeyboardConfiguration *_keyboardConfig;
}

@property (retain, nonatomic) TIKeyboardInput *input;
@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (retain, nonatomic) TIKeyboardOutput *output;
@property (retain, nonatomic) TIKeyboardConfiguration *keyboardConfig;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;
- (id)textSummary;
- (id)changedText;
- (id)currentKeyboardState;
- (void)removeContextFromKeyboardState;
- (void)replaceDocumentState:(id)arg1;
- (void)applyToStatistic:(id)arg1;

@end
