/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGTextureProvider.h>

@protocol PXGViewSource;

@interface PXGViewTextureProvider : PXGTextureProvider

{
    id <PXGViewSource> _fallbackViewSource;
}

@property (weak, nonatomic) id <PXGViewSource> fallbackViewSource;

- (struct _NSRange)requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 geometries:(CDStruct_3ab912e1 *)arg2 styles:(CDStruct_506f5052 *)arg3 infos:(CDStruct_9d1ebe49 *)arg4 inLayout:(id)arg5;
- (void)_requestTextureWithDecorationOptions:(unsigned long long)arg1 viewClass:(Class)arg2 userData:(id)arg3 requestID:(int)arg4;
- (void)_requestTextureForViewClass:(Class)arg1 userData:(id)arg2 requestID:(int)arg3;

@end
