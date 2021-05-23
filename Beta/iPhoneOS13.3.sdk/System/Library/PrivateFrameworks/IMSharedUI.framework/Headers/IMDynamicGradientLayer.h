/*
 Image: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
 */

#import <QuartzCore/CALayer.h>

@interface IMDynamicGradientLayer : CALayer

- (id)init;
- (void)dealloc;
- (id)description;
- (struct CGColorSpace *)colorSpace;
- (void)setColorSpace:(struct CGColorSpace *)arg1;
- (void)setColors:(id)arg1;
- (id)gradientLayer;
- (id)referenceView;
- (void)setReferenceView:(id)arg1;
- (void)setScreenScale:(double)arg1;
- (struct CGImage *)gradient;
- (void)setGradientLayer:(id)arg1;
- (id)colors;
- (void)layoutSublayers;
- (double)screenScale;
- (void)layerDidBecomeVisible:(_Bool)arg1;
- (void)setGradientFrame:(struct CGRect)arg1;
- (struct CGRect)gradientFrame;
- (void)setTrackingLayer:(id)arg1;
- (id)trackingLayer;
- (void)_updateAnimation;
- (void)_updateGradientImage;
- (double)_floorToPixels:(double)arg1;
- (void)didMoveToWindow:(id)arg1;

@end
