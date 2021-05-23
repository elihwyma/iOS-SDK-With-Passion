/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardCandidate;

@interface TITypologyRecordTextAccepted : TITypologyRecord

{
    TIKeyboardCandidate *_candidate;
}

@property (retain, nonatomic) TIKeyboardCandidate *candidate;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;
- (id)textSummary;
- (id)changedText;
- (void)applyToStatistic:(id)arg1;

@end
