/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIDictationView.h>

@class NSString, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface UIDictationLayoutView : UIDictationView

{
    _Bool _hideSwitcher;
    UIButton *_globeButton;
    UIButton *_keyboardButton;
    UILabel *_languageLabel;
    NSString *_currentDictationLanguage;
    UIButton *_waveTapEndpointButton;
    _Bool _blackTextColor;
}

- (void)dealloc;
- (void)setState:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setRenderConfig:(id)arg1;
- (id)darkGrayColor;
- (void)returnToKeyboard;
- (void)finishReturnToKeyboard;
- (void)globeButtonPressed:(id)arg1 withEvent:(id)arg2 location:(struct CGPoint)arg3;
- (_Bool)isShowing;
- (void)keyboardButtonPressed:(id)arg1;
- (void)globeButtonPressed:(id)arg1 withEvent:(id)arg2;
- (void)updateLanguageLabel;

@end
