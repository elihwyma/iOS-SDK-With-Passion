/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGCGImageTextureProvider.h>

@interface PXGSolidColorTextureProvider : PXGCGImageTextureProvider

- (struct _NSRange)requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 geometries:(CDStruct_3ab912e1 *)arg2 styles:(CDStruct_506f5052 *)arg3 infos:(CDStruct_9d1ebe49 *)arg4 inLayout:(id)arg5;
- (void)viewEnvironmentDidChange:(id)arg1;
- (void)_requestTextureForColor:(struct UIColor *)arg1 targetSize:(struct CGSize)arg2 traitCollection:(id)arg3 requestID:(int)arg4;

@end
