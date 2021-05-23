/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextInputStringTokenizer.h>

@class UITextInputController;

__attribute__((visibility("hidden")))
@interface _UITextInputControllerTokenizer : UITextInputStringTokenizer

{
    UITextInputController *_textInput;
    struct __CFStringTokenizer *_tokenizer;
    int _tokenizerType;
    _Bool _tokenizerIsInvalid;
}

- (void)dealloc;
- (long long)_indexForTextPosition:(id)arg1;
- (_Bool)_isDownstreamForDirection:(long long)arg1 atPosition:(id)arg2;
- (id)_closestTokenSubrangeForPosition:(id)arg1 granularity:(long long)arg2 downstream:(_Bool)arg3;
- (id)_positionFromPosition:(id)arg1 offset:(unsigned long long)arg2 affinity:(long long)arg3;
- (id)initWithTextInputController:(id)arg1;
- (void)invalidateTokenizer;
- (long long)_writingDirectionAtPosition:(id)arg1;

@end
