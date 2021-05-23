/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGCGImageTextureProvider.h>

@interface PXGTitleSubtitleTextureProvider : PXGCGImageTextureProvider

- (id)workQueue;
- (struct _NSRange)requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 geometries:(CDStruct_3ab912e1 *)arg2 styles:(CDStruct_506f5052 *)arg3 infos:(CDStruct_9d1ebe49 *)arg4 inLayout:(id)arg5;
- (void)_requestTextureForTitle:(id)arg1 subtitle:(id)arg2 spec:(id)arg3 targetSize:(struct CGSize)arg4 screenScale:(double)arg5 requestID:(int)arg6 renderCompletionHandler:(CDUnknownBlockType)arg7;

@end
