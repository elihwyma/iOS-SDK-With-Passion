/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <TextInput/TIKeyboardCandidate.h>

@class UITextSuggestion;

@interface TIKeyboardCandidateSuggestion : TIKeyboardCandidate

{
    unsigned long long _customInfoType;
    UITextSuggestion *_textSuggestion;
}

@property (nonatomic, readonly) UITextSuggestion *textSuggestion;

+ (id)candidateWithSuggestion:(id)arg1 customInfoType:(unsigned long long)arg2;
+ (id)candidateWithSuggestion:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)input;
- (id)label;
- (unsigned long long)customInfoType;
- (id)candidate;
- (id)initWithSuggestion:(id)arg1 customInfoType:(unsigned long long)arg2;

@end
