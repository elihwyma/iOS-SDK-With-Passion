/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <Foundation/NSObject.h>

@class HKSample, NSString;

__attribute__((visibility("hidden")))
@interface WDHeartRateSession : NSObject

{
    long long _sessionType;
    HKSample *_sample;
    NSString *_heartRateRange;
}

@property (nonatomic) long long sessionType;
@property (retain, nonatomic) HKSample *sample;
@property (retain, nonatomic) NSString *heartRateRange;

- (id)overlayColor;
- (id)dateString;
- (id)initWithSample:(id)arg1 sessionType:(long long)arg2;
- (void)setHeartRateRangeMin:(id)arg1 max:(id)arg2;
- (id)sessionDetail;
- (id)fixedChartTitle;
- (long long)distributionStyle;
- (id)annotationColors;

@end
