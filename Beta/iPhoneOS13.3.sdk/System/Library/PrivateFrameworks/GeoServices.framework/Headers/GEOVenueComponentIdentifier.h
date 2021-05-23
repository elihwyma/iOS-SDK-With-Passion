/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSArray, NSString;

@protocol GEOVenueFloorInfo;

@interface GEOVenueComponentIdentifier : NSObject

{
    _Bool _hasBuildingID;
    unsigned long long _buildingID;
    id <GEOVenueFloorInfo> _floorInfo;
    NSArray *_sectionIDs;
    _Bool _hasUnitID;
    unsigned long long _unitID;
    _Bool _hasFixtureID;
    unsigned long long _fixtureID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=_hasBuildingID) _Bool hasBuildingID;
@property (nonatomic, readonly) unsigned long long buildingID;
@property (nonatomic, readonly) id <GEOVenueFloorInfo> floorInfo;
@property (nonatomic, readonly) NSArray *sectionIDs;
@property (nonatomic, readonly, getter=_hasUnitID) _Bool hasUnitID;
@property (nonatomic, readonly) unsigned long long unitID;
@property (nonatomic, readonly, getter=_hasFixtureID) _Bool hasFixtureID;
@property (nonatomic, readonly) unsigned long long fixtureID;

- (id)init;
- (id)initWithBuildingID:(unsigned long long)arg1;
- (id)initWithBuildingID:(unsigned long long)arg1 floorInfo:(id)arg2;
- (id)initWithBuildingID:(unsigned long long)arg1 floorInfo:(id)arg2 unitID:(unsigned long long)arg3;
- (id)initWithBuildingID:(unsigned long long)arg1 floorInfo:(id)arg2 fixtureID:(unsigned long long)arg3;
- (id)initWithVenueIdentifier:(id)arg1;

@end
