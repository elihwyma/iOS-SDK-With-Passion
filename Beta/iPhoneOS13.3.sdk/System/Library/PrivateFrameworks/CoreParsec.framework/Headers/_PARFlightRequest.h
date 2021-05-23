/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSData, NSString, _PARLocation, _PARMapsSession;

__attribute__((visibility("hidden")))
@interface _PARFlightRequest : PBCodable

{
    int _routineMode;
    int _transportationMode;
    float _uiScale;
    NSString *_query;
    unsigned long long _date;
    NSString *_secretKey;
    NSString *_countryCode;
    NSString *_locale;
    NSString *_effectiveSystemLanguage;
    NSArray *_preferredLanguages;
    NSString *_inputMode;
    _PARLocation *_location;
    NSData *_installedAppsSignature;
    NSString *_userGUID;
    _PARMapsSession *_mapsSession;
    NSString *_flightBundleId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *query;
@property (nonatomic) unsigned long long date;
@property (copy, nonatomic) NSString *secretKey;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *locale;
@property (copy, nonatomic) NSString *effectiveSystemLanguage;
@property (copy, nonatomic) NSArray *preferredLanguages;
@property (copy, nonatomic) NSString *inputMode;
@property (retain, nonatomic) _PARLocation *location;
@property (copy, nonatomic) NSData *installedAppsSignature;
@property (nonatomic) int routineMode;
@property (nonatomic) int transportationMode;
@property (copy, nonatomic) NSString *userGUID;
@property (nonatomic) float uiScale;
@property (retain, nonatomic) _PARMapsSession *mapsSession;
@property (copy, nonatomic) NSString *flightBundleId;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)addPreferredLanguages:(id)arg1;
- (void)clearPreferredLanguages;
- (unsigned long long)preferredLanguagesCount;
- (id)preferredLanguagesAtIndex:(unsigned long long)arg1;

@end
