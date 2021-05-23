/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextTapRecognizer.h>

@class UIResponder;

@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UISelectionTapRecognizer : UITextTapRecognizer

{
    UIResponder<UITextInput> *_textView;
}

@property UIResponder<UITextInput> *textView;

- (void)setState:(long long)arg1;
- (_Bool)isCloseToSelection;

@end
