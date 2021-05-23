/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBFWallpaperView.h>

@class UIColor, UIImage;

@interface SBFColorWallpaperView : SBFWallpaperView

{
    UIImage *_cachedSnapshotImage;
}

@property (retain, nonatomic) UIImage *cachedSnapshotImage;
@property (nonatomic, readonly) UIColor *wallpaperColor;

- (long long)wallpaperType;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2 variant:(long long)arg3 cacheGroup:(id)arg4 delegate:(id)arg5 options:(unsigned long long)arg6;
- (_Bool)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2;
- (id)_computeAverageColor;
- (id)averageColorInRect:(struct CGRect)arg1 withSmudgeRadius:(double)arg2;
- (double)contrastInRect:(struct CGRect)arg1 contrastWithinBoxes:(double *)arg2 contrastBetweenBoxes:(double *)arg3;
- (id)snapshotImage;

@end
