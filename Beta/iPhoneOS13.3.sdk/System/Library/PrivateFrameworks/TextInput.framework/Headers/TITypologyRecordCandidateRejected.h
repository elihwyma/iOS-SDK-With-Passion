/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardCandidate;

@interface TITypologyRecordCandidateRejected : TITypologyRecord

{
    TIKeyboardCandidate *_candidate;
}

@property (retain, nonatomic) TIKeyboardCandidate *candidate;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;
- (void)applyToStatistic:(id)arg1;

@end
