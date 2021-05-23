/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class NSArray;

@protocol GEOVenueFloorInfo;

@protocol GEOVenueComponentIdentifier <Swift>

@property (nonatomic, readonly, getter=_hasBuildingID) _Bool hasBuildingID;
@property (nonatomic, readonly) unsigned long long buildingID;
@property (nonatomic, readonly) id <GEOVenueFloorInfo> floorInfo;
@property (nonatomic, readonly) NSArray *sectionIDs;
@property (nonatomic, readonly, getter=_hasUnitID) _Bool hasUnitID;
@property (nonatomic, readonly) unsigned long long unitID;
@property (nonatomic, readonly, getter=_hasFixtureID) _Bool hasFixtureID;
@property (nonatomic, readonly) unsigned long long fixtureID;

@end
