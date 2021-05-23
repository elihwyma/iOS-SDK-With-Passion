/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXTilingLayout.h>

@interface PXSingleTileLayout : PXTilingLayout

{
    struct CGRect _contentBounds;
    struct CGSize _preferredSize;
    struct PXTileIdentifier _tileIdentifier;
}

@property (nonatomic, readonly) struct PXTileIdentifier tileIdentifier;
@property (nonatomic) struct CGSize preferredSize;

- (id)init;
- (void)prepareLayout;
- (struct CGRect)contentBounds;
- (void)setReferenceSize:(struct CGSize)arg1;
- (void)enumerateTilesInRect:(struct CGRect)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)getGeometry:(out struct PXTileGeometry *)arg1 group:(out unsigned long long *)arg2 userData:(out id *)arg3 forTileWithIdentifier:(struct PXTileIdentifier)arg4;
- (id)initWithTileIdentifier:(struct PXTileIdentifier)arg1;

@end
