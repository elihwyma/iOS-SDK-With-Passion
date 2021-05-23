/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol SBSwitcherContextProviding <Swift>

- (unsigned short)displayCornerRadius;
- (unsigned short)hasHomeButton;
- (unsigned short)isReduceMotionEnabled;
- (unsigned short)isShowingSpotlightOrTodayView;
- (unsigned short)medusaSettings;
- (unsigned short)appLayouts;
- (unsigned short)switcherSettings;
- (unsigned short)switcherViewBounds;
- (unsigned short)isRTLEnabled;
- (unsigned short)containerViewBounds;
- (unsigned short)floatingDockHeight;
- (unsigned short)floatingDockViewTopMargin;
- (unsigned short)isFloatingDockFullyPresented;
- (unsigned short)switcherInterfaceOrientation;
- (unsigned short)numberOfHiddenAppLayoutsForBundleIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)numberOfTetheredAppLayouts;
- (unsigned short)scrollViewContentOffset;
- (unsigned short)tetheredScrollViewContentSize;
- (unsigned short)distanceToTetheredLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreen;
- (unsigned short)isFloatingDockGesturePossible;
- (unsigned short)homeScreenHasOpenFolder;
- (unsigned short)homeScreenHasOpenFolderInLocation: /* Error: Ran out of types for this method. */;
- (unsigned short)isHomeScreenSidebarVisible;
- (unsigned short)isAppLayoutVisibleInSwitcherBounds: /* Error: Ran out of types for this method. */;
- (unsigned short)homeGestureSettings;
- (unsigned short)entityRemovalSettings;
- (unsigned short)numberOfVisibleCards;
- (unsigned short)isDevicePad;
- (unsigned short)isStudyLogEnabled;
- (unsigned short)homeScreenIconFrameForAppLayout: /* Error: Ran out of types for this method. */;
- (unsigned short)homeScreenIconScaleForAppLayout: /* Error: Ran out of types for this method. */;
- (unsigned short)homeScreenIconCornerRadiusForAppLayout: /* Error: Ran out of types for this method. */;
- (unsigned short)homeScreenIconLocationForAppLayout: /* Error: Ran out of types for this method. */;
- (unsigned short)itemContainerForAppLayoutOverlapsFloatingDock: /* Error: Ran out of types for this method. */;
- (unsigned short)isAppLayoutHigherPriorityInTetheredSwitcher: /* Error: Ran out of types for this method. */;
- (unsigned short)floatingApplicationFrameInInterfaceOrientation:floatingConfiguration: /* Error: Ran out of types for this method. */;
- (unsigned short)switcherWindowLevel;
- (unsigned short)floatingDockWindowLevel;
- (unsigned short)morphToPiPTargetCenter;
- (unsigned short)morphToPiPTargetScale;
- (unsigned short)morphToPiPSourceAlpha;
- (unsigned short)gestureHandlingModifierRequestsUpdate: /* Error: Ran out of types for this method. */;
- (unsigned short)gestureHandlingModifier:averageVelocityOverDuration: /* Error: Ran out of types for this method. */;

@end
