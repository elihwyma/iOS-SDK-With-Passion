/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class _UIStatusBar;

@protocol _UIStatusBarVisualProvider <Swift>

@property (weak, nonatomic) _UIStatusBar *statusBar;
@property (nonatomic, readonly) _Bool canFixupDisplayItemAttributes;

+ (unsigned short)intrinsicContentSizeForOrientation: /* Error: Ran out of types for this method. */;

- (unsigned short)setupInContainerView: /* Error: Ran out of types for this method. */;
- (unsigned short)orderedDisplayItemPlacementsInRegionWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)styleAttributesForStyle: /* Error: Ran out of types for this method. */;

+ (unsigned short)intrinsicLockScreenContentSizeForOrientation: /* Error: Ran out of types for this method. */;

- (unsigned short)modeUpdatedFromMode: /* Error: Ran out of types for this method. */;
- (unsigned short)orientationUpdatedFromOrientation: /* Error: Ran out of types for this method. */;
- (unsigned short)styleUpdatedFromStyle: /* Error: Ran out of types for this method. */;
- (unsigned short)avoidanceFrameUpdatedFromFrame: /* Error: Ran out of types for this method. */;
- (unsigned short)sizeUpdatedFromSize: /* Error: Ran out of types for this method. */;
- (unsigned short)willUpdateWithData: /* Error: Ran out of types for this method. */;
- (unsigned short)region:willSetDisplayItems: /* Error: Ran out of types for this method. */;
- (unsigned short)dataUpdated: /* Error: Ran out of types for this method. */;
- (unsigned short)statusBarRegionsUpdated;
- (unsigned short)itemCreated: /* Error: Ran out of types for this method. */;
- (unsigned short)overriddenStyleAttributesForDisplayItemWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)additionAnimationForDisplayItemWithIdentifier:itemAnimation: /* Error: Ran out of types for this method. */;
- (unsigned short)removalAnimationForDisplayItemWithIdentifier:itemAnimation: /* Error: Ran out of types for this method. */;
- (unsigned short)actionable:highlighted:initialPress: /* Error: Ran out of types for this method. */;
- (unsigned short)regionIdentifiersForPartWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)displayItemIdentifiersForPartWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)canFixupDisplayItemAttributes;

@end
