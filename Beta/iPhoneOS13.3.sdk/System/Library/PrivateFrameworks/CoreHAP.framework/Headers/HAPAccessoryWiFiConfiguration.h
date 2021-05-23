/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <CoreHAP/HAPAccessoryConfiguration.h>

@class NSData, NSString;

@interface HAPAccessoryWiFiConfiguration : HAPAccessoryConfiguration

{
    NSString *_ssid;
    NSData *_psk;
    NSString *_isoCountryCode;
}

@property (nonatomic, readonly) NSString *ssid;
@property (nonatomic, readonly) NSData *psk;
@property (nonatomic, readonly) NSString *isoCountryCode;

+ (id)accessoryConfigurationWithSsid:(id)arg1 psk:(id)arg2 country:(id)arg3;

- (id)description;
- (id)initWithSSID:(id)arg1 psk:(id)arg2 country:(id)arg3;

@end
