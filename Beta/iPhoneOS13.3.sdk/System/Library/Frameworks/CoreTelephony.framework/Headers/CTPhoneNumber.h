/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CTPhoneNumber : NSObject

{
    NSString *_digits;
    NSString *_countryCode;
    _Bool _isShortCode;
    long long _slot;
}

@property (readonly) NSString *digits;
@property (readonly) NSString *countryCode;
@property _Bool isShortCode;

+ (id)phoneNumberWithDigits:(long long)arg1 digits:(id)arg2 countryCode:(id)arg3;
+ (_Bool)isValidPhoneNumber:(id)arg1;
+ (_Bool)isValidPhoneNumberChar:(unsigned short)arg1;
+ (id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDigits:(long long)arg1 digits:(id)arg2 countryCode:(id)arg3;
- (id)encodedString;
- (id)canonicalFormat;
- (id)formatForCallingCountry:(id)arg1;
- (long long)numberOfDigitsForShortCodeNumber:(long long)arg1;
- (long long)numberOfDigitsForShortCodeNumber;
- (id)initWithDigits:(id)arg1 countryCode:(id)arg2;

@end
