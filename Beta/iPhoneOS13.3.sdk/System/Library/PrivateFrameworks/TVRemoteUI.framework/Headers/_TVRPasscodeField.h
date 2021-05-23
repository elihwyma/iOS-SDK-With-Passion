/*
 Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

#import <UIKit/UIControl.h>

@class NSMutableString, NSString, TVRCPINEntryAttributes, UITextInputPasswordRules;

@interface _TVRPasscodeField : UIControl

{
    _Bool _useSystemColors;
    TVRCPINEntryAttributes *_PINEntryattributes;
    NSMutableString *_mutablePasscode;
}

@property (retain, nonatomic) NSMutableString *mutablePasscode;
@property (retain, nonatomic) TVRCPINEntryAttributes *PINEntryattributes;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) _Bool useSystemColors;
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

- (void)clear;
- (struct CGSize)_contentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)acceptsFloatingKeyboard;
- (_Bool)acceptsSplitKeyboard;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (double)_contentWidthWithDotSize:(double)arg1 entrySpacing:(double)arg2 groupSpacing:(double)arg3;

@end
