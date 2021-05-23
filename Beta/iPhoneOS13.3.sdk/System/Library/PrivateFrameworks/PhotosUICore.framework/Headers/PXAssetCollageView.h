/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class NSMutableDictionary, NSMutableIndexSet, PXLayoutPerformerOutput, PXRoundedCornerOverlayView, PXUIMediaProvider, UIColor;

@interface PXAssetCollageView : UIView

{
    _Bool _allowVideoPlayback;
    _Bool _allowLoopPlayback;
    _Bool _allowAnimatedImagePlayback;
    PXUIMediaProvider *_mediaProvider;
    double _spacing;
    double _cornerRadius;
    UIColor *_cornerBackgroundColor;
    NSMutableDictionary *_assets;
    NSMutableDictionary *_assetViews;
    PXRoundedCornerOverlayView *_roundedCornerOverlayView;
    NSMutableIndexSet *_hiddenItemIndexes;
    PXLayoutPerformerOutput *_layoutOutput;
}

@property (nonatomic, readonly) NSMutableDictionary *assets;
@property (nonatomic, readonly) NSMutableDictionary *assetViews;
@property (nonatomic, readonly) PXRoundedCornerOverlayView *roundedCornerOverlayView;
@property (nonatomic, readonly) NSMutableIndexSet *hiddenItemIndexes;
@property (nonatomic, readonly) PXLayoutPerformerOutput *layoutOutput;
@property (nonatomic, readonly) _Bool portraitBias;
@property (nonatomic, readonly) PXUIMediaProvider *mediaProvider;
@property (nonatomic, readonly) long long numberOfItems;
@property (nonatomic) double spacing;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *cornerBackgroundColor;
@property (nonatomic) _Bool allowVideoPlayback;
@property (nonatomic) _Bool allowLoopPlayback;
@property (nonatomic) _Bool allowAnimatedImagePlayback;

+ (long long)maximumNumberOfItems;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateRoundedCornerOverlayView;
- (id)initWithFrame:(struct CGRect)arg1 mediaProvider:(id)arg2;
- (void)setAsset:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)setHidden:(_Bool)arg1 forItemAtIndex:(long long)arg2;
- (id)displayAssetViewWithAsset:(id)arg1;
- (id)displayAssetViewAtPoint:(struct CGPoint)arg1;
- (void)resetViewState;
- (void)_updateHiddenViews;
- (id)_checkoutAndConfigureAssetViewForAsset:(id)arg1 withIndex:(long long)arg2;
- (void)_updateAssetViewsAnimatedContentEnabled;
- (id)_displayAssetViews;
- (id)_displayAssetViewWithIndex:(long long)arg1;
- (double)_firstAssetAspectRatio;
- (void)_removeAssetView:(id)arg1;
- (void)_removeAllAssetViews;

@end
