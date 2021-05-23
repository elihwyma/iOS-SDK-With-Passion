/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSArray, NSData, NSString, _PARLocation, _PARMapsSession, _PARSilhouette, _PARSubscriptions;

@protocol _PARSearchRequest <Swift>

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

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addPreferredLanguages: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPreferredLanguages;
- (unsigned short)preferredLanguagesCount;
- (unsigned short)preferredLanguagesAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)addLocalSuggestions: /* Error: Ran out of types for this method. */;
- (unsigned short)clearLocalSuggestions;
- (unsigned short)localSuggestionsCount;
- (unsigned short)localSuggestionsAtIndex: /* Error: Ran out of types for this method. */;

@end
