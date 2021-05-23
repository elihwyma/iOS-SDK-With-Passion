/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXWidgetBar.h>

@class PXUIWidgetBarViewTile;

@interface PXUIWidgetBar : PXWidgetBar

{
    PXUIWidgetBarViewTile *__viewTile;
}

@property (nonatomic, readonly) PXUIWidgetBarViewTile *_viewTile;

- (void)updateView;
- (id)createTileAnimator;
- (id)checkOutTileWithKind:(long long)arg1;
- (void)checkInTile:(id)arg1;

@end
