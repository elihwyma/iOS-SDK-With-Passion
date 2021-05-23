/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class MNCommuteDestination, MNCommuteDestinationGeodesicDistanceScore, MNCommuteDestinationMapsSuggestionsScore, MNCommuteDestinationOffRouteScore, MNCommuteDestinationStartEndTimeScore, MNCommuteLocationTracker, MNLocation, MNNavigationTraceManager, MNTimeAndDistanceUpdater, NSDate, NSDictionary, NSString;

@protocol MNCommuteDestinationUpdaterDelegate;

__attribute__((visibility("hidden")))
@interface MNCommuteDestinationUpdater : NSObject

{
    id <MNCommuteDestinationUpdaterDelegate> _delegate;
    MNCommuteDestination *_commuteDestination;
    MNCommuteLocationTracker *_locationTracker;
    unsigned long long _suggestionID;
    MNNavigationTraceManager *_traceManager;
    MNTimeAndDistanceUpdater *_timeAndDistanceUpdater;
    NSDictionary *_scores;
    MNLocation *_lastLocation;
}

@property (nonatomic, readonly) NSDictionary *scores;
@property (nonatomic, readonly) MNCommuteDestinationGeodesicDistanceScore *geodesicDistanceScore;
@property (nonatomic, readonly) MNCommuteDestinationMapsSuggestionsScore *mapsSuggestionsScore;
@property (nonatomic, readonly) MNCommuteDestinationOffRouteScore *offRouteScore;
@property (nonatomic, readonly) MNCommuteDestinationStartEndTimeScore *startEndTimeScore;
@property (retain, nonatomic) MNLocation *lastLocation;
@property (weak, nonatomic) id <MNCommuteDestinationUpdaterDelegate> delegate;
@property (nonatomic, readonly) MNCommuteDestination *commuteDestination;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic) unsigned long long suggestionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sessionStartDate;
+ (id)scoreClasses;
+ (void)setSessionStartDate:(id)arg1;

- (void)dealloc;
- (void)stop;
- (void)start;
- (id)route;
- (void)updateForLocation:(id)arg1;
- (void)updateETA;
- (void)locationTrackerDidArrive:(id)arg1;
- (void)locationTracker:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)locationTracker:(id)arg1 didUpdateETAForRoute:(id)arg2;
- (void)locationTrackerWillReroute:(id)arg1;
- (void)locationTrackerDidCancelReroute:(id)arg1;
- (void)locationTracker:(id)arg1 didReroute:(id)arg2 newAlternateRoutes:(id)arg3 rerouteReason:(unsigned long long)arg4 request:(id)arg5 response:(id)arg6;
- (void)locationTracker:(id)arg1 didFailRerouteWithError:(id)arg2;
- (id)initWithSuggestion:(id)arg1 traceManager:(id)arg2;
- (void)updateComparisonDestination:(id)arg1 ofType:(unsigned long long)arg2;
- (id)_generateScoreObjects;
- (void)_updateDestination;
- (void)updateLocationHistory:(id)arg1;
- (void)commuteScoreUpdaterDidUpdate:(id)arg1;

@end
