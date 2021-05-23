/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSMutableString, NSString, UILabel, UITapGestureRecognizer, UITextInputPasswordRules;

@interface AKCodeEntryView : UIView

{
    NSMutableString *_stringValue;
    UITapGestureRecognizer *_tapGestureRecognizer;
    _Bool _passcodeFieldDisabled;
    NSArray *_generatorFields;
    NSArray *_activeConstraints;
}

@property (retain, nonatomic) NSArray *generatorFields;
@property (retain, nonatomic) NSArray *activeConstraints;
@property (nonatomic, readonly) UILabel *firstGeneratorField;
@property (copy, nonatomic) NSString *stringValue;
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

+ (id)generatorFieldFont;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)becomeFirstResponder;
- (void)updateConstraints;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (_Bool)canBecomeFirstResponder;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (void)passcodeFieldTapped:(id)arg1;
- (void)_updateFonts:(id)arg1;
- (void)_syncStringValueToLabels;
- (void)emitCodeEnteredNotification;
- (void)setPasscodeFieldDisabled:(_Bool)arg1;

@end
