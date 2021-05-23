/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class NSArray, NSData, NSUUID;

@interface GEOComposedRouteTraffic : NSObject <Swift>

{
    NSUUID *_routeID;
    NSArray *_trafficIncidents;
    NSArray *_trafficIncidentOffsets;
    NSData *_trafficColors;
    NSData *_trafficColorOffsets;
    NSArray *_enrouteNotices;
}

@property (retain, nonatomic) NSArray *trafficIncidents;
@property (retain, nonatomic) NSArray *trafficIncidentOffsets;
@property (nonatomic, readonly) NSUUID *routeID;
@property (nonatomic, readonly) unsigned int *trafficColors;
@property (nonatomic, readonly) unsigned long long trafficColorsCount;
@property (nonatomic, readonly) unsigned int *trafficColorOffsets;
@property (nonatomic, readonly) unsigned long long trafficColorOffsetsCount;
@property (nonatomic, readonly) NSArray *enrouteNotices;

+ (_Bool)supportsSecureCoding;
+ (id)trafficForGEORoute:(id)arg1 routeInitializerData:(id)arg2 route:(id)arg3;
+ (id)trafficForNewAlternateRoute:(id)arg1 existingAlternateRoute:(id)arg2 incidents:(id)arg3;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setRoute:(id)arg1;
- (void)setEnrouteNotices:(id)arg1;
- (id)initWithRouteID:(id)arg1;
- (void)setTrafficColors:(id)arg1;
- (void)setTrafficColorOffsets:(id)arg1;
- (void)createTrafficIncidentsForRoute:(id)arg1 initializerData:(id)arg2;
- (id)_colorStringForIndex:(unsigned long long)arg1;
- (id)enrouteNoticeWithIdentifier:(id)arg1;

@end
