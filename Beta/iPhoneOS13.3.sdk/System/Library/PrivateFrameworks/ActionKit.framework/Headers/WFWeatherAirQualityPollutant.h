/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

#import <ActionKit/Swift-Protocol.h>

@class NSMeasurement, NSString;

@interface WFWeatherAirQualityPollutant : NSObject <Swift>

{
    NSString *_localizedName;
    NSString *_localizedDescription;
    NSMeasurement *_concentration;
}

@property (copy, nonatomic, readonly) NSString *localizedName;
@property (copy, nonatomic, readonly) NSString *localizedDescription;
@property (copy, nonatomic, readonly) NSMeasurement *concentration;
@property (copy, nonatomic, readonly) NSString *wfName;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAirPollutant:(id)arg1;

@end
