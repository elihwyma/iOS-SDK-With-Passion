/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIControl.h>

@class NSMutableArray, NSMutableString, NSString, SKUIViewElement, UIColor, UIFont, UITextInputPasswordRules;

__attribute__((visibility("hidden")))
@interface SKUIPINInputControl : UIControl

{
    UIColor *_boxBackgroundColor;
    UIColor *_boxBorderColor;
    UIFont *_font;
    long long _keyboardType;
    NSMutableArray *_labels;
    _Bool _needsLabelReload;
    long long _numberOfCharacters;
    _Bool _secureTextEntry;
    NSMutableString *_text;
    UIColor *_textColor;
    SKUIViewElement *_viewElement;
}

@property (copy, nonatomic) UIColor *boxBackgroundColor;
@property (copy, nonatomic) UIColor *boxBorderColor;
@property (copy, nonatomic) UIFont *font;
@property (copy, nonatomic) UIColor *textColor;
@property (nonatomic) long long numberOfCharacters;
@property (copy, nonatomic) NSString *text;
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

+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (double)_defaultBoxSizeForFont:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)becomeFirstResponder;
- (void)tintColorDidChange;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;
- (void)_reloadLabelSubviews;
- (void)_setNeedsReloadLayout;
- (void)_sendValueChangeEvents;

@end
