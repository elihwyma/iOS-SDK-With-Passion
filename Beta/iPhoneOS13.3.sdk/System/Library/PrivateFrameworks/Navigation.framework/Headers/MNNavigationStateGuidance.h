/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/MNNavigationState.h>

@class MNNavigationSessionManager, MNStartNavigationDetails;

@interface MNNavigationStateGuidance : MNNavigationState

{
    MNNavigationSessionManager *_navigationSessionManager;
    MNStartNavigationDetails *_startDetails;
}

+ (id)guidanceStateForStartDetails:(id)arg1 stateManager:(id)arg2 navigationSessionManager:(id)arg3;

- (void)enterState;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setIsConnectedToCarplay:(_Bool)arg1;
- (id)currentDestination;
- (void)stopNavigation;
- (void)updateDestination:(id)arg1;
- (void)resumeOriginalDestination;
- (void)switchToRoute:(id)arg1;
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
- (void)updateGuidanceWithData:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)pauseRealtimeUpdatesForSubscriber:(id)arg1;
- (void)resumeRealtimeUpdatesForSubscriber:(id)arg1;
- (id)traceManager;
- (id)initWithStateManager:(id)arg1 navigationSessionManager:(id)arg2 startDetails:(id)arg3;
- (void)leaveState;
- (_Bool)requiresHighMemoryThreshold;
- (unsigned long long)desiredLocationProviderType;
- (_Bool)shouldClearStoredRoutes;
- (void)preEnterState;

@end
