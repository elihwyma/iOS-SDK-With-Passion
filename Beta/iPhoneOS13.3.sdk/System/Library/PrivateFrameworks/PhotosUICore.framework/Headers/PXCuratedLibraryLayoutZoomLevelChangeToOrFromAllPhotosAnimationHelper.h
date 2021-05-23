/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCuratedLibraryLayoutAnimationHelper.h>

@class _PXCuratedLibraryLayoutAssetsSnapshot;

@interface PXCuratedLibraryLayoutZoomLevelChangeToOrFromAllPhotosAnimationHelper : PXCuratedLibraryLayoutAnimationHelper

{
    _PXCuratedLibraryLayoutAssetsSnapshot *_fromSnapshot;
    _PXCuratedLibraryLayoutAssetsSnapshot *_toSnapshot;
}

- (double)animationDuration;
- (id)initWithLayout:(id)arg1;
- (void)animation:(id)arg1 prepareWithRootLayout:(id)arg2 viewportShift:(struct CGPoint)arg3;
- (void)animation:(id)arg1 adjustGeometries:(inout CDStruct_3ab912e1 *)arg2 styles:(inout CDStruct_506f5052 *)arg3 infos:(inout CDStruct_9d1ebe49 *)arg4 forSpriteAppearingIntoRootIndexRange:(struct _PXGSpriteIndexRange)arg5;
- (void)animation:(id)arg1 adjustGeometries:(inout CDStruct_3ab912e1 *)arg2 styles:(inout CDStruct_506f5052 *)arg3 infos:(inout CDStruct_9d1ebe49 *)arg4 forSpriteDisappearingFromRootIndexRange:(struct _PXGSpriteIndexRange)arg5;
- (void)_adjustGeometries:(inout CDStruct_3ab912e1 *)arg1 styles:(inout CDStruct_506f5052 *)arg2 infos:(inout CDStruct_9d1ebe49 *)arg3 spriteIndexRange:(struct _PXGSpriteIndexRange)arg4 appearing:(_Bool)arg5;
- (id)_snapshotForZoomLevel:(long long)arg1;

@end
