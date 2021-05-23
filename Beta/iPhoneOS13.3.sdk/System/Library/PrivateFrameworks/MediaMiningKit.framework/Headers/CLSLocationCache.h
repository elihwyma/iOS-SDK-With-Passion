/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <MediaMiningKit/CLSDBCache.h>

@class NSPredicate;

@interface CLSLocationCache : CLSDBCache

{
    NSPredicate *_entryPredicateWithContactsPostalAddressTemplate;
    NSPredicate *_entryPredicateWithAddressBookDictionaryTemplate;
    NSPredicate *_entryPredicateWithCoordinateTemplate;
    NSPredicate *_entryPredicateWithAddressTemplate;
    NSPredicate *_entryPredicateWithMUID;
}

+ (id)defaultCacheName;
+ (_Bool)cachedCoordinate:(struct CLLocationCoordinate2D)arg1 isMatchingOtherCoordinate:(struct CLLocationCoordinate2D)arg2;
+ (_Bool)cachedCoordinate:(struct CLLocationCoordinate2D)arg1 isMatchingOtherCoordinate:(struct CLLocationCoordinate2D)arg2 withAccuracy:(double)arg3;

- (id)initWithDiskCacheName:(id)arg1;
- (void)invalidateCacheForLocationCoordinate:(struct CLLocationCoordinate2D)arg1;
- (id)dataModelName;
- (id)predicateForCoordinate:(struct CLLocationCoordinate2D)arg1 withAccuracy:(double)arg2;
- (id)nearestEntryForCoordinate:(struct CLLocationCoordinate2D)arg1 entries:(id)arg2;
- (_Bool)hasCoordinate:(struct CLLocationCoordinate2D)arg1;
- (_Bool)hasCoordinate:(struct CLLocationCoordinate2D)arg1 withAccuracy:(double)arg2;
- (void)setPlacemarks:(id)arg1 forLocation:(id)arg2;
- (void)insertBatchesOfPlacemarks:(id)arg1 forLocationCoordinates:(id)arg2;
- (void)setPlacemarks:(id)arg1 forLocationCoordinate:(struct CLLocationCoordinate2D)arg2;
- (id)placemarksForLocationCoordinate:(struct CLLocationCoordinate2D)arg1 withAccuracy:(double)arg2;
- (id)placemarksForLocationCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)setPlacemarks:(id)arg1 forLocationAddress:(id)arg2;
- (id)placemarksForLocationAddress:(id)arg1;
- (void)setPlacemarks:(id)arg1 forAddressDictionary:(id)arg2;
- (id)placemarksForAddressDictionary:(id)arg1;
- (void)setPlacemarks:(id)arg1 forPostalAddress:(id)arg2;
- (id)placemarksForPostalAddress:(id)arg1;
- (id)placemarksForLocation:(id)arg1;
- (id)placemarksForLocation:(id)arg1 withAccuracy:(double)arg2;
- (id)_stringifyAddressDictionaryValues:(id)arg1;
- (id)_stringifyCircularRegionValue:(id)arg1;
- (id)_stringifyPostalAddress:(id)arg1;
- (void)setPlacemark:(id)arg1 forMUID:(unsigned long long)arg2;
- (id)placemarkForMUID:(unsigned long long)arg1;
- (void)invalidateCacheForMUID:(unsigned long long)arg1;
- (void)invalidateCacheItemsBeforeDateWithTimestamp:(double)arg1;
- (id)fetchPlacemarkForLocation:(id)arg1 withAccuracy:(double)arg2;
- (void)_setPlacemarks:(id)arg1 forEntryWithPredicate:(id)arg2 entrySetupBlock:(CDUnknownBlockType)arg3;
- (id)_litePlacemarksFromManagedPlacemarks:(id)arg1;
- (id)_insertManagedPlacemarksForLitePlacemarks:(id)arg1 inContext:(id)arg2;
- (id)_insertManagedPlacemarkForLitePlacemark:(id)arg1 inContext:(id)arg2;
- (id)_litePlacemarkFromManagedPlacemark:(id)arg1;
- (void)invalidateCacheForGeoServiceProviderChangeToProvider:(id)arg1;

@end
