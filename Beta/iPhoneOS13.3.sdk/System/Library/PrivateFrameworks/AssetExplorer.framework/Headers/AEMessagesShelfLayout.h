/*
 Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

#import <PhotosUICore/PXAssetsTilingLayout.h>

@protocol AEMessagesShelfLayoutDelegate;

@interface AEMessagesShelfLayout : PXAssetsTilingLayout

{
    struct CGRect *_itemFramesForCurrentDataSource;
    double _currentContentWidth;
    _Bool _wasPreparedAtLeastOnce;
    id <AEMessagesShelfLayoutDelegate> _delegate;
}

@property (weak, nonatomic) id <AEMessagesShelfLayoutDelegate> delegate;

- (void)dealloc;
- (void)prepareLayout;
- (struct CGRect)contentBounds;
- (void)setReferenceSize:(struct CGSize)arg1;
- (void)enumerateTilesInRect:(struct CGRect)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)getGeometry:(struct PXTileGeometry *)arg1 group:(unsigned long long *)arg2 userData:(id *)arg3 forTileWithIdentifier:(struct PXTileIdentifier)arg4;
- (struct CGRect)_gradientShadowFrameForItemFrame:(struct CGRect)arg1;
- (double)_zPositionForShelfTileKind:(unsigned long long)arg1 atIndexPath:(struct PXSimpleIndexPath)arg2;
- (struct CGRect)_frameForGridItemAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (struct CGRect)_cancelButtonFrameForGridFrame:(struct CGRect)arg1;
- (struct CGRect)_irisToggleFrameForGridFrame:(struct CGRect)arg1;
- (struct CGRect)_loopBadgeFrameForItemFrame:(struct CGRect)arg1;
- (struct CGRect)_videoBadgeFrameForItemFrame:(struct CGRect)arg1;
- (struct CGRect)_videoDurationFrameForItemFrame:(struct CGRect)arg1;

@end
