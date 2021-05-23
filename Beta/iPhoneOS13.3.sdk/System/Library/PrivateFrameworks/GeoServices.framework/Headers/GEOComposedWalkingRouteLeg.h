/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOComposedRouteLeg.h>

@class GEOComposedTransitWalkingRouteStep, GEOComposedWalkingRouteStep;

@protocol GEOTransitRoutingIncidentMessage;

@interface GEOComposedWalkingRouteLeg : GEOComposedRouteLeg

{
    unsigned long long _transitIncidentMessageStepIndex;
}

@property (nonatomic, readonly) unsigned long long transitIncidentMessageStepIndex;
@property (nonatomic, readonly) id <GEOTransitRoutingIncidentMessage> transitSteppingIncidentMessage;
@property (nonatomic, readonly) id <GEOTransitRoutingIncidentMessage> transitRouteDetailsIncidentMessage;
@property (nonatomic, readonly) GEOComposedWalkingRouteStep *lastWalkingStep;
@property (nonatomic, readonly) GEOComposedTransitWalkingRouteStep *arrivalStep;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithComposedRoute:(id)arg1 stepRange:(struct _NSRange)arg2 pointRange:(struct _NSRange)arg3 transitIncidentMessageStepIndex:(unsigned long long)arg4;
- (id)_transitIncidentMessageStep;

@end
