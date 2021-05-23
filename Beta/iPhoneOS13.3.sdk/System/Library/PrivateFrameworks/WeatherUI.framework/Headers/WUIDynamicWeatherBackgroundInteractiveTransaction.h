/*
 Image: /System/Library/PrivateFrameworks/WeatherUI.framework/WeatherUI
 */

#import <Foundation/NSObject.h>

@class CALayer, NSArray;

__attribute__((visibility("hidden")))
@interface WUIDynamicWeatherBackgroundInteractiveTransaction : NSObject

{
    double _progress;
    NSArray *_layers;
    CALayer *_toLayer;
    long long _swipeDirection;
}

@property (nonatomic) double progress;
@property (retain, nonatomic) NSArray *layers;
@property (nonatomic) CALayer *toLayer;
@property (nonatomic) long long swipeDirection;

@end
