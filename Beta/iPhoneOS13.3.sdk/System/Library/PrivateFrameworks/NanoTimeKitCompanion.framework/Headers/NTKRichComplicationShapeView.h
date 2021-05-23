/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class CAGradientLayer, CALayer, CAShapeLayer, CLKDevice, NSArray, NSString;

@protocol CLKMonochromeFilterProvider;

@interface NTKRichComplicationShapeView : UIView <Swift>

{
    CLKDevice *_device;
    struct CGRect _previousBounds;
    _Bool _willUnfreezeForTransaction;
    UIView *_filterView;
    CALayer *_freezeLayer;
    CAShapeLayer *_shapeLayer;
    CAGradientLayer *_gradientLayer;
    NSArray *_gradientColors;
    NSArray *_filteredGradientColors;
    NSArray *_gradientLocations;
    double _monochromeFraction;
    id <CLKMonochromeFilterProvider> _filterProvider;
    double _progress;
    long long _filterStyle;
}

@property (retain, nonatomic) NSArray *gradientColors;
@property (nonatomic) double progress;
@property (nonatomic, readonly) long long filterStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CLKMonochromeFilterProvider> filterProvider;

- (id)device;
- (void)layoutSubviews;
- (id)shapeLayer;
- (id)gradientLayer;
- (void)_updatePath;
- (struct CGPath *)_generatePath;
- (void)_updateGradient;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (struct CGPoint)_pointAtProgress:(float)arg1;
- (void)_setupShapeLayer:(id)arg1;
- (id)_shapeStrokeColor;
- (id)initForDevice:(id)arg1 withFilterStyle:(long long)arg2;
- (void)_setupGradientLayer:(id)arg1;
- (double)_shapeLineWidth;
- (id)_normalizeGradientLocations:(id)arg1;
- (_Bool)_shouldReverseGradient;
- (struct CGPoint)pointAtProgress:(float)arg1;
- (void)setGradientColors:(id)arg1 locations:(id)arg2;
- (void)unfreezeForTransaction;

@end
