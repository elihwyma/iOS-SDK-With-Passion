/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXEngineDrivenAssetsTilingLayout.h>

@class PXPhotosDetailsAssetsSpec;

@interface PXPhotosDetailsAssetsTilingLayout : PXEngineDrivenAssetsTilingLayout

{
    PXPhotosDetailsAssetsSpec *_spec;
    long long _placeholderMode;
}

@property (retain, nonatomic) PXPhotosDetailsAssetsSpec *spec;
@property (nonatomic) long long placeholderMode;

- (struct UIEdgeInsets)contentInset;
- (void)prepareLayout;
- (struct CGRect)contentBounds;
- (void)enumerateTilesInRect:(struct CGRect)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)getGeometry:(out struct PXTileGeometry *)arg1 group:(out unsigned long long *)arg2 userData:(out id *)arg3 forTileWithIdentifier:(struct PXTileIdentifier)arg4;
- (struct CGRect)_placeholderFrame;

@end
