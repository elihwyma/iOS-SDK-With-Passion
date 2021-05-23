/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOAddress, GEOLatLng, GEOLocation, GEOMapRegion, NSString;

@interface GEOMapItemBuilder : NSObject

{
    struct {
        unsigned int referenceFrame:1;
    } _has;
    GEOLocation *_location;
    int _referenceFrame;
    GEOAddress *_address;
    GEOMapRegion *_mapRegion;
    GEOLatLng *_latlng;
    NSString *_name;
}

@property (retain, nonatomic) GEOLocation *location;
@property (nonatomic) int referenceFrame;
@property (retain, nonatomic) GEOAddress *address;
@property (retain, nonatomic) GEOMapRegion *mapRegion;
@property (retain, nonatomic) GEOLatLng *latlng;
@property (retain, nonatomic) NSString *name;

+ (id)buildWithSetterBlock:(CDUnknownBlockType)arg1;

- (id)init;
- (id)build;

@end
