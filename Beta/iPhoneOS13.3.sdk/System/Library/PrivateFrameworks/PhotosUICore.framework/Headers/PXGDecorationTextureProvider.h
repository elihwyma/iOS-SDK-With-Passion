/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGCGImageTextureProvider.h>

@interface PXGDecorationTextureProvider : PXGCGImageTextureProvider

- (struct _NSRange)requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 geometries:(CDStruct_3ab912e1 *)arg2 styles:(CDStruct_506f5052 *)arg3 infos:(CDStruct_9d1ebe49 *)arg4 inLayout:(id)arg5;
- (void)_requestTextureForDecorationInfo:(struct PXGDecorationSpriteInfo)arg1 debugDecoration:(id)arg2 targetSize:(struct CGSize)arg3 cornerRadius:(CDStruct_2bd92d94)arg4 screenScale:(double)arg5 requestID:(int)arg6 viewEnvironment:(id)arg7 userInterfaceDirection:(unsigned long long)arg8;

@end
