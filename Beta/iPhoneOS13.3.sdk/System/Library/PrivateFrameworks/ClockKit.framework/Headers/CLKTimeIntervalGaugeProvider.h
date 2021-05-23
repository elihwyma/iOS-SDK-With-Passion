/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKGaugeProvider.h>

@class NSDate, NSMutableDictionary;

@interface CLKTimeIntervalGaugeProvider : CLKGaugeProvider

{
    unsigned long long _nextUpdateToken;
    NSMutableDictionary *_updateHandlersByToken;
    struct NSNumber *_timerToken;
    _Bool _paused;
    float _startFillFraction;
    float _endFillFraction;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) float startFillFraction;
@property (nonatomic) float endFillFraction;

+ (_Bool)supportsSecureCoding;
+ (id)gaugeProviderWithStyle:(long long)arg1 gaugeColors:(id)arg2 gaugeColorLocations:(id)arg3 startDate:(id)arg4 startFillFraction:(float)arg5 endDate:(id)arg6 endFillFraction:(float)arg7;
+ (id)gaugeProviderWithStyle:(long long)arg1 gaugeColors:(id)arg2 gaugeColorLocations:(id)arg3 startDate:(id)arg4 endDate:(id)arg5;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_update;
- (_Bool)paused;
- (void)setPaused:(_Bool)arg1;
- (void)validate;
- (struct NSNumber *)startUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (id)initWithJSONObjectRepresentation:(id)arg1;
- (id)JSONObjectRepresentation;
- (_Bool)needsTimerUpdates;
- (double)progressFractionForNow:(id)arg1;
- (void)stopUpdatesForToken:(struct NSNumber *)arg1;
- (void)_maybeStartOrStopUpdates;

@end
