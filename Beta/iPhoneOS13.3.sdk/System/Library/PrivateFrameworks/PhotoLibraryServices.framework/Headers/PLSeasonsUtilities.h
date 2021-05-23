/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLSeasonsUtilities : NSObject

+ (id)localizedSeasonNameForDate:(id)arg1 calendar:(id)arg2 locale:(id)arg3;
+ (id)_seasonNameForKey:(id)arg1;
+ (id)_seasonKeyForMonthNumber:(unsigned long long)arg1 locale:(id)arg2;
+ (id)_northernMeteorologicalSeasonKeyForMonthNumber:(unsigned long long)arg1;
+ (id)_southernMeteorologicalSeasonKeyForMonthNumber:(unsigned long long)arg1;
+ (id)_seasonCountryCodesDictionary;
+ (_Bool)isCountryCodePartOfNorthernHemisphere:(id)arg1;
+ (_Bool)isCountryCodePartOfSouthernHemisphere:(id)arg1;

@end
