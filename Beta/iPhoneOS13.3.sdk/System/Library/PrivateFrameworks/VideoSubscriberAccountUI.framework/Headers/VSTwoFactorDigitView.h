/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <UIKit/UIControl.h>

#import <VideoSubscriberAccountUI/Swift-Protocol.h>

@class NSArray, NSString, UITextInputPasswordRules;

@protocol VSTwoFactorDigitViewDelegate;

__attribute__((visibility("hidden")))
@interface VSTwoFactorDigitView : UIControl <Swift>

{
    _Bool _hasText;
    long long _keyboardType;
    long long _autocapitalizationType;
    long long _returnKeyType;
    NSString *_textContentType;
    id <VSTwoFactorDigitViewDelegate> _delegate;
    unsigned long long _digitCount;
    NSString *_text;
    NSArray *_digits;
}

@property (retain, nonatomic) NSArray *digits;
@property (weak, nonatomic) id <VSTwoFactorDigitViewDelegate> delegate;
@property (nonatomic, readonly) unsigned long long digitCount;
@property (retain, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long spellCheckingType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) _Bool enablesReturnKeyAutomatically;
@property (nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property (copy, nonatomic) NSString *textContentType;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic, readonly) _Bool hasText;

- (_Bool)canBecomeFirstResponder;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (void)onTouchUpInside:(id)arg1;
- (id)initWithDigitCount:(unsigned long long)arg1;
- (void)setupDigitViews;

@end
