/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor;

@interface HUQuickControlSliderValueOverlayView : UIView

{
    _Bool _off;
    _Bool _hasSecondGrabber;
    _Bool _showGrabbers;
    UIColor *_layerColor;
    unsigned long long _primaryGrabberLocation;
    unsigned long long _controlSize;
    CAShapeLayer *_primaryGrabberShadowLayer;
    CAShapeLayer *_secondaryGrabberShadowLayer;
    UIView *_topBorder;
}

@property (nonatomic, readonly) CAShapeLayer *layer;
@property (retain, nonatomic) CAShapeLayer *primaryGrabberShadowLayer;
@property (weak, nonatomic) CAShapeLayer *secondaryGrabberShadowLayer;
@property (retain, nonatomic) UIView *topBorder;
@property (nonatomic, getter=isOff) _Bool off;
@property (nonatomic) _Bool hasSecondGrabber;
@property (nonatomic) _Bool showGrabbers;
@property (nonatomic) unsigned long long primaryGrabberLocation;
@property (nonatomic) unsigned long long controlSize;
@property (retain, nonatomic) UIColor *layerColor;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateBlendMode;
- (void)_updateShape;
- (id)_createGrabberShadowLayer;

@end
