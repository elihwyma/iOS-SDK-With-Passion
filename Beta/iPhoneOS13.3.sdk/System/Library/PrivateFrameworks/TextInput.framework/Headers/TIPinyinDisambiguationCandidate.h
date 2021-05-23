/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TIKeyboardCandidateSingle.h>

@class NSString;

@interface TIPinyinDisambiguationCandidate : TIKeyboardCandidateSingle

{
    NSString *_label;
}

+ (int)type;
+ (_Bool)supportsSecureCoding;
+ (id)candidateWithPinyinSyllable:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setLabel:(id)arg1;
- (id)label;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (id)initWithPinyinSyllable:(id)arg1;

@end
