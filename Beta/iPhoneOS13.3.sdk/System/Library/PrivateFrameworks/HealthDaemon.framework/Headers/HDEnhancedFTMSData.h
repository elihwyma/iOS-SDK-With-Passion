/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthServiceCharacteristic.h>

@class NSDate, NSNumber;

@interface HDEnhancedFTMSData : HDHealthServiceCharacteristic

{
    NSNumber *_instantaneousSpeed;
    NSNumber *_averageSpeed;
}

@property (retain, nonatomic) NSNumber *instantaneousSpeed;
@property (retain, nonatomic) NSNumber *averageSpeed;
@property (nonatomic, readonly) NSDate *updateTime;

+ (id)uuid;
+ (id)_buildWithBinaryValue:(id)arg1 error:(id *)arg2;

- (id)description;
- (id)generateDatums:(id)arg1;
- (id)getBinaryValueWithError:(id *)arg1;

@end
