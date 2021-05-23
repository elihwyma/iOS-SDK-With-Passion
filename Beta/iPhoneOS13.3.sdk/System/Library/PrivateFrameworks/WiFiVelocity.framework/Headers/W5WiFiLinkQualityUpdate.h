/*
 Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

#import <Foundation/NSObject.h>

@interface W5WiFiLinkQualityUpdate : NSObject

{
    float _cca;
    long long _rssi;
    long long _txRate;
    double _timestamp;
}

@property (nonatomic) long long rssi;
@property (nonatomic) long long txRate;
@property (nonatomic) float cca;
@property (nonatomic) double timestamp;

+ (_Bool)supportsSecureCoding;

- (_Bool)conformsToProtocol:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
