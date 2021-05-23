/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@protocol PXLayoutItemInput <Swift>

@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) double weight;
@property (nonatomic, readonly) struct CGAffineTransform transform;
@property (nonatomic, readonly) struct CGPoint positionOffset;
@property (nonatomic, readonly) struct CGRect preferredCropRect;
@property (nonatomic, readonly) struct CGRect acceptableCropRect;

- (unsigned short)weightUsingCriterion: /* Error: Ran out of types for this method. */;

@end
