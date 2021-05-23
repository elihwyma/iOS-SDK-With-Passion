/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UICollectionViewFlowLayout.h>

__attribute__((visibility("hidden")))
@interface HUWallpaperPhotoCollectionFlowLayout : UICollectionViewFlowLayout

{
    long long _assetCollectionSubtype;
}

@property (nonatomic, readonly) long long assetCollectionSubtype;

- (void)prepareLayout;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)initWithAssetCollectionSubtype:(long long)arg1;

@end
