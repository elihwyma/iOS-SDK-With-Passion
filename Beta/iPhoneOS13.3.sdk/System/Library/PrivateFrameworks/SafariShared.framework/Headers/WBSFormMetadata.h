/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

#import <SafariShared/Swift-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString, NSURL;

@interface WBSFormMetadata : NSObject <Swift>

{
    NSNumber *_containsAtLeastOneSecureTextField;
    NSArray *_controls;
    _Bool _allowsAutocomplete;
    _Bool _containsActiveElement;
    _Bool _bestForCredentialPreFill;
    _Bool _bestForPageLevelAutoFill;
    _Bool _bestForStreamlinedLogin;
    _Bool _eligibleForAutomaticLogin;
    _Bool _visible;
    _Bool _usesRelAsync;
    _Bool _usesGeneratedPassword;
    _Bool _isSearchForm;
    NSDictionary *_annotations;
    unsigned long long _type;
    NSString *_confirmPasswordElementUniqueID;
    NSString *_firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID;
    NSURL *_action;
    long long _uniqueID;
    NSString *_oldPasswordElementUniqueID;
    NSString *_passwordElementUniqueID;
    NSString *_textSample;
    NSString *_userNameElementUniqueID;
    unsigned long long _requestType;
    NSDictionary *_passwordRequirements;
}

@property (copy, nonatomic) NSDictionary *passwordRequirements;
@property (nonatomic, readonly) _Bool allowsAutocomplete;
@property (copy, nonatomic, readonly) NSDictionary *annotations;
@property (nonatomic, readonly) unsigned long long type;
@property (copy, nonatomic, readonly) NSString *confirmPasswordElementUniqueID;
@property (nonatomic, readonly) _Bool containsActiveElement;
@property (copy, nonatomic, readonly) NSString *firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID;
@property (nonatomic, readonly) NSURL *action;
@property (copy, nonatomic, readonly) NSArray *controls;
@property (nonatomic, readonly) long long uniqueID;
@property (nonatomic, readonly, getter=isBestForCredentialPreFill) _Bool bestForCredentialPreFill;
@property (nonatomic, readonly, getter=isBestForPageLevelAutoFill) _Bool bestForPageLevelAutoFill;
@property (nonatomic, readonly, getter=isBestForStreamlinedLogin) _Bool bestForStreamlinedLogin;
@property (nonatomic, readonly, getter=isEligibleForAutomaticLogin) _Bool eligibleForAutomaticLogin;
@property (nonatomic, readonly, getter=isVisible) _Bool visible;
@property (nonatomic, readonly) _Bool usesRelAsync;
@property (copy, nonatomic, readonly) NSString *oldPasswordElementUniqueID;
@property (copy, nonatomic, readonly) NSString *passwordElementUniqueID;
@property (copy, nonatomic, readonly) NSString *textSample;
@property (copy, nonatomic, readonly) NSString *userNameElementUniqueID;
@property (nonatomic, readonly) _Bool usesGeneratedPassword;
@property (nonatomic, readonly) unsigned long long requestType;
@property (nonatomic, readonly) _Bool isSearchForm;
@property (nonatomic, readonly) _Bool containsAtLeastOneSecureTextField;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryRepresentation;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)formMetadataByReplacingControlsWith:(id)arg1;
- (id)initWithJSValue:(id)arg1;

@end
