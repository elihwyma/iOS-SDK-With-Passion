/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEOApplicationAuditToken, MNNavigationState, MNObserverHashTable, NSString;

@protocol MNNavigationSessionManagerDelegate;

@interface MNNavigationStateManager : NSObject

{
    _Bool _isStarted;
    MNNavigationState *_currentState;
    MNObserverHashTable *_navigationStateObservers;
    GEOApplicationAuditToken *_auditToken;
    id <MNNavigationSessionManagerDelegate> _navigationDelegate;
}

@property (nonatomic, readonly) GEOApplicationAuditToken *auditToken;
@property (weak, nonatomic) id <MNNavigationSessionManagerDelegate> navigationDelegate;
@property (nonatomic, readonly) _Bool isStarted;
@property (nonatomic, readonly) MNNavigationState *currentState;
@property (nonatomic, readonly) unsigned long long currentStateType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)start;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)reset;
- (void)setHeadingOrientation:(int)arg1;
- (void)setCurrentState:(id)arg1;
- (id)_initialState;
- (void)transitionToState:(id)arg1;
- (void)setGuidancePromptsEnabled:(_Bool)arg1;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setIsConnectedToCarplay:(_Bool)arg1;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)stopNavigation;
- (void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;
- (void)startNavigationWithDetails:(id)arg1 activeBlock:(CDUnknownBlockType)arg2;
- (void)startPredictingDestinationsWithHandler:(CDUnknownBlockType)arg1;
- (void)stopPredictingDestinations;
- (void)updateDestination:(id)arg1;
- (void)resumeOriginalDestination;
- (void)switchToRoute:(id)arg1;
- (void)setFullGuidanceMode:(_Bool)arg1;
- (void)changeSettings:(id)arg1;
- (void)repeatCurrentGuidanceWithReply:(CDUnknownBlockType)arg1;
- (void)repeatCurrentTrafficAlertWithReply:(CDUnknownBlockType)arg1;
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)stopCurrentGuidancePrompt;
- (void)setHFPPreference:(_Bool)arg1 forSetting:(id)arg2;
- (void)setCurrentAudioOutputSetting:(id)arg1;
- (void)setRideIndex:(unsigned long long)arg1 forLegIndex:(unsigned long long)arg2;
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;
- (void)acceptReroute:(_Bool)arg1 forTrafficIncidentAlert:(id)arg2;
- (void)setTraceIsPlaying:(_Bool)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTracePosition:(double)arg1;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (void)recordPedestrianTracePath:(id)arg1;
- (void)interfaceHashesWithHandler:(CDUnknownBlockType)arg1;
- (void)updateGuidanceWithData:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)pauseRealtimeUpdatesForSubscriber:(id)arg1;
- (void)resumeRealtimeUpdatesForSubscriber:(id)arg1;
- (void)checkinForNavigationService:(CDUnknownBlockType)arg1;
- (void)commuteSession:(id)arg1 didUpdateDestinations:(id)arg2;
- (void)commuteSessionDidArrive:(id)arg1;
- (void)_replayStateForNewObserver:(id)arg1;
- (id)navSessionDestination;
- (unsigned long long)_stateTypeForState:(id)arg1;
- (void)_changeToDesiredLocationProviderTypeForState:(id)arg1;

@end
