/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOStep, GEOTransitStep;

__attribute__((visibility("hidden")))
@interface _GEOTransitRouteStepInfo : NSObject

{
    long long _routeLegType;
    struct _NSRange _pointRange;
    GEOTransitStep *_transitStep;
    unsigned int _duration;
    GEOStep *_walkingStep;
    struct _NSRange _maneuverPointRange;
}

@property (nonatomic) long long routeLegType;
@property (nonatomic) struct _NSRange pointRange;
@property (retain, nonatomic) GEOTransitStep *transitStep;
@property (nonatomic) unsigned int duration;
@property (retain, nonatomic) GEOStep *walkingStep;
@property (nonatomic) struct _NSRange maneuverPointRange;

@end
