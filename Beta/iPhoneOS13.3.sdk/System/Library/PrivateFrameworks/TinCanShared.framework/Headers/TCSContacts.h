/*
 Image: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
 */

#import <Foundation/NSObject.h>

@interface TCSContacts : NSObject

+ (id)canonicalDestinationsForContact:(id)arg1;
+ (id)_canonicalDestinationForString:(id)arg1;
+ (id)_safeContactDetailStringForLogging:(id)arg1;
+ (id)_unifiedContactWithIdentifier:(id)arg1 orDestination:(id)arg2 usingContactStore:(id)arg3 keysToFetch:(id)arg4;
+ (_Bool)_isUnknownContact:(id)arg1 equalToUnknownContact:(id)arg2;
+ (id)_unifiedMeContactFromContactStore:(id)arg1 keysToFetch:(id)arg2;
+ (id)validatedWhitelistFromDictionary:(id)arg1;
+ (id)_destinationsFromWhitelistDictionary:(id)arg1 onlyAccepted:(_Bool)arg2;
+ (id)_pauseCharacterSet;
+ (id)_unknownContactWithDestination:(id)arg1;
+ (id)_canonicalPhoneNumberFromCNPhoneNumber:(id)arg1;
+ (id)_canonicalPhoneNumberFromPhoneNumberString:(id)arg1;
+ (_Bool)_contact:(id)arg1 hasKeysForFormatterStye:(long long)arg2;
+ (id)_firstPhoneNumberOrEmailAddressFromContact:(id)arg1 formatPhoneNumber:(_Bool)arg2;
+ (_Bool)_isContact:(id)arg1 similarToContact:(id)arg2;
+ (id)_safeContactNameStringForLogging:(id)arg1 handle:(id)arg2;

@end
