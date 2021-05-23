/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UICollectionViewLayoutAttributes.h>

@class HFWallpaperSlice;

@interface HUGridFlowLayoutCellAttributes : UICollectionViewLayoutAttributes

{
    HFWallpaperSlice *_blurredWallpaperSlice;
    HFWallpaperSlice *_darkModeBlurredWallpaperSlice;
    struct CGRect _normalizedWallpaperRect;
}

@property (nonatomic) struct CGRect normalizedWallpaperRect;
@property (retain, nonatomic) HFWallpaperSlice *blurredWallpaperSlice;
@property (retain, nonatomic) HFWallpaperSlice *darkModeBlurredWallpaperSlice;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
