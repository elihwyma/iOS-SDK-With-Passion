/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/Swift-Protocol.h>

@class CSAppearance, CSBehavior, CSPresentation;

@protocol CSCoverSheetViewPresenting <Swift>

@property (copy, nonatomic, readonly) CSAppearance *activeAppearance;
@property (copy, nonatomic, readonly) CSBehavior *activeBehavior;
@property (copy, nonatomic, readonly) CSPresentation *externalPresentation;

- (unsigned short)updateAppearanceForController: /* Error: Ran out of types for this method. */;
- (unsigned short)updateBehaviorForController: /* Error: Ran out of types for this method. */;
- (unsigned short)updateAppearanceForController:withAnimationSettings:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)_conformsToCSCoverSheetViewPresenting;

@end
