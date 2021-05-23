/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TITypologyRecord.h>

@class TIAutocorrectionList, TIKeyboardCandidate, TIKeyboardState;

@interface TITypologyRecordRefinements : TITypologyRecord

{
    TIKeyboardCandidate *_candidate;
    TIKeyboardState *_keyboardState;
    TIAutocorrectionList *_refinements;
}

@property (retain, nonatomic) TIKeyboardCandidate *candidate;
@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (retain, nonatomic) TIAutocorrectionList *refinements;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;
- (id)currentKeyboardState;
- (void)removeContextFromKeyboardState;
- (void)replaceDocumentState:(id)arg1;
- (void)applyToStatistic:(id)arg1;

@end
