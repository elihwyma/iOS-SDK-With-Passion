/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <iAd/Swift-Protocol.h>

@protocol ADCreativeControllerDelegate <Swift>

- (unsigned short)creativeControllerViewDidRequestCloseWithTapLocation: /* Error: Ran out of types for this method. */;
- (unsigned short)creativeControllerViewDidRequestCreateCalendarEvent:withTapLocation: /* Error: Ran out of types for this method. */;
- (unsigned short)creativeControllerViewDidRequestExpandURL:withMaximumSize:withTapLocation: /* Error: Ran out of types for this method. */;
- (unsigned short)creativeControllerViewDidRequestOpenURL:withTapLocation: /* Error: Ran out of types for this method. */;
- (unsigned short)creativeControllerTapGestureTimerDidExpireBeforePrimaryActionWasInvoked;
- (unsigned short)creativeControllerNavigationAttemptBlockedDueToAccidentalTap;
- (unsigned short)creativeControllerVideoCreativeViewLoaded;
- (unsigned short)creativeControllerVideoStartedPlaying:volume: /* Error: Ran out of types for this method. */;
- (unsigned short)creativeControllerVideoResumedPlaying:volume: /* Error: Ran out of types for this method. */;
- (unsigned short)creativeControllerVideoPaused:volume: /* Error: Ran out of types for this method. */;
- (unsigned short)creativeControllerVideoProgressed:volume: /* Error: Ran out of types for this method. */;
- (unsigned short)creativeControllerVideoViewabilityChanged:playTime:volume: /* Error: Ran out of types for this method. */;
- (unsigned short)creativeControllerVideoCompletedWithVolume: /* Error: Ran out of types for this method. */;
- (unsigned short)creativeControllerVideoMuted: /* Error: Ran out of types for this method. */;
- (unsigned short)creativeControllerVideoUnmuted:volume: /* Error: Ran out of types for this method. */;
- (unsigned short)creativeControllerVideoMoreInfoTapped:volume: /* Error: Ran out of types for this method. */;
- (unsigned short)creativeControllerVideoTapped:volume: /* Error: Ran out of types for this method. */;
- (unsigned short)creativeControllerVideoSkipAdTapped:volume: /* Error: Ran out of types for this method. */;
- (unsigned short)creativeControllerVideoFullScreenTapped:volume: /* Error: Ran out of types for this method. */;
- (unsigned short)creativeControllerVideoExitFullScreenTapped:volume: /* Error: Ran out of types for this method. */;
- (unsigned short)creativeControllerVideoVolumeChanged:playTime: /* Error: Ran out of types for this method. */;

@end
