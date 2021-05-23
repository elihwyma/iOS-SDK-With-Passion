/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TIMecabraCandidate.h>

@class NSString;

@interface TIMecabraFacemarkCandidate : TIMecabraCandidate

{
    NSString *_category;
}

@property (copy, nonatomic) NSString *category;

+ (int)type;
+ (_Bool)supportsSecureCoding;
+ (id)candidateWithCandidate:(id)arg1 category:(id)arg2 input:(id)arg3 mecabraCandidatePointerValue:(id)arg4;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isFacemarkCandidate;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCandidate:(id)arg1 category:(id)arg2 input:(id)arg3 mecabraCandidatePointerValue:(id)arg4;

@end
