/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGCGImageTextureProvider.h>

@interface PXGStringTextureProvider : PXGCGImageTextureProvider

- (struct _NSRange)requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 geometries:(CDStruct_3ab912e1 *)arg2 styles:(CDStruct_506f5052 *)arg3 infos:(CDStruct_9d1ebe49 *)arg4 inLayout:(id)arg5;
- (void)_requestTextureForString:(id)arg1 withAttributes:(id)arg2 targetSize:(struct CGSize)arg3 userInterfaceDirection:(unsigned long long)arg4 verticalAlignment:(long long)arg5 screenScale:(double)arg6 textureRequestID:(int)arg7;

@end
