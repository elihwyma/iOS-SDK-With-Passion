/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTilingLayout.h>

@class NSCache, PUFilmstripDataSource;

__attribute__((visibility("hidden")))
@interface PUFilmstripTilingLayout : PUTilingLayout

{
    struct CGRect _contentBounds;
    long long _numberOfItems;
    struct CGSize _itemSize;
    NSCache *_layoutInfoCache;
    struct CGSize _contentSize;
}

@property (nonatomic, readonly) struct CGSize contentSize;
@property (retain, nonatomic) PUFilmstripDataSource *dataSource;

- (void)prepareLayout;
- (struct CGRect)contentBounds;
- (id)initWithContentSize:(struct CGSize)arg1;
- (id)layoutInfosForTilesInRect:(struct CGRect)arg1;
- (id)layoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2;
- (id)preferredScrollInfo;
- (id)_layoutInfoForTileWithIndex:(long long)arg1 kind:(id)arg2;
- (id)_layoutInfoForIndicatorInfo:(id)arg1 withIndex:(long long)arg2;

@end
