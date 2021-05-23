/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class UIColor;

@interface HKLineSeriesPointMarkerStyle : NSObject

{
    UIColor *_pointColor;
    double _radius;
    long long _pointMarkerStyle;
}

@property (retain, nonatomic) UIColor *pointColor;
@property (nonatomic) double radius;
@property (nonatomic) long long pointMarkerStyle;

- (id)initWithColor:(id)arg1 radius:(double)arg2 style:(long long)arg3;

@end
