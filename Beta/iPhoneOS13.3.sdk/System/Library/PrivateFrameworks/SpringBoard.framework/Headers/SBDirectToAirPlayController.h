/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class AVExternalPlaybackMonitor, AVRoutingSessionDestination, AVRoutingSessionManager, MPMediaControlsStatusBarStyleOverridesCoordinator, NSArray, NSMutableDictionary, NSMutableSet, NSString, SBSStatusBarStyleOverridesAssertion, _SBDirectToAirPlayPolicyState;

@interface SBDirectToAirPlayController : NSObject <Swift>

{
    SBSStatusBarStyleOverridesAssertion *_directToAirPlayStatusBarStyleOverrideAssertion;
    NSString *_directToAirPlayStatusBarStyleOverrideAssertionCorrespondingBundleID;
    NSMutableDictionary *_directToAirPlayPlayingBundleIDsToRouteNames;
    NSMutableDictionary *_directToAirPlayReadyBundleIDsToRouteNames;
    NSMutableSet *_directToAirPlayIneligibleBundleIDs;
    NSMutableSet *_directToAirPlayEligibleBundleIDs;
    _Bool _controlCenterReportsItselfAsPresented;
    _Bool _currentRoutingSessionEstablishedAutomaticallyFromLikelyDestination;
    _Bool _externalPlaybackIsActive;
    _Bool _externalPlaybackIsPlaying;
    MPMediaControlsStatusBarStyleOverridesCoordinator *_mediaControlsCoordinator;
    AVExternalPlaybackMonitor *_externalPlaybackMonitor;
    AVRoutingSessionManager *_routingSessionManager;
    AVRoutingSessionDestination *_currentRoutingSessionDestination;
    NSArray *_likelyExternalPlaybackDestinations;
    _SBDirectToAirPlayPolicyState *_currentState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)directToAirPlayIsAvailable;
+ (_Bool)_mediaControllerSaysWeHaveAWiredRoute;

- (id)init;
- (void)controlCenterWillPresent;
- (void)controlCenterDidDismiss;
- (void)sceneManager:(id)arg1 didAddExternalForegroundApplicationSceneHandle:(id)arg2;
- (void)sceneManager:(id)arg1 didRemoveExternalForegroundApplicationSceneHandle:(id)arg2;
- (void)externalAirPlayVideoActiveDidChange:(id)arg1;
- (void)externalAirPlayVideoPlayingDidChange:(id)arg1;
- (void)currentExternalDestinationDidChange:(id)arg1;
- (void)likelyExternalDestinationsDidChange:(id)arg1;
- (void)lockStateChanged:(id)arg1;
- (void)externalDisplayChanged:(id)arg1;
- (void)_main_evaluatePolicyForDirectToAirplayAlert;
- (void)_updateRouteNamesForPlayingAndReadyApps;
- (void)_evaluatePolicyForDirectToAirplayAlert;
- (id)_currentExternalRouteNames;
- (id)_captureCurrentPolicyState;
- (void)_acquireDirectToAirPlayStatusBarStyleOverrideForApplicationWithBundleID:(id)arg1 playing:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_rollBannerActionForReadyBundleID:(id)arg1 sceneHandle:(id)arg2;
- (void)_clearDirectToAirPlayStatusBarAssertion;
- (id)_externalRouteNamesForDestination:(id)arg1;
- (void)_evaluateDirectToAirPlayImplicationsOfAppBecomingForeground:(id)arg1;
- (void)_evaluateDirectToAirPlayImplicationsOfAppBecomingBackground:(id)arg1;

@end
