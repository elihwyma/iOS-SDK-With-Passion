/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class PXNonuniformTransform, PXRegionOfInterest;

@protocol PXZoomAnimationContext <Swift>

@property (nonatomic, readonly) long long animationType;
@property (nonatomic, readonly) double animationDuration;
@property (nonatomic, readonly) double fromAlpha;
@property (nonatomic, readonly) PXNonuniformTransform *fromTransform;
@property (nonatomic, readonly) PXRegionOfInterest *fromRegionOfInterest;
@property (nonatomic, readonly) double toAlpha;
@property (nonatomic, readonly) PXNonuniformTransform *toTransform;
@property (nonatomic, readonly) PXRegionOfInterest *toRegionOfInterest;
@property (nonatomic, readonly, getter=isMatchingRegionsOfInterest) _Bool matchingRegionsOfInterest;
@property (nonatomic, readonly) _Bool keepsSourceRegionOfInterestContent;

- (unsigned short)willBeginAnimation;
- (unsigned short)didEndAnimation: /* Error: Ran out of types for this method. */;
- (unsigned short)registerCleanupHandler: /* Error: Ran out of types for this method. */;

@end
