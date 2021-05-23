/*
 Image: /System/Library/PrivateFrameworks/RapportUI.framework/RapportUI
 */

#import <UIKit/UIView.h>

#import <RapportUI/Swift-Protocol.h>

@class NSArray, NSMutableString, NSString, UIColor, UILabel, UITextInputPasswordRules;

@interface RPPINEntryView : UIView <Swift>

{
    NSMutableString *_text;
    _Bool _alphaNumeric;
    _Bool _disabled;
    NSArray *_labels;
    UILabel *_label1;
    UILabel *_label2;
    UILabel *_label3;
    UILabel *_label4;
    UILabel *_label5;
    UILabel *_label6;
    UILabel *_label7;
    UILabel *_label8;
    CDUnknownBlockType _textChangedHandler;
    NSArray *_wells;
    UIView *_well1;
    UIView *_well2;
    UIView *_well3;
    UIView *_well4;
    UIView *_well5;
    UIView *_well6;
    UIView *_well7;
    UIView *_well8;
    UIColor *_wellFocusColor;
}

@property (nonatomic) _Bool alphaNumeric;
@property (nonatomic) _Bool disabled;
@property (retain, nonatomic) NSArray *labels;
@property (retain, nonatomic) UILabel *label1;
@property (retain, nonatomic) UILabel *label2;
@property (retain, nonatomic) UILabel *label3;
@property (retain, nonatomic) UILabel *label4;
@property (retain, nonatomic) UILabel *label5;
@property (retain, nonatomic) UILabel *label6;
@property (retain, nonatomic) UILabel *label7;
@property (retain, nonatomic) UILabel *label8;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) CDUnknownBlockType textChangedHandler;
@property (retain, nonatomic) NSArray *wells;
@property (retain, nonatomic) UIView *well1;
@property (retain, nonatomic) UIView *well2;
@property (retain, nonatomic) UIView *well3;
@property (retain, nonatomic) UIView *well4;
@property (retain, nonatomic) UIView *well5;
@property (retain, nonatomic) UIView *well6;
@property (retain, nonatomic) UIView *well7;
@property (retain, nonatomic) UIView *well8;
@property (retain, nonatomic) UIColor *wellFocusColor;
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

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (void)awakeFromNib;
- (void)_updateFields;

@end
