/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class CLLocation, CalGeocoder, EKTravelEngineHypothesis, EKTravelEngineOriginalEvent, EKTravelEngineThrottle, NSData, NSString;

@protocol CALNRouteHypothesizer, CALNRouteHypothesizerProvider, OS_dispatch_queue;

@interface EKTravelEngineAgendaEntry : NSObject

{
    _Bool _dismissed;
    _Bool _geocodedEventEncountered;
    _Bool _hypothesizerSentAtLeastOneHypothesis;
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _entrySignificantlyChangedBlock;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    EKTravelEngineOriginalEvent *_originalEventInternal;
    EKTravelEngineThrottle *_throttle;
    CalGeocoder *_geocoder;
    id <CALNRouteHypothesizerProvider> _hypothesizerProvider;
    id <CALNRouteHypothesizer> _hypothesizer;
    EKTravelEngineHypothesis *_latestHypothesis;
    CLLocation *_geoLocation;
    NSData *_mapKitHandle;
    long long _travelTimeThresholdExceededState;
    double _maximumTravelDurationEncountered;
    NSString *_agendaEntryIdentifier;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) EKTravelEngineOriginalEvent *originalEventInternal;
@property (retain, nonatomic) EKTravelEngineThrottle *throttle;
@property (retain, nonatomic) CalGeocoder *geocoder;
@property (nonatomic, readonly) id <CALNRouteHypothesizerProvider> hypothesizerProvider;
@property (retain, nonatomic) id <CALNRouteHypothesizer> hypothesizer;
@property (retain, nonatomic) EKTravelEngineHypothesis *latestHypothesis;
@property (retain, nonatomic) CLLocation *geoLocation;
@property (retain, nonatomic) NSData *mapKitHandle;
@property (nonatomic) _Bool geocodedEventEncountered;
@property (nonatomic) _Bool hypothesizerSentAtLeastOneHypothesis;
@property (nonatomic) long long travelTimeThresholdExceededState;
@property (nonatomic) double maximumTravelDurationEncountered;
@property (retain, nonatomic) NSString *agendaEntryIdentifier;
@property (nonatomic, readonly) EKTravelEngineOriginalEvent *originalEvent;
@property (copy, nonatomic) CDUnknownBlockType updateBlock;
@property (copy, nonatomic) CDUnknownBlockType entrySignificantlyChangedBlock;
@property (nonatomic) _Bool dismissed;

+ (double)fuzzyMaximumInitialUpdateIntervalBeforeStartDate;
+ (void)_accountForHypothesizerSendingHypothesis;
+ (void)_accountForHypothesizerNeverHavingSentHypothesis;
+ (void)_accountForNoLocationEnhancementNeeded;
+ (void)_accountForGeocodingFailureWithError:(id)arg1;
+ (void)_accountForLocationEnhancementSuccess;

- (void)dealloc;
- (void)reset;
- (void)handleBTAJob:(id)arg1 named:(const char *)arg2;
- (void)requestHypothesisRefreshAtDate:(id)arg1;
- (void)cancelHypothesisRefreshRequest;
- (void)sendFeedbackForPostingLeaveByNotification;
- (void)sendFeedbackForPostingLeaveNowNotification;
- (id)initWithRouteHypothesizerProvider:(id)arg1;
- (void)updateWithOriginalEvent:(id)arg1;
- (void)_uninstallRequestHypothesisRefreshTimer;
- (void)_clearEverything;
- (void)_createEmissionHypothesisRefreshTimerWithDate:(id)arg1;
- (void)cancelEmissionHypothesisRefresh;
- (void)_enhanceLocation;
- (void)_hypothesisRefreshTimerFired;
- (void)_uninstallEmissionHypothesisRefreshTimer;
- (void)_createHypothesisRequestRefreshTimerWithDate:(id)arg1;
- (id)requestHypothesisRefreshBTAJobName;
- (void)createBTAJobWithName:(id)arg1 atDate:(id)arg2;
- (void)removeBTAJobWithName:(id)arg1;
- (id)emissionHypothesisRefreshBTAJobName;
- (void)_performAnalyticsPostProcessing;
- (void)_sendFeedbackToHypothesizerForPostingNotification:(unsigned long long)arg1;
- (void)_trackTTLCandidateEvent:(id)arg1;
- (void)_accountForTravelDurationThresholdExceededState;
- (void)_accountForMaximumTravelDuration;
- (void)_requestHypothesisRefreshTimerFired:(id)arg1;
- (void)_emissionHypothesisRefreshTimerFired;
- (void)_setUpRouteMonitoring;
- (id)_generateDestination;
- (id)_createSyntheticHypothesis;
- (void)_updateWithHypothesis:(id)arg1;
- (void)_accountForGeocodedEventEncounter;
- (void)_createHypothesizerForDestination:(id)arg1;
- (void)_updateTravelTimeExceededThresholdStateUsingExceededValue:(_Bool)arg1;

@end
