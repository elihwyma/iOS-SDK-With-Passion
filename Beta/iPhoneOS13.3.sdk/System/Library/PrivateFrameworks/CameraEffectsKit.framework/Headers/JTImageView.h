/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <UIKit/UIView.h>

@class JTImage;

@interface JTImageView : UIView

{
    _Bool _preferIOSurfaceForYUV;
    _Bool _preferMetalKit;
    _Bool _enableDebugDrawing;
    _Bool _disableIOSurface;
    _Bool _disableMetalKit;
    JTImage *_jtImage;
    long long _imageViewType;
    long long _currentImageViewType;
    UIView *_imageView;
}

@property (nonatomic) long long currentImageViewType;
@property (retain, nonatomic) UIView *imageView;
@property (retain, nonatomic) JTImage *jtImage;
@property (nonatomic) long long imageViewType;
@property (nonatomic) _Bool preferIOSurfaceForYUV;
@property (nonatomic) _Bool preferMetalKit;
@property (nonatomic) _Bool enableDebugDrawing;
@property (nonatomic) _Bool disableIOSurface;
@property (nonatomic) _Bool disableMetalKit;

+ (id)colorFromRenderingType:(long long)arg1;
+ (id)colorFromImageViewType:(long long)arg1;
+ (_Bool)normalizedQuadVertices:(CDStruct_c8b391b0 *)arg1 viewSize:(struct CGSize)arg2 textureSize:(struct CGSize)arg3 contentMode:(long long)arg4;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setContentMode:(long long)arg1;
- (void)updateDebugDrawing;
- (void)flipX;
- (void)JTImageView_commonInit;
- (long long)preferredImageViewTypeForImage:(id)arg1;
- (void)updateImageViewImage;
- (void)reconfigureImageView;
- (id)stringFromImageViewType:(long long)arg1;

@end
