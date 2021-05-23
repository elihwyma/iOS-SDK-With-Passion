/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TIKeyboardCandidateSingle.h>

@interface TIHandwritingCandidate : TIKeyboardCandidateSingle

{
    unsigned long long _uniqueID;
    unsigned long long _completionUniqueID;
}

@property (nonatomic, readonly) unsigned long long uniqueID;
@property (nonatomic, readonly) unsigned long long completionUniqueID;

+ (int)type;
+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isCompletionCandidate;
- (_Bool)isInlineCompletionCandidate;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 uniqueID:(unsigned long long)arg3 completionUniqueID:(unsigned long long)arg4;

@end
