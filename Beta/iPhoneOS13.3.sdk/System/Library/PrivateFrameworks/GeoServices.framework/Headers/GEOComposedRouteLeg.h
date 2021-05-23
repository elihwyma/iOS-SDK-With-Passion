/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class GEOComposedRoute, GEOPBTransitStop, NSArray;

@interface GEOComposedRouteLeg : NSObject <Swift>

{
    GEOComposedRoute *_composedRoute;
    long long _type;
    struct _NSRange _pointRange;
    struct _NSRange _stepRange;
}

@property (weak, nonatomic) GEOComposedRoute *composedRoute;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) int transportType;
@property (nonatomic, readonly) struct _NSRange pointRange;
@property (nonatomic, readonly) struct _NSRange stepRange;
@property (nonatomic, readonly) struct _NSRange transitStepRange;
@property (nonatomic, readonly) unsigned int startPointIndex;
@property (nonatomic, readonly) unsigned int endPointIndex;
@property (nonatomic, readonly) unsigned int pointCount;
@property (nonatomic, readonly) unsigned long long startStepIndex;
@property (nonatomic, readonly) unsigned long long endStepIndex;
@property (nonatomic, readonly) unsigned long long stepCount;
@property (nonatomic, readonly) NSArray *steps;
@property (nonatomic, readonly) double expectedTime;
@property (nonatomic, readonly) unsigned long long numberOfTransitStops;
@property (nonatomic, readonly) GEOPBTransitStop *startingTransitStop;
@property (nonatomic, readonly) GEOPBTransitStop *endingTransitStop;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)contains:(id)arg1;
- (id)initWithComposedRoute:(id)arg1 routeLegType:(long long)arg2 stepRange:(struct _NSRange)arg3 pointRange:(struct _NSRange)arg4;
- (_Bool)_MapsCarPlay_isEqual:(id)arg1;
- (double)remainingTimeAlongLegFromStepIndex:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2;
- (double)remainingDistanceAlongLegFromStepIndex:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2;

@end
