/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class MNCommuteDestinationUpdater, MNLocation, MNLocationHistory, MNNavigationTraceManager, MNObserverHashTable, MNSuggestionsManager, NSArray, NSMutableDictionary, NSString, NSTimer;

@protocol MNCommuteSessionObserver;

@interface MNCommuteSession : NSObject

{
    MNObserverHashTable<MNCommuteSessionObserver> *_observers;
    MNSuggestionsManager *_suggestionsManager;
    NSMutableDictionary *_suggestions;
    NSArray *_rankedDestinations;
    id _rankedDestinationsSync;
    NSTimer *_etaUpdateTimer;
    MNNavigationTraceManager *_traceManager;
    unsigned long long _currentSuggestionID;
    MNLocation *_lastLocation;
    MNLocationHistory *_locationHistory;
    unsigned long long _commuteSessionState;
    MNCommuteDestinationUpdater *_comparisonDestinationStartTime;
    unsigned long long _requestedCommuteSessionState;
}

@property (weak, nonatomic) MNCommuteDestinationUpdater *comparisonDestinationStartTime;
@property (nonatomic) unsigned long long requestedCommuteSessionState;
@property (nonatomic) unsigned long long commuteSessionState;
@property (nonatomic, readonly) MNNavigationTraceManager *traceManager;
@property (nonatomic, readonly) NSArray *rankedDestinations;
@property (readonly) NSString *suggestionsDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerDidReset:(id)arg1;
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)addSuggestion:(id)arg1;
- (void)updateLocation:(id)arg1;
- (void)commuteDestination:(id)arg1 didChangeInvalid:(_Bool)arg2;
- (void)suggestionsManager:(id)arg1 didAddSuggestion:(id)arg2;
- (void)destinationUpdater:(id)arg1 didUpdateDestination:(id)arg2;
- (void)destinationUpdaterDidArrive:(id)arg1;
- (void)startETAUpdatesWithInterval:(double)arg1;
- (void)stopETAUpdates;
- (void)_updateSuggestionsManagerState;
- (void)_updatedDestinations;
- (void)updateComparisonStartDate;
- (void)_resetRankedDestinations;
- (id)initWithTraceName:(id)arg1 isTraceRecording:(_Bool)arg2;

@end
