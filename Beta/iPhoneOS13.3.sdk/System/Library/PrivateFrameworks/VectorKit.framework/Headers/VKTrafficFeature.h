/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class GEOLatLng, NSString;

@interface VKTrafficFeature : NSObject

{
    struct PolylineCoordinate _approachingRouteOffset;
    double _approachingDistanceInMeters;
    long long _state;
    NSString *_uniqueIdentifier;
    unsigned int _priority;
    int _groupIdentifier;
    Matrix_6e1d3589 _worldPoint;
    GEOLatLng *_position;
    CDStruct_2c43369c _location;
    float _minZoom;
    float _maxZoom;
    struct PolylineCoordinate _routeOffset;
    long long _trafficFeatureType;
    _Bool _shouldUpdateStyle;
}

@property (nonatomic) _Bool shouldUpdateStyle;
@property (nonatomic, readonly) Mercator2_57ec32b6 mercatorPoint;
@property (nonatomic) Matrix_6e1d3589 worldPoint;
@property (nonatomic) CDStruct_c3b9c2ee location;
@property (nonatomic, readonly) long long trafficFeatureType;
@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) int groupIdentifier;
@property (copy, nonatomic) GEOLatLng *position;
@property (nonatomic) struct PolylineCoordinate routeOffset;
@property (nonatomic) float minZoom;
@property (nonatomic) float maxZoom;
@property (nonatomic) long long labelState;
@property (nonatomic) struct PolylineCoordinate approachingRouteOffset;
@property (nonatomic, readonly) double approachingDistanceInMeters;
@property (nonatomic, readonly) unsigned int priority;
@property (nonatomic, readonly) _Bool isGrouped;

+ (id)newTrafficFeatureForEnrouteNotice:(id)arg1 onRoute:(id)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id).cxx_construct;
- (id)initWithType:(long long)arg1;
- (_Bool)isSignal;
- (_Bool)isCamera;
- (_Bool)isIncident;
- (_Bool)isAheadButNotApproaching;
- (_Bool)isApproaching;
- (void)updateLabelStateForRouteUserOffset:(const struct PolylineCoordinate *)arg1;
- (id)initWithEnrouteNotice:(id)arg1;
- (_Bool)isBehind;

@end
