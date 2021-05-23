/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/MNSteppingLocationTracker.h>

@class GEORoadMatcher, GEOTransitRouteMatcher, MNLocation, NSDate;

__attribute__((visibility("hidden")))
@interface MNTransitLocationTracker : MNSteppingLocationTracker

{
    GEOTransitRouteMatcher *_transitRouteMatcher;
    GEORoadMatcher *_roadMatcher;
    NSDate *_lastLocationTimestamp;
    NSDate *_lastAccurateLocationDate;
    MNLocation *_lastMatchedLocation;
    NSDate *_startDate;
    _Bool _hasArrived;
    _Bool _debugSnapToTransitLines;
}

@property (nonatomic) _Bool debugSnapToTransitLines;

- (int)transportType;
- (void)stopTracking;
- (void)startTracking;
- (id)_matchedLocationForLocation:(id)arg1;
- (id)initWithNavigationSession:(id)arg1;
- (_Bool)_isInaccurateLocation:(id)arg1;
- (id)_locationForInaccurateLocation:(id)arg1;
- (double)_timeToDisplayStaleGPSLocation;
- (id)_correctedLocationForLocation:(id)arg1;
- (id)_roadMatchForOffRouteLocation:(id)arg1 routeMatch:(id)arg2;

@end
