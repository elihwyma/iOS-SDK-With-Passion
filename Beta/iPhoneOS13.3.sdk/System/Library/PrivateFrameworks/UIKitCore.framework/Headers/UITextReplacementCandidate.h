/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <TextInput/TIKeyboardCandidateSingle.h>

@class UITextReplacement;

__attribute__((visibility("hidden")))
@interface UITextReplacementCandidate : TIKeyboardCandidateSingle

{
    UITextReplacement *_replacement;
}

@property (nonatomic, readonly) UITextReplacement *replacement;

+ (id)textReplacementCandidateForTextReplacement:(id)arg1;

- (id)label;
- (id)_initWithTextReplacement:(id)arg1;

@end
