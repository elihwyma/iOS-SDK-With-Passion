/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TIKeyboardCandidate.h>

@class NSString;

@interface TIKeyboardCandidateSingle : TIKeyboardCandidate

{
    _Bool _extensionCandidate;
    NSString *_candidate;
    NSString *_input;
    long long *_cursorMovement;
}

@property (copy, nonatomic) NSString *candidate;
@property (copy, nonatomic) NSString *input;
@property (nonatomic) long long *cursorMovement;
@property (nonatomic, getter=isExtensionCandidate) _Bool extensionCandidate;

+ (int)type;
+ (_Bool)supportsSecureCoding;
+ (id)candidateWithCandidate:(id)arg1 forInput:(id)arg2;
+ (id)candidateWithUnchangedInput:(id)arg1;
+ (id)candidateWithCandidate:(id)arg1 forInput:(id)arg2 extensionCandidate:(_Bool)arg3;
+ (id)candidateWithCandidate:(id)arg1 forInput:(id)arg2 customInfoType:(unsigned long long)arg3;
+ (id)candidateWithCandidate:(id)arg1 forInput:(id)arg2 cursorMovement:(long long)arg3;
+ (id)secureCandidateForInput:(id)arg1 slotID:(unsigned int)arg2;
+ (id)secureCandidateForInput:(id)arg1 slotID:(unsigned int)arg2 customInfoType:(unsigned long long)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)candidateByReplacingWithCandidate:(id)arg1;
- (id)initWithCandidate:(id)arg1;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (id)candidateByReplacingWithCandidate:(id)arg1 input:(id)arg2;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 extensionCandidate:(_Bool)arg3;
- (id)initWithUnchangedInput:(id)arg1;
- (id)initWithResponseCandidate:(id)arg1;

@end
