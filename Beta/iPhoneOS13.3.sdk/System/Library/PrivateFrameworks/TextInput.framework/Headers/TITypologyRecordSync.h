/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardConfiguration, TIKeyboardState;

@interface TITypologyRecordSync : TITypologyRecord

{
    TIKeyboardState *_keyboardState;
    TIKeyboardConfiguration *_keyboardConfig;
}

@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (retain, nonatomic) TIKeyboardConfiguration *keyboardConfig;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;
- (id)textSummary;
- (id)currentKeyboardState;
- (void)removeContextFromKeyboardState;
- (void)replaceDocumentState:(id)arg1;
- (void)applyToStatistic:(id)arg1;

@end
