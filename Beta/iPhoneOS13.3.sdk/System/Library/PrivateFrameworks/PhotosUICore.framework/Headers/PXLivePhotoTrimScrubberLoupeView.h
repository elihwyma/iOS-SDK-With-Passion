/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class AVAsset, AVVideoComposition, CAShapeLayer, NSObject, UIImageView, _PXLivePhotoTrimScrubberLoupeViewImageRequest;

@protocol OS_dispatch_queue;

@interface PXLivePhotoTrimScrubberLoupeView : UIView

{
    UIImageView *_imageView;
    CAShapeLayer *_borderLayer;
    _Bool _imageIsValid;
    NSObject<OS_dispatch_queue> *_workQueue;
    _PXLivePhotoTrimScrubberLoupeViewImageRequest *_currentImageRequest;
    AVAsset *_asset;
    AVVideoComposition *_videoComposition;
    UIView *_playerView;
    double _outerCornerRadius;
    double _innerCornerRadius;
    CDStruct_1b6d18a9 _sourceTime;
}

@property (copy, nonatomic) AVAsset *asset;
@property (copy, nonatomic) AVVideoComposition *videoComposition;
@property (nonatomic) CDStruct_1b6d18a9 sourceTime;
@property (retain, nonatomic) UIView *playerView;
@property (nonatomic) double outerCornerRadius;
@property (nonatomic) double innerCornerRadius;

- (id)initWithCoder:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_invalidateImage;
- (void)_updateImageIfNeeded;
- (void)reloadImage;
- (void)_extractImageFromImageRequest:(id)arg1;
- (void)_presentImage:(id)arg1 forSourceTime:(CDStruct_1b6d18a9)arg2;
- (void)_PXLivePhotoTrimScrubberLoupeView_commonInit;
- (void)_updateBorderLayerPath;

@end
