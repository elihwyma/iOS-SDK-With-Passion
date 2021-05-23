/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

#import <Contacts/Swift-Protocol.h>

@class NSString;

@interface CNPhoneNumber : NSObject <Swift>

{
    NSString *_initialCountryCode;
    NSString *_stringValue;
    struct os_unfair_lock_s _stateLock;
    struct __CFPhoneNumber *_phoneNumberRef;
}

@property (copy, nonatomic, readonly) NSString *initialCountryCode;
@property (copy, nonatomic, readonly) NSString *countryCode;
@property (copy, nonatomic, readonly) NSString *digits;
@property (copy, nonatomic, readonly) NSString *formattedStringValue;
@property (copy, nonatomic, readonly) NSString *formattedInternationalStringValue;
@property (copy, nonatomic, readonly) NSString *unformattedInternationalStringValue;
@property (copy, nonatomic, readonly) NSString *stringValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)new;
+ (_Bool)supportsSecureCoding;
+ (id)phoneNumberWithStringValue:(id)arg1;
+ (id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2;
+ (id)phoneNumberWithCopiedStringValue:(id)arg1;
+ (id)defaultCountryCode;
+ (struct __CFPhoneNumber *)createCFPhoneNumberForStringValue:(id)arg1 countryCode:(id)arg2;
+ (_Bool)_isCountryCodeForNorthAmericanDialingPlan:(id)arg1;
+ (id)_countryCodeForNorthAmericanDialingPlanAreaCodesExcludingUS;
+ (id)_countryCodesForNorthAmericanDialingPlan;
+ (id)unsupportedCountryCodes;
+ (id)dialingCodeForISOCountryCode:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isValid:(id *)arg1;
- (id)initWithStringValue:(id)arg1;
- (_Bool)isLikePhoneNumberForSamePerson:(id)arg1;
- (id)primitiveInitWithStringValue:(id)arg1 countryCode:(id)arg2;
- (id)initWithStringValue:(id)arg1 countryCode:(id)arg2;
- (_Bool)isLikePhoneNumber:(id)arg1;
- (struct __CFPhoneNumber *)phoneNumberRef;
- (struct __CFPhoneNumber *)nts_lazyPhoneNumberRef;
- (id)stringValueWithCFPhoneNumberOptions:(unsigned long long)arg1;
- (id)_countryCodeFromPhoneNumberRef;
- (id)_determineCorrectCountryCodeForNorthAmericanDialingPlan;
- (id)fullyQualifiedDigits;
- (id)lastFourDigits;
- (_Bool)isFullyQualified;
- (id)digitsRemovingDialingCode;
- (id)formattedStringValueRemovingDialingCode;

@end
