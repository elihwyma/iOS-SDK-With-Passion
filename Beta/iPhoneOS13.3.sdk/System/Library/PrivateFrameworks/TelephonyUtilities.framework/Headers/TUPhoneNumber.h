/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/Swift-Protocol.h>

@class NSString;

@interface TUPhoneNumber : NSObject <Swift>

{
    struct __CFPhoneNumber *_phoneNumberRef;
}

@property struct __CFPhoneNumber *phoneNumberRef;
@property (readonly) NSString *digits;
@property (readonly) NSString *countryCode;
@property (readonly) NSString *formattedRepresentation;
@property (readonly) NSString *formattedInternationalRepresentation;
@property (readonly) NSString *unformattedInternationalRepresentation;

+ (_Bool)supportsSecureCoding;
+ (id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2;
+ (_Bool)areDigits:(id)arg1 equalToDigits:(id)arg2 usingCountryCode:(id)arg3;
+ (id)phoneNumberWithCFPhoneNumberRef:(struct __CFPhoneNumber *)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDigits:(id)arg1 countryCode:(id)arg2;
- (id)initWithCFPhoneNumberRef:(struct __CFPhoneNumber *)arg1;

@end
