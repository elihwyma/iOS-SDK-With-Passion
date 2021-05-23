/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUCropTransformedImageView.h>

#import <PhotosUI/Swift-Protocol.h>

@class CALayer, CAShapeLayer, NSString, NUCropModel, NUMediaView, PHLivePhotoView, PLImageGeometry, PUCropGestureHandler, PXImageLayerModulator, PXImageModulationManager;

__attribute__((visibility("hidden")))
@interface PUCropPerspectiveView : PUCropTransformedImageView <Swift>

{
    PLImageGeometry *_imageGeometry;
    PHLivePhotoView *_livePhotoView;
    NUMediaView *_mediaView;
    PXImageModulationManager *_imageModulationManager;
    PXImageLayerModulator *_imageLayerModulator;
    CDStruct_1b6d18a9 _cachedVideoSeekTime;
    PUCropGestureHandler *_gestureHandler;
    _Bool _muted;
    _Bool _needsLayerTransformUpdate;
    _Bool _layerTransformUpdateAnimated;
    _Bool _needsUpdateLayerTransforms;
    _Bool _needsUpdateLayerTransformsAnimated;
    _Bool _isDebugging;
    CALayer *_imageLayer;
    CALayer *_mediaSuperlayer;
    CALayer *_liveImageLayer;
    CALayer *_mediaLayer;
    CALayer *_debugLayer;
    CAShapeLayer *_debugViewRectLayer;
    CAShapeLayer *_debugCropRectLayer;
    CAShapeLayer *_debugQuadLayer;
    NUCropModel *_cropModel;
    double _lastPitchRadians;
    double _lastYawRadians;
    double _lastRollRadians;
    double _lastImageZoomScale;
    struct CGVector _lastPanRubberBandOffset;
    struct CGPoint _lastModelCropCenter;
    struct CGPoint _lastViewCropCenter;
    double _lastUICroppingRectToImageScale;
    struct CGRect _imageCropRect;
}

@property (nonatomic, readonly) struct CGRect imageCropRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setYawAngle:(double)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)layoutSubviews;
- (void)setPitchAngle:(double)arg1;
- (void)setMuted:(_Bool)arg1;
- (_Bool)isMuted;
- (void)setLivePhoto:(id)arg1;
- (id)_animateValueFromValue:(double)arg1 toValue:(double)arg2 interpolation:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)cropModel;
- (void)willBeginTrackingWithCropGestureHandler:(id)arg1;
- (void)didBeginTrackingWithCropGestureHandler:(id)arg1;
- (void)didTrackWithCropGestureHandler:(id)arg1;
- (void)didEndTrackingWithCropGestureHandler:(id)arg1;
- (void)mediaViewDidFinishRendering:(id)arg1;
- (struct CATransform3D)_imageOrientationTransformWithoutTranslation;
- (struct CATransform3D)_imageOrientationTransform;
- (struct CGSize)masterImageSize;
- (void)updateLayerTransformsAnimated:(_Bool)arg1;
- (void)updateLayerTransformsAnimated:(_Bool)arg1 viewCropRect:(struct CGRect)arg2 modelCropRect:(struct CGRect)arg3;
- (void)_resetCropRect;
- (void)setModelCropRect:(struct CGRect)arg1 viewCropRect:(struct CGRect)arg2;
- (void)setCanvasFrame:(struct CGRect)arg1;
- (void)setStraightenAngle:(double)arg1;
- (void)setNeedsLayerTransformsUpdateAnimated:(_Bool)arg1;
- (void)_setCropModel:(id)arg1;
- (void)_setLivePhotoView:(id)arg1;
- (void)setAutoloopComposition:(id)arg1;
- (void)setVideoComposition:(id)arg1 withSeekTime:(CDStruct_1b6d18a9)arg2;
- (void)tearDownMediaViewAndLayers;
- (void)_setupMediaWithComposition:(id)arg1;
- (void)setImageModulationOptions:(CDStruct_910f5d27)arg1;
- (struct CGSize)_sizeRotatedIfNeeded:(struct CGSize)arg1;
- (void)_invalidateImageModulationManager;
- (void)_invalidateImageLayerModulator;
- (void)_updateImageModulation;
- (struct CGRect)_fullCropRect;
- (double)_zoomScaleForModelCropRect:(struct CGRect)arg1;
- (double)_zoomScaleForCurrentCropRectAndModelRect;
- (double)_viewScaleWithModelCropRect:(struct CGRect)arg1;
- (struct CGAffineTransform)_modelSpaceToViewSpaceTransformWithModelCropRect:(struct CGRect)arg1 currentViewCropRect:(struct CGRect)arg2;
- (struct CGAffineTransform)imageOrientedViewCropTransform;
- (struct CGRect)viewOrientedViewCropRect:(struct CGRect)arg1;
- (struct CGRect)imageOrientedViewCropRect:(struct CGRect)arg1;
- (struct CGRect)viewCropRectForImageRect:(struct CGRect)arg1;
- (struct CGRect)imageCropRectForViewRect:(struct CGRect)arg1;
- (struct CGPoint)imagePointForViewPoint:(struct CGPoint)arg1;
- (struct CGRect)validateViewCropRectAgainstModelCropRect:(struct CGRect)arg1;
- (void)setImageCropRectFromViewCropRect:(struct CGRect)arg1 animated:(_Bool)arg2;
- (struct CGRect)_croppingRect;
- (struct CGRect)_modelCropRectUnorientedInUICoords;
- (void)handlePanGesture:(id)arg1;
- (void)handlePinchGesture:(id)arg1;

@end
