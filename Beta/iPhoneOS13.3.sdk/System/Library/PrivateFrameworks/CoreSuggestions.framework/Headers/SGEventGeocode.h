/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@interface SGEventGeocode : NSObject

+ (id)_serialQueue;
+ (_Bool)locationIsAirport:(id)arg1;
+ (_Bool)locationIsGeocoded:(id)arg1;
+ (_Bool)isGeocodeCandidateLocation:(id)arg1 forEvent:(id)arg2;
+ (_Bool)isGeocodeCandidate:(id)arg1;
+ (void)geocodeAddress:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)geocodeAddressWithCanonicalSearch:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)geocodePOIWithName:(id)arg1 ofTypes:(id)arg2 inRegion:(id)arg3 withCallback:(CDUnknownBlockType)arg4;
+ (void)geocodeLocation:(id)arg1 usingMode:(unsigned long long)arg2 withGeoFilters:(id)arg3 withCallback:(CDUnknownBlockType)arg4;
+ (id)dateForUTCDate:(id)arg1 withTimeZone:(id)arg2;
+ (id)geocodeEvent:(id)arg1;
+ (void)geocodeEvent:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (id)poiCategoriesFromString:(id)arg1;

@end
