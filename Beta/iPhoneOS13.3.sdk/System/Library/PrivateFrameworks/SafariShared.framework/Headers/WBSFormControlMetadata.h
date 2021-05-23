/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

#import <SafariShared/Swift-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface WBSFormControlMetadata : NSObject <Swift>

{
    NSString *_addressBookLabel;
    NSString *_associatedUsername;
    NSString *_fieldClass;
    NSString *_fieldID;
    NSString *_fieldName;
    NSString *_tagName;
    NSString *_uniqueID;
    NSString *_nextControlUniqueID;
    NSString *_placeholder;
    NSString *_value;
    NSString *_passwordRules;
    NSDictionary *_radioButtonInfo;
    NSDictionary *_annotations;
    NSArray *_selectElementInfo;
    NSArray *_autocompleteTokens;
    double _rectLeft;
    double _rectTop;
    double _rectWidth;
    double _rectHeight;
    CDUnion_a3b3b741 _flags;
    int _size;
    int _maxLength;
    int _minLength;
    int _selectionStart;
    int _selectionLength;
    int _autoFillButtonType;
    int _lastAutoFillButtonType;
}

@property (copy, nonatomic, readonly) NSString *addressBookLabel;
@property (copy, nonatomic, readonly) NSDictionary *annotations;
@property (copy, nonatomic, readonly) NSArray *autocompleteTokens;
@property (copy, nonatomic, readonly) NSString *associatedUsername;
@property (copy, nonatomic, readonly) NSString *passwordRules;
@property (copy, nonatomic, readonly) NSString *fieldClass;
@property (copy, nonatomic, readonly) NSString *fieldID;
@property (copy, nonatomic, readonly) NSString *fieldName;
@property (copy, nonatomic, readonly) NSString *tagName;
@property (copy, nonatomic, readonly) NSString *uniqueID;
@property (copy, nonatomic, readonly) NSString *nextControlUniqueID;
@property (copy, nonatomic, readonly) NSString *placeholder;
@property (copy, nonatomic, readonly) NSString *value;
@property (nonatomic, readonly, getter=isVisible) _Bool visible;
@property (nonatomic, readonly, getter=isActive) _Bool active;
@property (nonatomic, readonly, getter=isDisabled) _Bool disabled;
@property (nonatomic, readonly, getter=isReadOnly) _Bool readOnly;
@property (nonatomic, readonly, getter=isTextField) _Bool textField;
@property (nonatomic, readonly, getter=isSecureTextField) _Bool secureTextField;
@property (nonatomic, readonly, getter=isAutoFilledTextField) _Bool autoFilledTextField;
@property (nonatomic, readonly, getter=isUserEditedTextField) _Bool userEditedTextField;
@property (nonatomic, readonly, getter=isLabeledUsernameField) _Bool labeledUsernameField;
@property (nonatomic, readonly) _Bool disallowsAutocomplete;
@property (nonatomic, readonly) _Bool claimsToBeCurrentPasswordViaAutocompleteAttribute;
@property (nonatomic, readonly) _Bool claimsToBeNewPasswordViaAutocompleteAttribute;
@property (nonatomic, readonly) _Bool claimsToBeUsernameViaAutocompleteAttribute;
@property (nonatomic, readonly) _Bool looksLikeCreditCardCardholderField;
@property (nonatomic, readonly) _Bool looksLikeCreditCardCompositeExpirationDateField;
@property (nonatomic, readonly) _Bool looksLikeCreditCardNumberField;
@property (nonatomic, readonly) _Bool looksLikeCreditCardSecurityCodeField;
@property (nonatomic, readonly) _Bool looksLikeCreditCardTypeField;
@property (nonatomic, readonly) _Bool looksLikeDayField;
@property (nonatomic, readonly) _Bool looksLikeMonthField;
@property (nonatomic, readonly) _Bool looksLikeYearField;
@property (nonatomic, readonly) _Bool looksLikeOneTimeCodeField;
@property (nonatomic, readonly) _Bool looksLikeIgnoredDataTypeField;
@property (nonatomic, readonly) _Bool looksLikePasswordCredentialField;
@property (copy, nonatomic, readonly) NSDictionary *radioButtonInfo;
@property (copy, nonatomic, readonly) NSArray *selectElementInfo;
@property (nonatomic, readonly) double rectLeft;
@property (nonatomic, readonly) double rectTop;
@property (nonatomic, readonly) double rectWidth;
@property (nonatomic, readonly) double rectHeight;
@property (nonatomic, readonly) unsigned long long size;
@property (nonatomic, readonly) unsigned long long maxLength;
@property (nonatomic, readonly) unsigned long long minLength;
@property (nonatomic, readonly) unsigned long long selectionStart;
@property (nonatomic, readonly) unsigned long long selectionLength;
@property (nonatomic, readonly) long long autoFillButtonType;
@property (nonatomic, readonly) long long lastAutoFillButtonType;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryRepresentation;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithMetadata:(id)arg1;

@end
