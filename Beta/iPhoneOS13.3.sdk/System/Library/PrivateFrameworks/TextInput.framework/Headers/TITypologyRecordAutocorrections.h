/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TITypologyRecord.h>

@class TIAutocorrectionList, TICandidateRequestToken, TIKeyboardState;

@interface TITypologyRecordAutocorrections : TITypologyRecord

{
    _Bool _listUIDisplayed;
    TIKeyboardState *_keyboardState;
    TICandidateRequestToken *_requestToken;
    TIAutocorrectionList *_autocorrections;
}

@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (retain, nonatomic) TICandidateRequestToken *requestToken;
@property (retain, nonatomic) TIAutocorrectionList *autocorrections;
@property (nonatomic) _Bool listUIDisplayed;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;
- (id)currentKeyboardState;
- (void)removeContextFromKeyboardState;
- (void)replaceDocumentState:(id)arg1;
- (void)applyToStatistic:(id)arg1;

@end
