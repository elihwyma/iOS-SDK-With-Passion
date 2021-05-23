/*
 Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
 */

#import <Foundation/NSObject.h>

@interface CWFRangingMeasurement : NSObject

{
    unsigned long long _roundTripTime;
    long long _RSSI;
    unsigned long long _channel;
}

@property (nonatomic) unsigned long long roundTripTime;
@property (nonatomic) long long RSSI;
@property (nonatomic) unsigned long long channel;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToRangingMeasurement:(id)arg1;

@end
