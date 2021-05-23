/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHAssetCollection.h>

@class NSDate, NSString;

@interface PHMoment : PHAssetCollection

{
    unsigned short _processedLocation;
    int _timeZoneOffset;
    float _aggregationScore;
    NSDate *_representativeDate;
    NSDate *_modificationDate;
    NSString *_subtitle;
    double _approximateLatitude;
    double _approximateLongitude;
}

@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic) unsigned short processedLocation;
@property (nonatomic, readonly) NSDate *universalStartDate;
@property (nonatomic, readonly) NSDate *universalEndDate;
@property (nonatomic, readonly) NSString *processedLocationTypeString;
@property (nonatomic, readonly) double approximateLatitude;
@property (nonatomic, readonly) double approximateLongitude;
@property (nonatomic, readonly) NSDate *localStartDate;
@property (nonatomic, readonly) NSDate *localEndDate;
@property (nonatomic, readonly) int timeZoneOffset;
@property (nonatomic, readonly) NSDate *representativeDate;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) float aggregationScore;

+ (id)managedEntityName;
+ (id)fetchType;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)identifierCode;
+ (_Bool)managedObjectSupportsTrashedState;
+ (id)entityKeyMap;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)fetchMomentUUIDByAssetUUIDForAssets:(id)arg1 options:(id)arg2;
+ (id)fetchMomentUUIDByAssetUUIDForAssetUUIDs:(id)arg1 options:(id)arg2;
+ (id)_fetchMomentUUIDByAssetUUIDForAssetUUIDs:(id)arg1 photoLibrary:(id)arg2;

- (id)description;
- (id)localizedTitle;
- (id)localizedSubtitle;
- (_Bool)hasLocationInfo;
- (_Bool)canPerformEditOperation:(long long)arg1;
- (_Bool)canShowAvalancheStacks;
- (id)localizedLocationNames;
- (_Bool)collectionHasFixedOrder;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (Class)changeRequestClass;
- (void)_cacheLocationWithCoordinate:(struct CLLocationCoordinate2D)arg1;

@end
