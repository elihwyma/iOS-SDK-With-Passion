/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNAddressFormats : NSObject

+ (id)addressFormats;
+ (id)addressFormatForCountryCode:(id)arg1;
+ (id)supportedCountries;
+ (id)makeSupportedCountries;
+ (id)defaultKeyboardSettingsDictionary;
+ (id)countryCodeByLocaleLookup;
+ (id)countryCodeByGlobalDefaultsLookup;
+ (id)fallbackCountryCode;
+ (id)usaStateNames;
+ (id)usaStateAbbreviations;

@end
