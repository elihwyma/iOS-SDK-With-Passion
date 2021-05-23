/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <QuartzCore/CALayer.h>

@interface CALayer (PhotosPlayer)

@property (nonatomic, setter=is_setBlurRadius:) double is_blurRadius;

- (void)is_addBlurFilterIfNeeded;
- (id)_is_blurFilter;
- (void)_is_setBlurFilter:(id)arg1;
- (void)_is_removeBlurFilterIfNeeded;

@end
