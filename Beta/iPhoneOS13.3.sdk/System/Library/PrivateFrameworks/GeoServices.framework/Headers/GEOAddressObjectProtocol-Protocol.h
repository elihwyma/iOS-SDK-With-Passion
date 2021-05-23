/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class NSString;

@protocol GEOAddressObjectProtocol <Swift>

@property (nonatomic, readonly) NSString *displayLanguage;
@property (nonatomic, readonly) _Bool hasKnownAccuracy;
@property (nonatomic, readonly) int knownAccuracy;

+ (unsigned short)libraryVersion;

- (unsigned short)name;
- (unsigned short)address;
- (unsigned short)addressDictionary;
- (unsigned short)spokenStructuredAddress;
- (unsigned short)phoneticName;
- (unsigned short)phoneticAddress;
- (unsigned short)spokenName;
- (unsigned short)spokenAddress;
- (unsigned short)phoneticLocaleIdentifier;
- (unsigned short)shortAddress;
- (unsigned short)weatherDisplayName;
- (unsigned short)spokenAddressForLocale: /* Error: Ran out of types for this method. */;
- (unsigned short)venueShortAddress;
- (unsigned short)cityDisplayNameWithFallback: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithCurrentCountry;
- (unsigned short)fullAddressWithMultiline:relative: /* Error: Ran out of types for this method. */;
- (unsigned short)venueLabel: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithPlaceDataAddressObject:placeDataAddress:placeDataInfo:placeDataEntity:language:country:phoneticLocale: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithContactAddressDictionary:langauge:country:phoneticLocale: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithCNPostalAddress:langauge:country:phoneticLocale: /* Error: Ran out of types for this method. */;
- (unsigned short)cnPostalAddress;
- (unsigned short)fullAddressWithMultiline: /* Error: Ran out of types for this method. */;
- (unsigned short)fullAddressNoCurrentCountryWithMultiline: /* Error: Ran out of types for this method. */;
- (unsigned short)parkingDisplayName;
- (unsigned short)venueLabel;
- (unsigned short)venueLevel;
- (unsigned short)titlesForMapRect: /* Error: Ran out of types for this method. */;

@end
