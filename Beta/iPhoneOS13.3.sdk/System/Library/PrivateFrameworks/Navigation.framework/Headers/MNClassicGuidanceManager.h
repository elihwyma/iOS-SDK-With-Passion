/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEOComposedRoute, GEOComposedRouteStep, GEOComposedWaypoint, MNNavigationSession, NSData, NSString;

@protocol MNGuidanceManagerDelegate;

__attribute__((visibility("hidden")))
@interface MNClassicGuidanceManager : NSObject

{
    GEOComposedRoute *_route;
    int _guidanceState;
    unsigned long long _currentStepIndex;
    double _distanceWhenFirstAnnouncementAllowed;
    double _distanceWhenInitialAnnounced;
    double _distanceWhenPrepareAnnounced;
    double _distanceWhenExecuteAnnounced;
    double _baselineSpeed;
    double _baselineDistance;
    double _minExecutionDistance;
    double _timeLastAnnouncementStarted;
    double _timeLastAnnouncementEnded;
    double _timeUntilNextAnnouncement;
    double _estimateOfTimeToSpeakExecutionAnnouncement;
    _Bool _shouldAnnounceContinueStraight;
    _Bool _shouldSkipInitialAnnounce;
    _Bool _shouldSkipPrepareAnnounce;
    _Bool _shouldSkipExecuteAnnounce;
    _Bool _didAnnounceProceedToRoute;
    _Bool _didAnnounceManeuverContinue;
    _Bool _didAnnounceManeuverInitial;
    _Bool _didAnnounceManeuverPreparation;
    _Bool _didAnnounceManeuverExecution;
    _Bool _didAnnounceSecondaryManeuver;
    _Bool _didAnnounceArrival;
    _Bool _didShowPrimarySign;
    _Bool _didShowSecondarySign;
    id <MNGuidanceManagerDelegate> _delegate;
    MNNavigationSession *_navigationSession;
    GEOComposedWaypoint *_destination;
    unsigned long long _pointIndexForCurrentRoadInfo;
    NSString *_currentRoadName;
    long long _currentShieldType;
    NSString *_currentShieldText;
    CDStruct_61a83fd4 _currentInstructionOptions;
    _Bool _didAnnounceStartOfRoute;
    unsigned long long _countLocationUpdates;
}

@property (retain, nonatomic) NSString *currentRoadName;
@property (retain, nonatomic) NSString *currentShieldText;
@property (nonatomic) CDStruct_61a83fd4 currentInstructionOptions;
@property (weak, nonatomic) id <MNGuidanceManagerDelegate> delegate;
@property (nonatomic, readonly) NSData *remainingRouteZilchData;
@property (nonatomic, readonly) int guidanceState;
@property (nonatomic, readonly) _Bool proceedingToRoute;
@property (nonatomic, readonly) GEOComposedRouteStep *maneuverStep;
@property (nonatomic, readonly) unsigned long long maneuverStepIndex;
@property (nonatomic, readonly) int transportType;
@property (nonatomic, readonly) GEOComposedRoute *route;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)stop;
- (void)updateDestination:(id)arg1;
- (void)updateForReroute:(id)arg1;
- (double)timeSinceLastAnnouncement;
- (double)timeUntilNextAnnouncement;
- (void)_resetStepState;
- (void)_clearCurrentRoadName;
- (id)_getStepAtIndex:(unsigned long long)arg1;
- (id)_nameInfoForContinueSign;
- (id)_nameInfoForCurrentRoad;
- (id)_getStepAtIndex:(unsigned long long)arg1 clampIndexToRange:(_Bool)arg2;
- (unsigned long long)_maneuverStepIndex;
- (id)_announcementForArrival;
- (id)_announcementForStart;
- (id)_updateValidateRouteMatchForLocation:(id)arg1;
- (_Bool)_startingWrongWayForLocation:(id)arg1 navigatorState:(int)arg2 routeMatch:(id)arg3;
- (void)_notifyAnnounceManeuverForStep:(id)arg1 withDistance:(double)arg2 withCombinedGuidance:(int)arg3 playShortPrompt:(_Bool)arg4 isRepeat:(_Bool)arg5 stage:(unsigned long long)arg6 timeLimit:(double)arg7;
- (void)_notifyDisplayManeuverForStep:(id)arg1 withDistance:(double)arg2 allowCombinedGuidance:(_Bool)arg3;
- (_Bool)_updateCheckIfNextStep:(id)arg1 navigatorState:(int)arg2 routeMatch:(id)arg3;
- (_Bool)_updateGuidanceStateWithLocation:(id)arg1 withMatch:(id)arg2 withNavigatorState:(int)arg3 stepChanged:(_Bool *)arg4;
- (unsigned long long)_currentAnnouncementStage;
- (void)updateGuidanceForProceedToRouteAtLocation:(CDStruct_c3b9c2ee)arg1 routeMatch:(id)arg2 remainingTime:(double)arg3 distanceUntilDestination:(double)arg4;
- (void)_updatePrepareForNextStep;
- (_Bool)_updateConsiderContinueAnnouncement:(id)arg1 location:(id)arg2;
- (_Bool)_updateConsiderInitialAnnouncement:(id)arg1 passedManeuverStart:(_Bool)arg2;
- (_Bool)_updateConsiderExecuteAnnouncement:(id)arg1 location:(id)arg2;
- (_Bool)_updateConsiderPrepareAnnouncement:(id)arg1 withMatch:(id)arg2;
- (double)_timeUntilNextAnnouncement:(id)arg1 location:(id)arg2 upcomingStage:(out unsigned long long *)arg3;
- (double)_distanceForSign;
- (id)_getClosestStepWithNameForProceedToRoute:(CDStruct_c3b9c2ee)arg1 routeMatch:(id)arg2;
- (id)_combinedGuidanceForStep:(id)arg1 withType:(int)arg2;
- (void)_notifyAnnounceProceedToRoute:(id)arg1 withClosestStep:(id)arg2 withNamedStep:(id)arg3 andSecondaryStep:(id)arg4 isRepeat:(_Bool)arg5;
- (void)_notifyDisplayManeuverForSecondaryStep:(id)arg1;
- (double)_durationOfLastAnnouncement;
- (double)_adjustedVehicleSpeed:(id)arg1;
- (double)_speedFactor:(id)arg1;
- (double)_calculateExecutionDistance:(id)arg1 withLogging:(_Bool)arg2;
- (double)_estimateTimeToSpeakExecutionAnnouncement;
- (void)_notifyAnnounceContinueAsRepeat:(_Bool)arg1;
- (void)updateGuidanceForLocation:(id)arg1 navigatorState:(int)arg2;
- (_Bool)repeatLastGuidanceAnnouncement:(id)arg1;
- (void)addInjectedEvent:(id)arg1;
- (void)updateForReturnToRoute;
- (id)initWithNavigationSession:(id)arg1 proceedToRoute:(_Bool)arg2 allowMidRouteStart:(_Bool)arg3;
- (_Bool)_hasSubsteps;
- (_Bool)_hasCurrentRoadNameChangedForLocation:(id)arg1;
- (CDStruct_c3b9c2ee)maneuverStepCoordinate;
- (_Bool)_announcementInProgress;

@end
