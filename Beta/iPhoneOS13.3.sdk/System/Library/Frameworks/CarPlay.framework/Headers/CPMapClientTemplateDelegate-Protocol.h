/*
 Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

#import <CarPlay/Swift-Protocol.h>

@protocol CPMapClientTemplateDelegate <Swift>

- (unsigned short)previewTripIdentifier:usingRouteIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)startTripIdentifier:usingRouteIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)clientPanBeganWithDirection: /* Error: Ran out of types for this method. */;
- (unsigned short)clientPanEndedWithDirection: /* Error: Ran out of types for this method. */;
- (unsigned short)clientPanWithDirection: /* Error: Ran out of types for this method. */;
- (unsigned short)clientPanGestureBegan;
- (unsigned short)clientPanGestureWithDeltaPoint:velocity: /* Error: Ran out of types for this method. */;
- (unsigned short)clientPanGestureEndedWithVelocity: /* Error: Ran out of types for this method. */;
- (unsigned short)clientPanViewDidAppear;
- (unsigned short)clientPanViewDidDisappear;
- (unsigned short)clientPanViewWillDisappear;
- (unsigned short)clientNavigationAlertWillAppear: /* Error: Ran out of types for this method. */;
- (unsigned short)clientNavigationAlertDidAppear: /* Error: Ran out of types for this method. */;
- (unsigned short)clientNavigationAlertWillDisappear:context: /* Error: Ran out of types for this method. */;
- (unsigned short)clientNavigationAlertDidDisappear:context: /* Error: Ran out of types for this method. */;
- (unsigned short)clientTripCanceledByExternalNavigation;
- (unsigned short)clientTripAlreadyStartedException;

@end
