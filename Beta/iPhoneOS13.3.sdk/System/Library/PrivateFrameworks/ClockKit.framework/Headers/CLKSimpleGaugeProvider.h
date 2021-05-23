/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKGaugeProvider.h>

@interface CLKSimpleGaugeProvider : CLKGaugeProvider

{
    float _fillFraction;
}

@property (nonatomic) float fillFraction;

+ (_Bool)supportsSecureCoding;
+ (id)gaugeProviderWithStyle:(long long)arg1 gaugeColors:(id)arg2 gaugeColorLocations:(id)arg3 fillFraction:(float)arg4;
+ (id)gaugeProviderWithStyle:(long long)arg1 gaugeColor:(id)arg2 fillFraction:(float)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)validate;
- (struct NSNumber *)startUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (id)initWithJSONObjectRepresentation:(id)arg1;
- (id)JSONObjectRepresentation;
- (_Bool)needsTimerUpdates;
- (double)progressFractionForNow:(id)arg1;
- (void)stopUpdatesForToken:(struct NSNumber *)arg1;

@end
