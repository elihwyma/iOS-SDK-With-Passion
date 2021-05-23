/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <WatchKit/SPComplicationData.h>

@class NSString;

@interface SPWeatherComplicationData : SPComplicationData

{
    NSString *_temperatureText;
    NSString *_locationText;
    NSString *_currentConditionsText;
    long long _currentConditionsEnum;
    NSString *_highLowText;
}

@property (retain, nonatomic) NSString *temperatureText;
@property (retain, nonatomic) NSString *locationText;
@property (retain, nonatomic) NSString *currentConditionsText;
@property (nonatomic) long long currentConditionsEnum;
@property (retain, nonatomic) NSString *highLowText;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
