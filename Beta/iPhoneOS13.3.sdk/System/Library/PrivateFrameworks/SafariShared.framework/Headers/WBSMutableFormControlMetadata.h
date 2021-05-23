/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/WBSFormControlMetadata.h>

@class NSArray, NSDictionary, NSString;

@interface WBSMutableFormControlMetadata : WBSFormControlMetadata

@property (copy, nonatomic) NSString *addressBookLabel;
@property (copy, nonatomic) NSDictionary *annotations;
@property (copy, nonatomic) NSArray *autocompleteTokens;
@property (copy, nonatomic) NSString *associatedUsername;
@property (copy, nonatomic) NSString *passwordRules;
@property (copy, nonatomic) NSString *fieldClass;
@property (copy, nonatomic) NSString *fieldID;
@property (copy, nonatomic) NSString *fieldName;
@property (copy, nonatomic) NSString *tagName;
@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSString *nextControlUniqueID;
@property (copy, nonatomic) NSString *value;
@property (nonatomic, getter=isVisible) _Bool visible;
@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic, getter=isDisabled) _Bool disabled;
@property (nonatomic, getter=isReadOnly) _Bool readOnly;
@property (nonatomic, getter=isTextField) _Bool textField;
@property (nonatomic, getter=isSecureTextField) _Bool secureTextField;
@property (nonatomic, getter=isAutoFilledTextField) _Bool autoFilledTextField;
@property (nonatomic, getter=isUserEditedTextField) _Bool userEditedTextField;
@property (nonatomic, getter=isLabeledUsernameField) _Bool labeledUsernameField;
@property (nonatomic) _Bool disallowsAutocomplete;
@property (nonatomic) _Bool claimsToBeCurrentPasswordViaAutocompleteAttribute;
@property (nonatomic) _Bool claimsToBeNewPasswordViaAutocompleteAttribute;
@property (nonatomic) _Bool claimsToBeUsernameViaAutocompleteAttribute;
@property (nonatomic) _Bool looksLikeCreditCardCardholderField;
@property (nonatomic) _Bool looksLikeCreditCardCompositeExpirationDateField;
@property (nonatomic) _Bool looksLikeCreditCardNumberField;
@property (nonatomic) _Bool looksLikeCreditCardSecurityCodeField;
@property (nonatomic) _Bool looksLikeCreditCardTypeField;
@property (nonatomic) _Bool looksLikeDayField;
@property (nonatomic) _Bool looksLikeMonthField;
@property (nonatomic) _Bool looksLikeYearField;
@property (nonatomic) _Bool looksLikeOneTimeCodeField;
@property (nonatomic) _Bool looksLikeIgnoredDataTypeField;
@property (nonatomic) _Bool looksLikePasswordCredentialField;
@property (copy, nonatomic) NSDictionary *radioButtonInfo;
@property (copy, nonatomic) NSArray *selectElementInfo;
@property (nonatomic) double rectLeft;
@property (nonatomic) double rectTop;
@property (nonatomic) double rectWidth;
@property (nonatomic) double rectHeight;
@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long maxLength;
@property (nonatomic) unsigned long long minLength;
@property (nonatomic) unsigned long long selectionStart;
@property (nonatomic) unsigned long long selectionLength;
@property (nonatomic) long long autoFillButtonType;
@property (nonatomic) long long lastAutoFillButtonType;

- (void)setPlaceholder:(id)arg1;
- (void)setassociatedUsername:(id)arg1;

@end
