/*
 Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

#import <TVRemoteUI/Swift-Protocol.h>

@class NSString, UITextInputPasswordRules;

@protocol UITextInputTraits <Swift>

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

@end
