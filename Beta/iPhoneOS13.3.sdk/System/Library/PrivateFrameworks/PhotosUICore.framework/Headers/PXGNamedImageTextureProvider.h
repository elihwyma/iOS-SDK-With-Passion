/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGCGImageTextureProvider.h>

@class NSBundle;

@interface PXGNamedImageTextureProvider : PXGCGImageTextureProvider

{
    NSBundle *_bundle;
}

@property (retain, nonatomic) NSBundle *bundle;

- (struct _NSRange)requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 geometries:(CDStruct_3ab912e1 *)arg2 styles:(CDStruct_506f5052 *)arg3 infos:(CDStruct_9d1ebe49 *)arg4 inLayout:(id)arg5;
- (void)_requestTextureForImageWithName:(id)arg1 inBundle:(id)arg2 userInterfaceDirection:(unsigned long long)arg3 screenScale:(double)arg4 requestID:(int)arg5;

@end
