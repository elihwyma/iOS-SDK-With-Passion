/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class CALayer, CLKDevice, NSString, NTKColoringImageView, UIColor, UIImage, UIImageView;

@protocol CLKMonochromeFilterProvider;

@interface NTKHandView : UIView <Swift>

{
    UIImageView *_shadowImageView;
    CALayer *_inlayLayer;
    UIView *_handDotView;
    _Bool _shadowsHidden;
    id <CLKMonochromeFilterProvider> _filterProvider;
    UIColor *_color;
    UIImage *_image;
    double _zRotation;
    double _scale;
    UIColor *_inlayColor;
    UIImage *_shadowImage;
    UIView *_transitionContainerView;
    UIColor *_handDotColor;
    NTKColoringImageView *_handImageView;
    CLKDevice *_device;
    unsigned long long _style;
    struct UIEdgeInsets _inlayInsets;
    struct UIEdgeInsets _shadowInsets;
}

@property (nonatomic, readonly) CALayer *inlayLayer;
@property (nonatomic, readonly) UIView *handDotView;
@property (nonatomic, readonly) NTKColoringImageView *handImageView;
@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic, readonly) unsigned long long style;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) double zRotation;
@property (nonatomic) double scale;
@property (retain, nonatomic) UIColor *inlayColor;
@property (nonatomic) struct UIEdgeInsets inlayInsets;
@property (nonatomic) _Bool shadowsHidden;
@property (nonatomic) struct UIEdgeInsets shadowInsets;
@property (retain, nonatomic) UIImage *shadowImage;
@property (retain, nonatomic) UIView *transitionContainerView;
@property (retain, nonatomic) UIColor *handDotColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CLKMonochromeFilterProvider> filterProvider;

- (void)layoutSubviews;
- (void)_updateTransform;
- (id)initWithImage:(id)arg1 forDevice:(id)arg2;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (id)initWithImage:(id)arg1 style:(unsigned long long)arg2 forDevice:(id)arg3;
- (void)setupHandDotViewWithDiameter:(double)arg1;
- (void)_updateShadows;
- (void)_layoutInlayLayer;
- (void)noModelUpdate_setColor:(id)arg1;
- (void)_adjustHandImageSubviewOrder;
- (void)noModelUpdate_setInlayColor:(id)arg1;
- (void)noModelUpdate_setInlayInsets:(struct UIEdgeInsets)arg1;
- (void)noModelUpdate_setHandDotColor:(id)arg1;

@end
