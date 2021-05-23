/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/Swift-Protocol.h>

@protocol MNGuidanceManagerDelegate <Swift>

- (unsigned short)guidanceManager:didArriveWithAnnouncement: /* Error: Ran out of types for this method. */;
- (unsigned short)guidanceManager:didStartWithAnnouncement: /* Error: Ran out of types for this method. */;
- (unsigned short)guidanceManager:displayManeuverAlertForAnnouncementStage: /* Error: Ran out of types for this method. */;
- (unsigned short)guidanceManager:willAnnounce:inSeconds: /* Error: Ran out of types for this method. */;
- (unsigned short)guidanceManagerDidUpdateProgress:currentStepIndex:distanceUntilSign:timeUntilSign: /* Error: Ran out of types for this method. */;
- (unsigned short)guidanceManagerHideSecondaryStep: /* Error: Ran out of types for this method. */;
- (unsigned short)guidanceManagerProceedingToRoute:proceedToRouteDistance:displayString:closestStepIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)guidanceManager:announce:shortPromptType:ignorePromptStyle:stage:hasSecondaryManeuver:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)guidanceManager:displayPrimaryStep:instructions:shieldType:shieldText:drivingSide:maneuverStepIndex:isSynthetic: /* Error: Ran out of types for this method. */;
- (unsigned short)guidanceManager:displaySecondaryStep:instructions:shieldType:shieldText:drivingSide: /* Error: Ran out of types for this method. */;
- (unsigned short)guidanceManagerBeginGuidanceUpdate: /* Error: Ran out of types for this method. */;
- (unsigned short)guidanceManager:updateSignsWithInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)guidanceManager:showLaneDirections: /* Error: Ran out of types for this method. */;
- (unsigned short)guidanceManager:hideLaneDirectionsForId: /* Error: Ran out of types for this method. */;
- (unsigned short)guidanceManagerEndGuidanceUpdate: /* Error: Ran out of types for this method. */;
- (unsigned short)guidanceManager:triggerHaptics: /* Error: Ran out of types for this method. */;
- (unsigned short)guidanceManager:usePersistentDisplay: /* Error: Ran out of types for this method. */;
- (unsigned short)guidanceManager:hideJunctionViewForId: /* Error: Ran out of types for this method. */;
- (unsigned short)guidanceManager:showJunctionView: /* Error: Ran out of types for this method. */;
- (unsigned short)guidanceManager:newGuidanceEventFeedback: /* Error: Ran out of types for this method. */;
- (unsigned short)guidanceManager:updatedGuidanceEventFeedback: /* Error: Ran out of types for this method. */;

@end
