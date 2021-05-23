/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TIMecabraCandidate.h>

@class NSArray, NSString;

@interface TICompositeMecabraCandidate : TIMecabraCandidate

{
    NSString *_remainderCandidateString;
    NSArray *_autoconvertedCandidatePointerValues;
}

@property (copy, nonatomic) NSString *remainderCandidateString;
@property (copy, nonatomic) NSArray *autoconvertedCandidatePointerValues;

+ (int)type;
+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)label;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;

@end
