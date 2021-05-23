/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString, _GEOAddressObject;

@interface GEOAddressObject : NSObject

{
    _GEOAddressObject *_pimpl;
    int *_knownAccuracy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *displayLanguage;
@property (nonatomic, readonly) _Bool hasKnownAccuracy;
@property (nonatomic, readonly) int knownAccuracy;

+ (id)addressObjectForPlaceData:(id)arg1;
+ (id)addressObjectWithPlaceDataAddressObject:(id)arg1 placeDataAddress:(id)arg2 placeDataInfo:(id)arg3 placeDataEntity:(id)arg4;
+ (_Bool)isLoggingDebug;
+ (_Bool)isMarkingMMStrings;
+ (void)setLoggingDebug:(_Bool)arg1;
+ (id)libraryVersion;
+ (void)markMMStrings:(_Bool)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)name;
- (id)address;
- (id)addressDictionary;
- (id)spokenStructuredAddress;
- (id)phoneticName;
- (id)phoneticAddress;
- (id)spokenName;
- (id)spokenAddress;
- (id)phoneticLocaleIdentifier;
- (id)shortAddress;
- (id)weatherDisplayName;
- (id)spokenAddressForLocale:(id)arg1;
- (id)venueShortAddress;
- (id)cityDisplayNameWithFallback:(_Bool)arg1;
- (id)initWithCurrentCountry;
- (id)fullAddressWithMultiline:(_Bool)arg1 relative:(id)arg2;
- (id)venueLabel:(long long)arg1;
- (id)initWithPlaceDataAddressObject:(id)arg1 placeDataAddress:(id)arg2 placeDataInfo:(id)arg3 placeDataEntity:(id)arg4 language:(id)arg5 country:(id)arg6 phoneticLocale:(id)arg7;
- (id)initWithContactAddressDictionary:(id)arg1 langauge:(id)arg2 country:(id)arg3 phoneticLocale:(id)arg4;
- (id)initWithCNPostalAddress:(id)arg1 langauge:(id)arg2 country:(id)arg3 phoneticLocale:(id)arg4;
- (id)cnPostalAddress;
- (id)fullAddressWithMultiline:(_Bool)arg1;
- (id)fullAddressNoCurrentCountryWithMultiline:(_Bool)arg1;
- (id)parkingDisplayName;
- (id)venueLabel;
- (id)venueLevel;
- (id)titlesForMapRect:(CDStruct_90e2a262)arg1;
- (id)rawBytes;

@end
