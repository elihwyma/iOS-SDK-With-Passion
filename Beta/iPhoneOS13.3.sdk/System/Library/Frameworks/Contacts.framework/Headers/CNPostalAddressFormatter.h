/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSFormatter.h>

@interface CNPostalAddressFormatter : NSFormatter

{
    long long _style;
}

@property (nonatomic) long long style;

+ (id)stringFromPostalAddress:(id)arg1 style:(long long)arg2;
+ (id)getCountryCodeFromPostalAddress:(id)arg1;
+ (id)specificationForCountry:(id)arg1;
+ (id)fieldArrangementWithString:(id)arg1;
+ (id)_postalToFormatMap;
+ (id)addressValueForFormatKey:(id)arg1 postalAddress:(id)arg2;
+ (id)specificationWithAddressFormatPlist:(id)arg1;
+ (id)localizedStringForPostalAddressString:(id)arg1;
+ (id)fieldLabelMapWithPlist:(id)arg1;
+ (id)postalAddressPropertyKeyForFormatPropertyKey:(id)arg1;
+ (id)supportedCountries;
+ (id)attributedStringFromPostalAddress:(id)arg1 style:(long long)arg2 withDefaultAttributes:(id)arg3;
+ (id)formatPropertyKeyForPostalAddressPropertyKey:(id)arg1;
+ (id)singleLineStringFromPostalAddress:(id)arg1 addCountryName:(_Bool)arg2;
+ (id)localizedCountryNameForISOCountryCode:(id)arg1;

- (id)stringForObjectValue:(id)arg1;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)stringFromPostalAddress:(id)arg1;
- (id)attributedStringFromPostalAddress:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)attributedStringFromPostalAddress:(id)arg1 name:(id)arg2 organization:(id)arg3 attributes:(id)arg4 order:(id *)arg5;
- (id)_addressPropertyKeyForDDResult:(struct __DDResult *)arg1 hasCountry:(_Bool *)arg2;
- (id)countryCodeForCountryName:(id)arg1;
- (id)attributedStringFromPostalAddress:(id)arg1 name:(id)arg2 organization:(id)arg3 attributes:(id)arg4;
- (id)postalAddressFromString:(id)arg1;

@end
