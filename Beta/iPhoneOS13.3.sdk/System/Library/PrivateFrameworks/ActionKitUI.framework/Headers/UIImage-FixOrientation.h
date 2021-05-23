/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UIImage.h>

@interface UIImage (FixOrientation)

- (struct CGAffineTransform)wf_affineTransformForImageOrientation:(struct CGAffineTransform)arg1;
- (id)wf_imageInIntrinsicOrientation;
- (struct CGAffineTransform)wf_affineTransformForImageMirroringOrientation:(struct CGAffineTransform)arg1;
- (struct CGSize)wf_majorAxisOrientedSize;

@end
