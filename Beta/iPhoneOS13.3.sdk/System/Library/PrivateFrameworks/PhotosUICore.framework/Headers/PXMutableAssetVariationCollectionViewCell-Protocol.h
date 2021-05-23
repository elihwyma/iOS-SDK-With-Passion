/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class PXAssetEditOperationManager, PXAssetVariationOption, PXAssetVariationRenderProvider, PXAssetVariationRenderResult, PXWidgetSpec, UIColor, UIImage;

@protocol PXMutableAssetVariationCollectionViewCell <Swift>

@property (retain, nonatomic) PXAssetVariationRenderResult *renderResult;
@property (retain, nonatomic) PXAssetVariationRenderProvider *renderProvider;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (retain, nonatomic) PXAssetVariationOption *variationOption;
@property (retain, nonatomic) PXAssetEditOperationManager *editOperationManager;
@property (retain, nonatomic) PXWidgetSpec *spec;
@property (nonatomic) long long assetVariationContentMode;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *selectedTitleColor;
@property (nonatomic, getter=isPlaybackAllowed) _Bool playbackAllowed;
@property (nonatomic) double placeholderOverlayAlpha;

@end
