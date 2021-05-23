/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class PXBasicTileUserData, PXBasicUIViewTileAnimator, PXTitleSubtitleUILabelTile, PXUIImageTile, UILabel;

@interface PXPhotosDetailsHeaderPlaceholderView : UIView

{
    PXBasicUIViewTileAnimator *_tileAnimator;
    struct PXTileGeometry _imageTileGeometry;
    PXUIImageTile *_imageTile;
    PXBasicTileUserData *_imageTileUserData;
    struct PXTileGeometry _initialTextTileGeometry;
    struct PXTileGeometry _textTileGeometry;
    PXTitleSubtitleUILabelTile *_textTile;
    PXBasicTileUserData *_textTileUserData;
    UILabel *_labelForLastBaselineLayout;
}

- (void)layoutSubviews;
- (id)viewForLastBaselineLayout;
- (id)initWithRegionOfInterest:(id)arg1;
- (void)_layoutImageTile;
- (void)_layoutTextTile;
- (void)_layoutTile:(id)arg1 withGeometry:(struct PXTileGeometry)arg2 userData:(id)arg3;
- (void)_layoutLabelForLastBaselineLayout;

@end
