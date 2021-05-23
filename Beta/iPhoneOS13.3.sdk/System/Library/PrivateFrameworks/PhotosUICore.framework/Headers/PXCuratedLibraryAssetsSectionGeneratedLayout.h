/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGGeneratedLayout.h>

@class PXCuratedLibrarySectionGeometryDescriptor;

@protocol PXDisplayAsset;

@interface PXCuratedLibraryAssetsSectionGeneratedLayout : PXGGeneratedLayout

{
    id <PXDisplayAsset> _presentedKeyAsset;
    struct CGRect _presentedKeyAssetRect;
}

@property (retain, nonatomic) id <PXDisplayAsset> presentedKeyAsset;
@property (nonatomic) struct CGRect presentedKeyAssetRect;
@property (nonatomic, readonly) struct CGRect sectionRect;
@property (nonatomic, readonly) PXCuratedLibrarySectionGeometryDescriptor *presentedGeometryDescriptor;

- (id)init;
- (void)getSpriteZPosition:(float *)arg1 clippingRect:(struct CGRect *)arg2 forSpriteKind:(long long)arg3;
- (void)spritesDidUpdate;
- (void)enumerateHeroSpritesInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
