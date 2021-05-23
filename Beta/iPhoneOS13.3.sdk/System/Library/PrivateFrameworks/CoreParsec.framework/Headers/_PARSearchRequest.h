/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSData, NSString, _PARLocation, _PARMapsSession, _PARSilhouette, _PARSubscriptions;

__attribute__((visibility("hidden")))
@interface _PARSearchRequest : PBCodable

{
    _Bool _managedDevice;
    _Bool _hsEnabled;
    _Bool _internalBuild;
    _Bool _seedBuild;
    int _queryType;
    int _sendTopHit;
    int _tempUnit;
    int _measurementSystem;
    int _hourFormat;
    int _routineMode;
    int _transportationMode;
    float _uiScale;
    int _suggest;
    int _lookupSelectionType;
    NSString *_query;
    NSString *_secretKey;
    NSString *_countryCode;
    NSString *_locale;
    NSString *_effectiveSystemLanguage;
    NSArray *_preferredLanguages;
    NSString *_inputMode;
    NSString *_calendar;
    NSString *_timeZone;
    NSString *_modelVersionL2;
    NSString *_modelVersionL3;
    NSArray *_localSuggestions;
    NSData *_dictionarySignature;
    _PARSilhouette *_silhouette;
    _PARLocation *_location;
    NSData *_installedAppsSignature;
    NSString *_storeFront;
    _PARSubscriptions *_subscriptions;
    NSString *_userGUID;
    _PARMapsSession *_mapsSession;
    NSString *_queryLanguage;
    NSString *_lookupAppBundleId;
    NSString *_lookupHintDomain;
    NSString *_siriLocale;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) int queryType;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *secretKey;
@property (nonatomic) int sendTopHit;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *locale;
@property (copy, nonatomic) NSString *effectiveSystemLanguage;
@property (copy, nonatomic) NSArray *preferredLanguages;
@property (copy, nonatomic) NSString *inputMode;
@property (copy, nonatomic) NSString *calendar;
@property (copy, nonatomic) NSString *timeZone;
@property (nonatomic) int tempUnit;
@property (nonatomic) int measurementSystem;
@property (nonatomic) int hourFormat;
@property (copy, nonatomic) NSString *modelVersionL2;
@property (copy, nonatomic) NSString *modelVersionL3;
@property (copy, nonatomic) NSArray *localSuggestions;
@property (copy, nonatomic) NSData *dictionarySignature;
@property (retain, nonatomic) _PARSilhouette *silhouette;
@property (retain, nonatomic) _PARLocation *location;
@property (nonatomic) int routineMode;
@property (nonatomic) int transportationMode;
@property (copy, nonatomic) NSData *installedAppsSignature;
@property (nonatomic) _Bool managedDevice;
@property (copy, nonatomic) NSString *storeFront;
@property (retain, nonatomic) _PARSubscriptions *subscriptions;
@property (copy, nonatomic) NSString *userGUID;
@property (nonatomic) float uiScale;
@property (retain, nonatomic) _PARMapsSession *mapsSession;
@property (nonatomic) int suggest;
@property (copy, nonatomic) NSString *queryLanguage;
@property (copy, nonatomic) NSString *lookupAppBundleId;
@property (copy, nonatomic) NSString *lookupHintDomain;
@property (nonatomic) int lookupSelectionType;
@property (copy, nonatomic) NSString *siriLocale;
@property (nonatomic) _Bool hsEnabled;
@property (nonatomic) _Bool internalBuild;
@property (nonatomic) _Bool seedBuild;
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
- (void)addLocalSuggestions:(id)arg1;
- (void)clearLocalSuggestions;
- (unsigned long long)localSuggestionsCount;
- (id)localSuggestionsAtIndex:(unsigned long long)arg1;

@end
