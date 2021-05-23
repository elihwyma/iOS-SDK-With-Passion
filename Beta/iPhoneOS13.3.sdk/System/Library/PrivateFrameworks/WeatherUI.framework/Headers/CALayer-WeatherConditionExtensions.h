/*
 Image: /System/Library/PrivateFrameworks/WeatherUI.framework/WeatherUI
 */

#import <QuartzCore/CALayer.h>

@interface CALayer (WeatherConditionExtensions)

@property (nonatomic) double originalOpacity;
@property (nonatomic) struct CGPoint lastPosition;
@property (nonatomic) double lastScale;

@end
