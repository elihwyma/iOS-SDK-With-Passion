/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXTilingLayout.h>

@interface PXPhotosDetailsActionsTilingLayout : PXTilingLayout

{
    unsigned long long _dataSourceIdentifier;
    _Bool _shouldShowSeparators;
    _Bool _shouldInsetAllSeparators;
    long long _numberOfItems;
    double _rowHeight;
    double _separatorHeight;
    long long __numberOfSeparators;
}

@property (nonatomic, readonly) long long _numberOfSeparators;
@property (nonatomic, readonly) long long numberOfItems;
@property (nonatomic) double rowHeight;
@property (nonatomic) double separatorHeight;
@property (nonatomic) _Bool shouldShowSeparators;
@property (nonatomic) _Bool shouldInsetAllSeparators;

- (void)prepareLayout;
- (double)_contentWidth;
- (struct CGRect)contentBounds;
- (void)enumerateTilesInRect:(struct CGRect)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)getGeometry:(out struct PXTileGeometry *)arg1 group:(out unsigned long long *)arg2 userData:(out id *)arg3 forTileWithIdentifier:(struct PXTileIdentifier)arg4;
- (id)initWithNumberOfItems:(long long)arg1;
- (struct CGRect)_frameForItemAtIndex:(long long)arg1;
- (struct CGRect)_frameForSeparatorAtIndex:(long long)arg1;

@end
