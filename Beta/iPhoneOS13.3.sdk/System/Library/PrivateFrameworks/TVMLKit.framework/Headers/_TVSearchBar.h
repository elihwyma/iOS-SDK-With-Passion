/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

@class NSString, UIActivityIndicatorView, UITextField, UITextInputPasswordRules;

@protocol _TVSearchBarDelegate;

__attribute__((visibility("hidden")))
@interface _TVSearchBar : UIView

{
    UITextField *_textField;
    id <_TVSearchBarDelegate> _delegate;
    UIActivityIndicatorView *_activityIndicatorView;
}

@property (retain, nonatomic) NSString *text;
@property (nonatomic, readonly) UITextField *textField;
@property (weak, nonatomic) id <_TVSearchBarDelegate> delegate;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;
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

+ (id)_listItemSelectedOverlayFillColor;
+ (id)_listItemTextColor;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)canBecomeFirstResponder;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (id)keyCommands;
- (void)_submit:(id)arg1;
- (void)_insertSpace:(id)arg1;

@end
