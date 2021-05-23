/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UITextField.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSString, UITextInputPasswordRules;

__attribute__((visibility("hidden")))
@interface SKUISignInTextView : UITextField <Swift>

{
    long long _keyboardType;
}

@property (nonatomic) long long keyboardType;
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
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) _Bool enablesReturnKeyAutomatically;
@property (nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property (copy, nonatomic) NSString *textContentType;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;

@end
