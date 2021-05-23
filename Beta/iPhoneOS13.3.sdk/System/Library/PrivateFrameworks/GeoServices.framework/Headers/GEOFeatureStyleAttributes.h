/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@interface GEOFeatureStyleAttributes : NSObject <Swift>

{
    CDStruct_1e94be47 *v;
    GEOFeatureStyleAttributes *_sharedAttributes;
    CDStruct_d008d4b8 *extAttrs;
    unsigned char countExtAttrs;
    unsigned char countAttrs;
    BOOL featureType;
}

+ (_Bool)supportsSecureCoding;
+ (id)addressMarkerStyleAttributes;
+ (id)airportStyleAttributes;
+ (id)searchResultStyleAttributes;
+ (id)homeStyleAttributes;
+ (id)workStyleAttributes;
+ (id)transitStationStyleAttributes;
+ (id)parkedCarStyleAttributes;
+ (id)restaurantStyleAttributes;
+ (id)calendarEventStyleAttributes;
+ (id)frequentLocationStyleAttributes;
+ (id)gasStationStyleAttributes;
+ (id)evChargerStyleAttributes;
+ (id)hotelStyleAttributes;
+ (id)carRentalStyleAttributes;
+ (id)ticketedEventStyleAttributes;
+ (id)inviteStyleAttributes;
+ (id)styleAttributesForPlace:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithAttributes:(unsigned int)arg1;
- (void)removeKey:(unsigned int)arg1;
- (BOOL)featureType;
- (_Bool)isLabelPOI;
- (void)replaceAttributes:(const CDStruct_1e94be47 *)arg1 count:(unsigned int)arg2;
- (int)poiType;
- (id)copyWithAirportStyleAttributes;
- (_Bool)isLandmarkPOI;
- (_Bool)isSearchResult;
- (_Bool)isTransit;
- (_Bool)isDrivable;
- (_Bool)isWalkable;
- (_Bool)isRoadPedestrianNavigable;
- (int)walkableSide;
- (int)sidewalkSide;
- (_Bool)isTunnel;
- (_Bool)isBridge;
- (_Bool)isRailway;
- (int)rampType;
- (int)drivingSide;
- (_Bool)hasDrivingSide;
- (id)initWithPlaceDataStyleAttributes:(id)arg1;
- (id)initWithPlaceStyleAttributes:(id)arg1;
- (unsigned int)lineType;
- (void)sort;
- (void)setExtAttributes:(const CDStruct_d008d4b8 *)arg1 count:(unsigned int)arg2;
- (id)initWithSharedStyleAttributes:(id)arg1 extAttributes:(const CDStruct_d008d4b8 *)arg2 extAttributeCount:(unsigned char)arg3;
- (id)initWithStyleAttributes:(id)arg1;
- (id)initWithGEOStyleAttributes:(id)arg1;
- (_Bool)isSuperset:(id)arg1;
- (_Bool)hasAttributes;
- (_Bool)isRamp;
- (int)rampDirection;
- (_Bool)isFreeway;
- (_Bool)isBorder;
- (_Bool)shouldSuppress3DBuildingStrokes;

@end
