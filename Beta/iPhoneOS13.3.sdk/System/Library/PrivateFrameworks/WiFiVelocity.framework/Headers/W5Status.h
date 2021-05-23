/*
 Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

#import <Foundation/NSObject.h>

@class W5AWDLStatus, W5BluetoothStatus, W5NetworkStatus, W5PowerStatus, W5WiFiStatus;

@interface W5Status : NSObject

{
    W5WiFiStatus *_wifi;
    W5AWDLStatus *_awdl;
    W5BluetoothStatus *_bluetooth;
    W5NetworkStatus *_network;
    W5PowerStatus *_power;
}

@property (copy, nonatomic) W5WiFiStatus *wifi;
@property (copy, nonatomic) W5AWDLStatus *awdl;
@property (copy, nonatomic) W5BluetoothStatus *bluetooth;
@property (copy, nonatomic) W5NetworkStatus *network;
@property (copy, nonatomic) W5PowerStatus *power;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToStatus:(id)arg1;

@end
