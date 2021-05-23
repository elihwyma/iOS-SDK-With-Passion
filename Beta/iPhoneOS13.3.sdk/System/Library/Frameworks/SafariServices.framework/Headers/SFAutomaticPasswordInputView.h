/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIInputView.h>

@class SFAutomaticPasswordExplanationView;

@protocol SFAutomaticPasswordInputViewDelegate, SFAutomaticPasswordInputViewSizing;

__attribute__((visibility("hidden")))
@interface SFAutomaticPasswordInputView : UIInputView

{
    SFAutomaticPasswordExplanationView *_explanationView;
    _Bool _shouldAllowSelfSizing;
    long long _keyboardType;
    id <SFAutomaticPasswordInputViewDelegate> _delegate;
    id <SFAutomaticPasswordInputViewSizing> _inputViewSizing;
}

@property (nonatomic, readonly) long long keyboardType;
@property (weak, nonatomic) id <SFAutomaticPasswordInputViewDelegate> delegate;
@property (weak, nonatomic) id <SFAutomaticPasswordInputViewSizing> inputViewSizing;
@property (nonatomic) _Bool shouldAllowSelfSizing;
@property (nonatomic) long long keyboardAppearance;

- (struct CGSize)intrinsicContentSize;
- (_Bool)allowsSelfSizing;
- (id)initWithInputViewStyle:(long long)arg1 keyboardType:(long long)arg2;
- (void)_useStrongPasswordButtonAction:(id)arg1;
- (void)_useCustomPasswordButtonAction:(id)arg1;

@end
