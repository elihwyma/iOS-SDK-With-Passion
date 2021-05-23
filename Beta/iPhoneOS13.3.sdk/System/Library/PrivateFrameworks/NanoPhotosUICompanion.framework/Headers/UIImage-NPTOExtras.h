/*
 Image: /System/Library/PrivateFrameworks/NanoPhotosUICompanion.framework/NanoPhotosUICompanion
 */

#import <UIKit/UIImage.h>

@interface UIImage (NPTOExtras)

+ (id)_npto_eagerlyDecodedImageWithData:(id)arg1 orientation:(long long)arg2;

- (id)_npto_subImageFromRect:(struct CGRect)arg1;
- (void)_npto_drawWithSrcRect:(struct CGRect)arg1 intoDstRect:(struct CGRect)arg2;
- (void)_npto_drawWithAspectFillInRect:(struct CGRect)arg1;
- (void)_npto_drawWithAspectFillInRect:(struct CGRect)arg1 biasTowardsFaces:(id)arg2;

@end
