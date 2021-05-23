/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WFNetworkInterface : NSObject

{
    NSString *_interfaceName;
}

@property (nonatomic, readonly) NSString *interfaceName;
@property (nonatomic, readonly) NSString *SSID;
@property (nonatomic, readonly) NSString *BSSID;
@property (nonatomic, readonly) NSString *IPv4Address;
@property (nonatomic, readonly) NSString *IPv6Address;

+ (id)networkInterfaceWithInterface:(id)arg1;
+ (id)activeNetworkInterface;
+ (id)defaultNetworkInterfaces;
+ (id)wifiNetworkInterfaces;

- (id)initWithInterface:(id)arg1;
- (struct __WiFiNetwork *)currentWiFiNetwork;
- (id)ipAddressForFamily:(unsigned char)arg1;

@end
