/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKCalloutView.h>

@class CALayer, CAShapeLayer, UIColor, UIImage, UIImageView, UIView;

@interface _MKBalloonCalloutView : MKCalloutView

{
    UIView *_shadowView;
    UIView *_containerView;
    UIColor *_balloonTintColor;
    UIColor *_strokeColor;
    UIColor *_innerStrokeColor;
    CAShapeLayer *_balloonShape;
    CALayer *_balloonInnerStrokeLayer;
    UIImageView *_balloonBodyImageView;
    UIImageView *_tailView;
    UIView *_innerBackgroundView;
    UIImageView *_imageView;
    struct CGSize _intrinsicSize;
    struct CGSize _shadowSize;
    _Bool _originatesAsSmallBalloon;
    double _croppedImageScale;
    UIImageView *_contentViewMaskView;
    UIView *_contentView;
    long long _style;
    UIImage *_image;
    double _smallBalloonScale;
}

@property (nonatomic, readonly) long long style;
@property (copy, nonatomic) UIImage *image;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) _Bool originatesAsSmallBalloon;
@property (nonatomic) double smallBalloonScale;
@property (copy, nonatomic) UIColor *balloonTintColor;
@property (copy, nonatomic) UIColor *strokeColor;
@property (copy, nonatomic) UIColor *innerStrokeColor;

- (void)_commonInit;
- (struct CGSize)intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1;
- (void)_updateStyle;
- (void)didMoveToWindow;
- (_Bool)calloutContainsPoint:(struct CGPoint)arg1;
- (id)initWithAnnotationView:(id)arg1;
- (void)showAnimated:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dismissAnimated:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (double)_innerDiameter;
- (void)_handleTapOnCallout:(id)arg1;
- (struct CGRect)_centerFrame;
- (id)_generateInnerStrokeImage;
- (void)_updateCroppedImage;
- (void)showCalloutAnimated:(_Bool)arg1;
- (void)hideCalloutAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
