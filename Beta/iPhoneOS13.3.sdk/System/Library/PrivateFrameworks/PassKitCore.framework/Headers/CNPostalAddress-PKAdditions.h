/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <CNPostalAddress.h>

@interface CNPostalAddress (PKAdditions)

+ (id)backwardsCompatiblePostalAddressDictionary:(id)arg1;
+ (id)_ABKeyFromCNKey:(id)arg1;
+ (id)_CNKeyFromABKey:(id)arg1;

- (id)backwardsCompatibleDictionaryRepresentation;
- (id)suggestedCountryCode;
- (id)webServiceDictionaryRepresentation;
- (id)redactedStreetAddress;
- (id)redactedPostalAddress;
- (id)_countryCodeForCountryName:(id)arg1;

@end
