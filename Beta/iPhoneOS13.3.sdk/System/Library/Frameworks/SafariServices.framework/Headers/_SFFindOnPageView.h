/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIView.h>

#import <SafariServices/Swift-Protocol.h>

@class NSString, UITextInputPasswordRules, WKWebView, _SFFindOnPageToolbar;

@protocol _SFFindOnPageViewDelegate;

@interface _SFFindOnPageView : UIView <Swift>

{
    _Bool _requiresKeyboard;
    _Bool _isShowing;
    _SFFindOnPageToolbar *_toolbar;
    _Bool _usesNarrowLayout;
    _Bool _shouldFocusTextField;
    id <_SFFindOnPageViewDelegate> _delegate;
    NSString *_findString;
    unsigned long long _numberOfFindMatches;
    long long _highlightedMatchIndex;
    WKWebView *_webView;
}

@property (copy, nonatomic) NSString *findString;
@property (nonatomic) unsigned long long numberOfFindMatches;
@property (nonatomic) long long highlightedMatchIndex;
@property (weak, nonatomic) WKWebView *webView;
@property (weak, nonatomic, readonly) id <_SFFindOnPageViewDelegate> delegate;
@property (nonatomic) _Bool usesNarrowLayout;
@property (nonatomic) _Bool shouldFocusTextField;
@property (nonatomic, readonly) _Bool isShowing;
@property (nonatomic, readonly) _Bool isFocused;
@property (nonatomic, readonly) _Bool shouldDisplayFindNextPreviousInDiscoverabilityHUD;
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

+ (unsigned long long)_undefinedNumberOfMatches;
+ (long long)_undefinedMatchIndex;
+ (unsigned long long)_maximumNumberOfMatches;

- (void)next;
- (void)previous;
- (id)initWithDelegate:(id)arg1;
- (void)done;
- (id)inputAccessoryView;
- (_Bool)canBecomeFirstResponder;
- (void)didMoveToSuperview;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (id)toolbar;
- (id)keyCommands;
- (_Bool)_requiresKeyboardWhenFirstResponder;
- (void)_webView:(id)arg1 didCountMatches:(unsigned long long)arg2 forString:(id)arg3;
- (void)_webView:(id)arg1 didFindMatches:(unsigned long long)arg2 forString:(id)arg3 withMatchIndex:(long long)arg4;
- (void)_webView:(id)arg1 didFailToFindString:(id)arg2;
- (void)_dismiss:(id)arg1;
- (void)updateUI;
- (id)findTextField;
- (void)_setFindingInWebViewIfNeeded;
- (void)_advance:(id)arg1;
- (void)prepareFindOnPageWithString:(id)arg1;
- (_Bool)hideFindOnPage;
- (void)prepareFindOnPage;
- (unsigned long long)_findOptions;
- (void)dismissFindOnPage;
- (id)textForToolbarLabel;
- (void)updateSearchText:(id)arg1;
- (_Bool)hasMatches;
- (id)matchLabelText;
- (void)showFindOnPage;
- (void)selectFindOnPageText;
- (void)takeFindStringFromSelection;

@end
