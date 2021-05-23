/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class GEOComposedRoute, GEOComposedRouteStep, GEOGuidanceEvent, GEOJunction, GEOJunctionView, GEONameInfo, NSArray, NSMutableArray, NSString, NSUUID;

@interface GEOComposedGuidanceEvent : NSObject <Swift>

{
    NSUUID *_uniqueID;
    unsigned long long _creationOrder;
    GEOGuidanceEvent *_guidanceEvent;
    GEOComposedRoute *_route;
    unsigned long long _source;
    unsigned long long _stepIndex;
    unsigned long long _enrouteNoticeIndex;
    unsigned long long _sourceIndex;
    NSMutableArray *_lanes;
    double _startValidDistance;
    double _endValidDistance;
    double _referencePointDistance;
    double _distanceForStrings;
    GEOJunction *_maneuverJunction;
}

@property (retain, nonatomic) GEOGuidanceEvent *guidanceEvent;
@property (nonatomic, readonly) NSUUID *uniqueID;
@property (nonatomic, readonly) GEOComposedRouteStep *step;
@property (nonatomic, readonly) unsigned long long source;
@property (nonatomic, readonly) unsigned long long enrouteNoticeIndex;
@property (nonatomic, readonly) unsigned long long sourceIndex;
@property (nonatomic, readonly) _Bool hasSignGuidance;
@property (nonatomic, readonly) _Bool hasSpokenGuidance;
@property (nonatomic, readonly) _Bool hasJunctionView;
@property (nonatomic, readonly) unsigned long long stackRanking;
@property (nonatomic, readonly) NSArray *signTitles;
@property (nonatomic, readonly) NSArray *signDetails;
@property (nonatomic, readonly) GEONameInfo *shieldInfo;
@property (nonatomic, readonly) int maneuverArrow;
@property (nonatomic, readonly) int drivingSide;
@property (nonatomic, readonly) GEOJunction *maneuverJunction;
@property (nonatomic, readonly) GEOJunctionView *junctionView;
@property (nonatomic, readonly) NSString *exclusiveSetIdentifier;
@property (nonatomic, readonly) NSArray *announcements;
@property (nonatomic, readonly) double repetitionInterval;
@property (nonatomic, readonly) _Bool hasHaptics;
@property (nonatomic, readonly) _Bool isSticky;
@property (nonatomic, readonly) NSArray *lanes;
@property (nonatomic, readonly) NSArray *laneTitles;
@property (nonatomic, readonly) NSArray *laneInstructions;
@property (nonatomic, readonly) int composedGuidanceEventType;
@property (nonatomic, readonly) _Bool isLaneGuidanceForManeuver;
@property (nonatomic, readonly) unsigned long long numChainedAnnouncements;
@property (nonatomic, readonly) double startValidDistance;
@property (nonatomic, readonly) double endValidDistance;
@property (nonatomic, readonly) double referencePointDistance;
@property (nonatomic, readonly) double distanceForStrings;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)comparePriority:(id)arg1;
- (id)initWithGuidanceEvent:(id)arg1 stepIndex:(unsigned long long)arg2 composedRoute:(id)arg3;
- (void)setRoute:(id)arg1;
- (void)_findSource;
- (unsigned long long)_junctionViewIDForData:(id)arg1;
- (_Bool)_needsLazyInit;
- (void)_lazyInit;
- (double)startDistanceForSpeed:(double)arg1;
- (double)endDistanceForSpeed:(double)arg1;
- (_Bool)isValidForSpeed:(double)arg1;
- (double)triggerDistanceForSpeed:(double)arg1 andDuration:(CDUnknownBlockType)arg2;
- (double)desiredTimeGapToEvent:(id)arg1 chained:(_Bool)arg2;
- (long long)compareFactoringInSpeed:(id)arg1 speed:(double)arg2;

@end
