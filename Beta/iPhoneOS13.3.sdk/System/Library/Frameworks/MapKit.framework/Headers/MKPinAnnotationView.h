/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKAnnotationView.h>

@class UIColor, UIImageView;

@protocol _MKPinAnnotationViewDelegate;

@interface MKPinAnnotationView : MKAnnotationView

{
    UIImageView *_shadowView;
    UIColor *_pinTintColor;
    id <_MKPinAnnotationViewDelegate> _delegate;
    int _state;
    _Bool _animatesDrop;
}

@property (weak, nonatomic, setter=_setDelegate:) id <_MKPinAnnotationViewDelegate> _delegate;
@property (retain, nonatomic) UIColor *pinTintColor;
@property (nonatomic) _Bool animatesDrop;
@property (nonatomic) unsigned long long pinColor;

+ (Class)layerClass;
+ (id)_shadowImage;
+ (id)_reuseIdentifier;
+ (id)_imageCache;
+ (Class)_mapkitLeafClass;
+ (id)_imageForLayer:(long long)arg1 state:(long long)arg2 mapType:(unsigned long long)arg3 traits:(id)arg4;
+ (id)_imageForState:(long long)arg1 mapType:(unsigned long long)arg2 pinColor:(id)arg3 traits:(id)arg4;
+ (id)redPinColor;
+ (struct CGPoint)_calloutOffset;
+ (struct CGPoint)_leftCalloutOffset;
+ (struct CGPoint)_rightCalloutOffset;
+ (id)greenPinColor;
+ (id)purplePinColor;
+ (id)_pinsWithMapType:(unsigned long long)arg1 pinColor:(id)arg2 traits:(id)arg3;
+ (id)_bounceAnimation;
+ (id)_dropBounceAnimation;
+ (struct CGSize)_perceivedSize;
+ (struct CGRect)_pinFrameForPosition:(struct CGPoint)arg1;
+ (struct CGPoint)_perceivedAnchorPoint;
+ (struct CGPoint)_shadowAnchorPoint;

- (id)description;
- (int)_state;
- (void)setCenter:(struct CGPoint)arg1;
- (id)_image;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)isHighlighted;
- (void)setHighlighted:(_Bool)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_updateShadowLayer;
- (void)animationDidStart:(id)arg1;
- (void)_removeAllAnimations;
- (id)_highlightedImage;
- (id)_pins;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)_updateAnchorPosition:(struct CGPoint)arg1 alignToPixels:(_Bool)arg2;
- (void)setDragState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (struct UIEdgeInsets)_defaultCollisionAlignmentRectInsets;
- (void)_invalidateImage;
- (void)_setMapType:(unsigned long long)arg1;
- (void)_setRotationRadians:(double)arg1 withAnimation:(id)arg2;
- (void)_didUpdatePosition;
- (id)_pinBounceImages;
- (id)_pinJumpImages;
- (id)_floatingImage;
- (id)_bounceAnimation:(_Bool)arg1 withDelay:(double)arg2 addToLayer:(_Bool)arg3;
- (void)_liftForDraggingAnimated:(_Bool)arg1;
- (void)_dropAfterDraggingAndRevertPosition:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_liftForDraggingAfterBounceAnimated:(_Bool)arg1;
- (void)_liftDidEnd:(id)arg1;
- (void)_cleanupAfterPinDropAnimation;
- (struct CGPoint)_draggingDropOffset;
- (struct CGRect)_significantBounds;
- (void)_stopDrop;
- (void)_dropFromDistance:(double)arg1 maxDistance:(double)arg2 withDelay:(double)arg3;

@end
