/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/MNLocationTracker.h>

@class GEORouteMatcher, MNArrivalUpdater, NSString;

__attribute__((visibility("hidden")))
@interface MNSteppingLocationTracker : MNLocationTracker

{
    GEORouteMatcher *_routeMatcher;
    MNArrivalUpdater *_arrivalUpdater;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (int)transportType;
- (void)stopTracking;
- (void)updateLocation:(id)arg1;
- (void)startTracking;
- (id)_matchedLocationForLocation:(id)arg1;
- (id)initWithNavigationSession:(id)arg1;
- (id)matchedLocationForLocation:(id)arg1;
- (void)resetForTracePlayerAtLocation:(id)arg1;
- (void)arrivalUpdaterDidArrive:(id)arg1;

@end
