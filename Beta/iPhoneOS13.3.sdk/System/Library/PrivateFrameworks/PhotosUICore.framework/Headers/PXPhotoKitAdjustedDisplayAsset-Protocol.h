/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PHAsset;

@protocol PXPhotoKitAdjustedDisplayAsset <Swift>

@property (nonatomic, readonly) _Bool wantsAdjustments;
@property (nonatomic, readonly) NSString *adjustedContentIdentifier;
@property (nonatomic, readonly) PHAsset *photoKitAsset;

- (unsigned short)applyAdjustmentsToCompositionController:renderer: /* Error: Ran out of types for this method. */;

@end
