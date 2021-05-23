/*
 Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/PLExpandableView.h>

@class NSString, PLImageView, PLManagedAsset, PLVideoView;

@interface PLExpandableImageView : PLExpandableView

{
    PLImageView *_imageView;
    int _imageID;
    struct CGSize _originalSize;
    double _originalWidth;
    double _originalAngle;
    struct CGPoint _anchorPoint;
    double _imageRotationAngle;
    double _pinchWidth;
    double _pinchAngle;
    double _pinchScale;
    struct CGRect _initialExpandingFrame;
    struct CGRect _originalBounds;
    float _currentAngle;
    struct CGSize _centerOffset;
    PLManagedAsset *_photo;
    struct {
        unsigned int isRotating:1;
        unsigned int didTrack:1;
        unsigned int updateFrame:1;
        unsigned int didLayout:1;
        unsigned int alwaysDoLayout:1;
        unsigned int didComputeCenterOffset:1;
        unsigned int imageIsFullScreen:1;
    } _exImageFlags;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) struct CGSize imageSize;
@property (retain, nonatomic) PLVideoView *videoView;
@property (nonatomic, readonly) _Bool showsPlaceholder;
@property (nonatomic, getter=isBorderAndAccessoriesVisible) _Bool borderAndAccessoriesVisible;
@property (retain, nonatomic) PLManagedAsset *photo;

+ (double)imageBorderWidth;

- (void)dealloc;
- (id)image;
- (void)setImage:(id)arg1;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_contentView;
- (void)layoutSubviews;
- (id)imageView;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setShadowEnabled:(_Bool)arg1;
- (_Bool)isShadowEnabled;
- (void)setTransitionProgress:(double)arg1;
- (double)transitionProgress;
- (void)finishTransition;
- (float)_currentScale;
- (id)initWithFrame:(struct CGRect)arg1 frameStyle:(int)arg2 withBorder:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 frameStyle:(int)arg2;
- (float)_expandedScale;
- (float)_expansionFraction;
- (struct CGRect)_snappedExpandedFrame;
- (void)stateDidChangeFrom:(int)arg1;
- (void)_setOriginalSize:(struct CGSize)arg1;
- (void)beginTrackingPinch:(id)arg1;
- (void)setSize:(struct CGSize)arg1 angle:(float)arg2;
- (float)_borderAlphaForExpansionFraction:(float)arg1;
- (void)_updateBorderAndAccessoriesAlpha;
- (void)_updatePinchWidthAndScaleWithLeftPoint:(struct CGPoint)arg1 rightPoint:(struct CGPoint)arg2;
- (float)continueTrackingPinch:(id)arg1;
- (struct CGSize)_newSizeFromSize:(struct CGSize)arg1;
- (void)setTransformAndCenterForFrame:(struct CGRect)arg1;
- (float)completeTrackingPinch:(id)arg1 toState:(int)arg2 duration:(double)arg3;
- (void)_bounceBack:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_bounceToPlace:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)setImage:(id)arg1 isFullscreen:(_Bool)arg2;
- (void)setFullSizeImageJPEGData:(id)arg1 size:(struct CGSize)arg2 orientation:(long long)arg3;
- (void)setShowsPlaceholder:(_Bool)arg1;
- (struct CGRect)frameOfImage;
- (double)imageRotationAngle;
- (_Bool)isBeingManipulated;
- (void)setTextBadgeString:(id)arg1;
- (void)renderSnapshotInContext:(struct CGContext *)arg1;

@end
