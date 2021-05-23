/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

@class UIImageView;

@interface OFUITrackingPinchView

{
    UIImageView *_imageView;
    struct CGPoint _anchorPoint;
    struct CGPoint _originalCenter;
    struct CGSize _originalSize;
    _Bool _isRotating;
    double _originalAngle;
    double _currentAngle;
}

@property struct CGPoint originalCenter;

- (void)dealloc;
- (id)image;
- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setContentsRect:(struct CGRect)arg1;
- (void)beginTrackingPinch:(id)arg1;
- (void)setSize:(struct CGSize)arg1 angle:(float)arg2;
- (void)continueTrackingPinch:(id)arg1;
- (void)completeTrackingPinch:(id)arg1;

@end
