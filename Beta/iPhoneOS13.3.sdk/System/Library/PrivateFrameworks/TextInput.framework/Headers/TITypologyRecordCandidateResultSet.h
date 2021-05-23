/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardCandidateResultSet, TIKeyboardState;

@interface TITypologyRecordCandidateResultSet : TITypologyRecord

{
    TIKeyboardState *_keyboardState;
    TIKeyboardCandidateResultSet *_resultSet;
}

@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (retain, nonatomic) TIKeyboardCandidateResultSet *resultSet;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;
- (id)currentKeyboardState;
- (void)removeContextFromKeyboardState;
- (void)replaceDocumentState:(id)arg1;
- (void)applyToStatistic:(id)arg1;

@end
