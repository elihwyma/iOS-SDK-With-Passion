/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TITypologyRecord.h>

@class NSString, TIKeyboardCandidate, TIKeyboardConfiguration, TIKeyboardState;

@interface TITypologyRecordAcceptedCandidate : TITypologyRecord

{
    TIKeyboardCandidate *_candidate;
    TIKeyboardState *_keyboardState;
    TIKeyboardConfiguration *_keyboardConfig;
    NSString *_textToCommit;
}

@property (retain, nonatomic) TIKeyboardCandidate *candidate;
@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (retain, nonatomic) TIKeyboardConfiguration *keyboardConfig;
@property (copy, nonatomic) NSString *textToCommit;

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
