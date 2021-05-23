/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CLKDevice, UIColor, UIImageView;

@interface NTKAstronomyLocationDot : UIView

{
    UIView *_outerDot;
    UIImageView *_innerDotImageView;
    _Bool _animating;
    CLKDevice *_device;
    UIColor *_outerDotColor;
    double _outerDotDiameter;
    UIColor *_innerDotColor;
    double _innerDotDiameter;
    double _pulseDuration;
    double _pulseAlphaDelay;
}

@property (nonatomic, readonly) CLKDevice *device;
@property (retain, nonatomic) UIColor *outerDotColor;
@property (nonatomic) double outerDotDiameter;
@property (retain, nonatomic) UIColor *innerDotColor;
@property (nonatomic) double innerDotDiameter;
@property (nonatomic) double pulseDuration;
@property (nonatomic) double pulseAlphaDelay;
@property (nonatomic) _Bool animating;

+ (id)_defaultColor;
+ (struct CGSize)_defaultSize;
+ (double)_defaultOuterDotDiameterForSizeClass:(unsigned long long)arg1;
+ (double)_defaultInnerDotDiameterForSizeClass:(unsigned long long)arg1;
+ (double)defaultPulseDuration;
+ (double)defaultPulseAlphaDelay;

- (void)layoutSubviews;
- (void)startAnimation;
- (void)stopAnimation;
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2;
- (id)initForDevice:(id)arg1;
- (void)_generateInnerDotImage;

@end
