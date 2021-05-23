/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class NUComposition, PHLivePhoto, UIImage;

@protocol PUCropTransformedImageViewDelegate;

__attribute__((visibility("hidden")))
@interface PUCropTransformedImageView : UIView

{
    _Bool _tracking;
    _Bool _decelerating;
    UIImage *_image;
    PHLivePhoto *_livePhoto;
    NUComposition *_autoloopComposition;
    NUComposition *_videoComposition;
    id <PUCropTransformedImageViewDelegate> _delegate;
    double _straightenAngle;
    double _pitchAngle;
    double _yawAngle;
    long long _orientation;
    CDStruct_910f5d27 _imageModulationOptions;
    struct CGRect _cropRect;
    struct CGRect _canvasFrame;
}

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) PHLivePhoto *livePhoto;
@property (retain, nonatomic) NUComposition *autoloopComposition;
@property (nonatomic, readonly) NUComposition *videoComposition;
@property (nonatomic) CDStruct_910f5d27 imageModulationOptions;
@property (weak, nonatomic) id <PUCropTransformedImageViewDelegate> delegate;
@property (nonatomic) double straightenAngle;
@property (nonatomic) double pitchAngle;
@property (nonatomic) double yawAngle;
@property (nonatomic) long long orientation;
@property (nonatomic, readonly) struct CGRect cropRect;
@property (nonatomic) struct CGRect canvasFrame;
@property (nonatomic, getter=isMuted) _Bool muted;
@property (nonatomic, readonly, getter=isTracking) _Bool tracking;
@property (nonatomic, readonly, getter=isDecelerating) _Bool decelerating;

- (struct CGRect)_imageBounds;
- (void)_setTracking:(_Bool)arg1;
- (id)cropModel;
- (void)_resetCropRect;
- (void)setModelCropRect:(struct CGRect)arg1 viewCropRect:(struct CGRect)arg2;
- (void)setNeedsLayerTransformsUpdateAnimated:(_Bool)arg1;
- (void)_setCropModel:(id)arg1;
- (void)setVideoComposition:(id)arg1 withSeekTime:(CDStruct_1b6d18a9)arg2;
- (struct CGRect)viewCropRectForImageRect:(struct CGRect)arg1;
- (struct CGRect)imageCropRectForViewRect:(struct CGRect)arg1;
- (struct CGRect)validateViewCropRectAgainstModelCropRect:(struct CGRect)arg1;
- (void)setImageCropRectFromViewCropRect:(struct CGRect)arg1 animated:(_Bool)arg2;

@end
