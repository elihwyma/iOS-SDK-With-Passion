/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEORouteDetails : PBCodable

{
    double _timeSinceRouteResponse;
    int _resultIndex;
    unsigned int _stepID;
    _Bool _isNearCurrentlyDisplayedStep;
    _Bool _isNearRoute;
    _Bool _isUserTrackingOn;
    struct {
        unsigned int has_timeSinceRouteResponse:1;
        unsigned int has_resultIndex:1;
        unsigned int has_stepID:1;
        unsigned int has_isNearCurrentlyDisplayedStep:1;
        unsigned int has_isNearRoute:1;
        unsigned int has_isUserTrackingOn:1;
    } _flags;
}

@property (nonatomic) _Bool hasResultIndex;
@property (nonatomic) int resultIndex;
@property (nonatomic) _Bool hasStepID;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) _Bool hasIsNearRoute;
@property (nonatomic) _Bool isNearRoute;
@property (nonatomic) _Bool hasIsNearCurrentlyDisplayedStep;
@property (nonatomic) _Bool isNearCurrentlyDisplayedStep;
@property (nonatomic) _Bool hasIsUserTrackingOn;
@property (nonatomic) _Bool isUserTrackingOn;
@property (nonatomic) _Bool hasTimeSinceRouteResponse;
@property (nonatomic) double timeSinceRouteResponse;

+ (_Bool)isValid:(id)arg1;
+ (id)routeDetailsWithResultIndex:(int)arg1;
+ (id)routeDetailsWithResultIndex:(int)arg1 stepID:(int)arg2;
+ (id)routeDetailsWithResultIndex:(int)arg1 stepID:(int)arg2 nearRoute:(_Bool)arg3 nearCurrentlyDisplayedStep:(_Bool)arg4 userTrackingOn:(_Bool)arg5 timeSinceResponse:(double)arg6;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)initWithResultIndex:(int)arg1;

@end
