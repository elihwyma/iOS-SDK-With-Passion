/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOMapRegion, GEOPlace, NSString;

@interface GEOMapItemAdditionalPlaceInfo : NSObject

{
    GEOPlace *_place;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) int placeType;
@property (nonatomic, readonly) double areaInMeters;
@property (nonatomic, readonly) CDStruct_c3b9c2ee coordinate;
@property (nonatomic, readonly) GEOMapRegion *mapRegion;

- (id)initWithPlace:(id)arg1;
- (id)initWithName:(id)arg1 placeType:(int)arg2 areaInMeters:(double)arg3;

@end
