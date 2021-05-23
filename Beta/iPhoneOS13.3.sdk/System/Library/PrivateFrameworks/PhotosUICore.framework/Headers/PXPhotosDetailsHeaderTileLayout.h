/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXTilingLayout.h>

@class PXPhotosDetailsHeaderSpec;

@protocol PXPhotosDetailsHeaderTileLayoutDelegate;

@interface PXPhotosDetailsHeaderTileLayout : PXTilingLayout

{
    struct {
        _Bool contentsRectForAspectRatio;
        _Bool titleFontName;
    } _delegateRespondsTo;
    PXPhotosDetailsHeaderSpec *_spec;
    long long _style;
    id <PXPhotosDetailsHeaderTileLayoutDelegate> _delegate;
}

@property (retain, nonatomic) PXPhotosDetailsHeaderSpec *spec;
@property (nonatomic) long long style;
@property (weak, nonatomic) id <PXPhotosDetailsHeaderTileLayoutDelegate> delegate;
@property (nonatomic, readonly) struct PXTileIdentifier contentTileIdentifier;
@property (nonatomic, readonly) struct CGRect slideshowRect;

- (id)init;
- (struct CGRect)contentBounds;
- (void)setReferenceSize:(struct CGSize)arg1;
- (void)enumerateTilesInRect:(struct CGRect)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)getGeometry:(out struct PXTileGeometry *)arg1 group:(out unsigned long long *)arg2 userData:(out id *)arg3 forTileWithIdentifier:(struct PXTileIdentifier)arg4;
- (long long)tileKindForTileIdentifier:(struct PXTileIdentifier)arg1;
- (id)_viewSpecForTileWithIdentifier:(struct PXTileIdentifier)arg1 boundingSize:(struct CGSize)arg2;
- (double)_zPositionForTileWithIdentifier:(struct PXTileIdentifier)arg1;
- (id)initWithSpec:(id)arg1;
- (struct CGRect)_rectForTileWithIdentifier:(struct PXTileIdentifier)arg1;
- (id)_userDataForTileWithIdentifier:(struct PXTileIdentifier)arg1 inContainingRect:(struct CGRect)arg2;
- (struct PXTileIdentifier)tileIdentifierForTileKind:(long long)arg1;
- (struct CGRect)_contentsRectForAspectRatio:(double)arg1;

@end
