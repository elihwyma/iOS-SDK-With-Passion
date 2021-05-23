/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEOComposedGuidanceEvent, MNAnnouncementPlanEvent, MNGuidanceSignInfo, MNJunctionViewImageLoader, MNLocation, MNNavigationSession, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSUUID;

@protocol MNAnnoucementStrategy, MNGuidanceManagerDelegate;

@interface MNGuidanceEventManager : NSObject

{
    id <MNGuidanceManagerDelegate> _delegate;
    MNNavigationSession *_navigationSession;
    MNJunctionViewImageLoader *_junctionViewImageLoader;
    NSMutableArray *_events;
    GEOComposedGuidanceEvent *_nextEvent;
    NSDictionary *_eventIndexes;
    NSUUID *_injectedUUID;
    id <MNAnnoucementStrategy> _announcementStrategy;
    NSMutableDictionary *_announcementsSpoken;
    NSMutableSet *_exclusiveSetAnnouncementsSpoken;
    NSMutableDictionary *_hapticsTriggered;
    NSMutableSet *_announcementsSynthesized;
    GEOComposedGuidanceEvent *_currentLaneGuidanceEvent;
    MNGuidanceSignInfo *_signInfo;
    GEOComposedGuidanceEvent *_pendingJunctionViewGuidanceEvent;
    GEOComposedGuidanceEvent *_currentJunctionViewGuidanceEvent;
    NSMutableDictionary *_specialSpokenEvents;
    NSMutableArray *_startSignGuidanceEvents;
    GEOComposedGuidanceEvent *_preArrivalSignGuidanceEvent;
    GEOComposedGuidanceEvent *_endSignGuidanceEvent;
    GEOComposedGuidanceEvent *_previousArrivalSignGuidanceEvent;
    GEOComposedGuidanceEvent *_returnToRouteSignGuidanceEvent;
    _Bool _hasBeenOnRouteOnce;
    _Bool _canSpeakReturnToRouteAnnouncement;
    _Bool _isInPreArrivalState;
    double _timeLastAnnouncementStarted;
    double _timeLastAnnouncementEnded;
    MNAnnouncementPlanEvent *_lastAnnouncementEvent;
    unsigned long long _lastStepIndex;
    _Bool _hasStickyEvents;
    MNLocation *_location;
    double _speed;
    NSMutableArray *_validEvents;
    NSMutableDictionary *_feedback;
    NSArray *_previousSignEvents;
    GEOComposedGuidanceEvent *_previousLaneGuidanceEvent;
}

@property (nonatomic, readonly) NSArray *events;
@property (retain, nonatomic) MNLocation *location;
@property (nonatomic) double speed;
@property (nonatomic) _Bool isInPreArrivalState;
@property (weak, nonatomic) id <MNGuidanceManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)stop;
- (void)reset;
- (void)updateDestination:(id)arg1;
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;
- (void)updateForReroute:(id)arg1;
- (double)timeSinceLastAnnouncement;
- (double)timeUntilNextAnnouncement;
- (double)durationOfEvent:(id)arg1 announcementIndex:(unsigned long long)arg2 distance:(double)arg3;
- (void)updateGuidanceForLocation:(id)arg1 navigatorState:(int)arg2;
- (_Bool)repeatLastGuidanceAnnouncement:(id)arg1;
- (void)addInjectedEvent:(id)arg1;
- (void)updateForReturnToRoute;
- (void)_initSpecialGuidanceEvents;
- (void)_markEventSpoken:(id)arg1;
- (void)_cacheStartingAudioEvents;
- (_Bool)_hasSpokenEvent:(id)arg1;
- (id)_maneuverWithTitle:(id)arg1 detail:(id)arg2 type:(int)arg3 shieldText:(id)arg4 shieldID:(int)arg5;
- (double)_adjustedVehicleSpeed;
- (_Bool)_isValidEvent:(id)arg1;
- (void)_notifySpeechEvent:(id)arg1 variant:(unsigned long long)arg2 ignorePromptStyle:(_Bool)arg3;
- (double)_timeUntilEventTrigger:(id)arg1;
- (void)_cacheAudioEventIfNecessary:(id)arg1;
- (id)_junctionViewEvents;
- (void)_filterValidEvents;
- (void)_cacheValidAudioEvents;
- (void)_stepDidChange;
- (void)_considerAnnouncements;
- (void)_considerHaptics;
- (void)_considerLaneGuidance;
- (void)_considerSignGuidance;
- (void)_considerStickiness;
- (void)_considerJunctionViewGuidance;
- (void)_cacheEndingAudioEvents;
- (_Bool)_isEventValid:(id)arg1 start:(double)arg2 end:(double)arg3;
- (id)_spokenEventsRemainingInStep;
- (int)_indexForEventUUID:(id)arg1;
- (void)_notifyAnalyticsForNewEvents:(id)arg1 previousEvents:(id)arg2;
- (void)_handleJunctionViewInfo:(id)arg1;
- (unsigned int)_trafficColorForRoute:(id)arg1 traffic:(id)arg2 distanceRemaining:(double)arg3;
- (double)_timeRemainingForEvent:(id)arg1;
- (id)_selectAnnouncementForEvent:(id)arg1 withTimeRemaining:(double)arg2 withMinIndex:(unsigned long long)arg3 selectedIndex:(out unsigned long long *)arg4;
- (id)_serverStringDictionaryForEvent:(id)arg1 spoken:(_Bool)arg2;
- (void)timeManagerDidChangeProvider:(id)arg1;
- (id)initWithNavigationSession:(id)arg1 isReconnecting:(_Bool)arg2;
- (_Bool)_shouldUseLocation:(id)arg1;

@end
