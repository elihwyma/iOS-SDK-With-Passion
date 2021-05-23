/*
 Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <Foundation/NSObject.h>

@class ALSCGreenClient, CPSearchMatcher, NSDate, NSRecursiveLock;

@interface ALCityManager : NSObject

{
    struct sqlite3 *_db;
    struct sqlite3 *_localizedDb;
    CPSearchMatcher *_citySearchMatcher;
    NSRecursiveLock *_databaseAccessRecursiveLock;
    _Bool _greenKey1ValueCache;
    _Bool _greenKey2ValueCache;
    _Bool _greenKey3ValueCache;
    NSDate *_greenKeyValueCacheExpirationDate;
    ALSCGreenClient *_greenClient;
}

@property (readonly) CPSearchMatcher *citySearchMatcher;

+ (id)sharedManager;
+ (id)newCitiesByIdentifierMap:(id)arg1;
+ (id)_localeDictionaryFromSQLRow:(char **)arg1;
+ (id)_displayStringForTaiwanRegionWithKey2Value:(_Bool)arg1;
+ (struct __CFArray *)legacyCityForCity:(id)arg1;
+ (id)displayStringForHongKongSARChina;
+ (id)displayStringForHongKongSAR;
+ (id)displayStringForMacaoSARChina;
+ (id)displayStringForMacaoSAR;
+ (id)displayStringForTaiwanRegion;

- (id)init;
- (void)dealloc;
- (id)citiesMatchingQualifier:(id)arg1;
- (void)localizeCities:(id)arg1;
- (id)citiesMatchingName:(id)arg1 localized:(_Bool)arg2;
- (void)_whileDatabaseLocked_ensureGreenKeyValueCaches;
- (id)_whileDatabaseLocked_localeCodesMatchingQualifier:(id)arg1;
- (id)citiesWithIdentifiers:(id)arg1;
- (void)_whileDatabaseLocked_modifyCityForGreen:(id)arg1;
- (id)_cityForClassicIdentifier:(id)arg1 commaSearchOptions:(unsigned long long)arg2;
- (id)cityForClassicIdentifier:(id)arg1;
- (id)citiesMatchingName:(id)arg1;
- (id)localeWithCode:(id)arg1;
- (id)defaultCitiesForLocaleCode:(id)arg1 options:(int)arg2;
- (id)_defaultCityForTimeZone:(id)arg1 localeCode:(id)arg2;
- (id)_cityForTimeZone:(id)arg1 localeCode:(id)arg2;
- (id)citiesWithTimeZone:(id)arg1;
- (id)allCities;
- (id)bestCityForLegacyCity:(struct __CFArray *)arg1;
- (id)allLocales;
- (id)defaultCitiesForLocaleCode:(id)arg1;
- (id)defaultCitiesShownInWorldClock;
- (id)defaultCityForTimeZone:(id)arg1;
- (id)defaultCityForTimeZone:(id)arg1 localeCode:(id)arg2;

@end
