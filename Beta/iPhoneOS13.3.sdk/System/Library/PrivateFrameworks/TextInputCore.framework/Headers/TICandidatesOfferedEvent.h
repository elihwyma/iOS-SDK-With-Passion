/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@class TIAutocorrectionList;

@interface TICandidatesOfferedEvent

{
    TIAutocorrectionList *_candidates;
}

@property (nonatomic, readonly) TIAutocorrectionList *candidates;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCandidates:(id)arg1 keyboardState:(id)arg2;

@end
