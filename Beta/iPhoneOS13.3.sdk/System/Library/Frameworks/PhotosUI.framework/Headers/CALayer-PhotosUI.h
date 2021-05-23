/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <QuartzCore/CALayer.h>

@interface CALayer (PhotosUI)

+ (void)pu_animateAlongsideView:(id)arg1 animations:(CDUnknownBlockType)arg2;

- (id)_pu_uniqueAnimationKeyWithProposedKey:(id)arg1;
- (void)pu_setPosition:(struct CGPoint)arg1;
- (void)pu_setTransform:(struct CATransform3D)arg1;

@end
