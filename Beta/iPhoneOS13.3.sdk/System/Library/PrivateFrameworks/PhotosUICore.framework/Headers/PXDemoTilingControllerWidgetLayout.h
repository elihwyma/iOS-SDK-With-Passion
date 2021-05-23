/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXAssetsTilingLayout.h>

@interface PXDemoTilingControllerWidgetLayout : PXAssetsTilingLayout

+ (struct PXTileIdentifier)backgroundTileIdentifier;

- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (struct CGRect)contentBounds;
- (void)setReferenceSize:(struct CGSize)arg1;
- (void)enumerateTilesInRect:(struct CGRect)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)getGeometry:(out struct PXTileGeometry *)arg1 group:(out unsigned long long *)arg2 userData:(out id *)arg3 forTileWithIdentifier:(struct PXTileIdentifier)arg4;

@end
