/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString;

@interface WFNetworkSettingsConfig : NSObject

{
    _Bool _current;
    _Bool _forgetable;
    _Bool _joinable;
    _Bool _manageable;
    _Bool _cloudSyncable;
    _Bool _canRenewLease;
    _Bool _diagnosable;
    _Bool _autoJoinConfigurable;
    _Bool _autoJoinEnabled;
    _Bool _autoLoginConfigurable;
    _Bool _autoLoginEnabled;
    _Bool _saveDataModeConfigurable;
    _Bool _isInSaveDataMode;
    _Bool _httpProxyConfigurable;
    _Bool _httpProxyAuthenticationRequired;
    NSString *_ssid;
    NSArray *_healthRecommendations;
    long long _ipv4Config;
    NSString *_ipv4Address;
    NSString *_ipv4AddressManual;
    NSString *_ipv4SubnetMask;
    NSString *_ipv4SubnetMaskManual;
    NSString *_ipv4RouterAddress;
    NSString *_ipv4RouterAddressManual;
    NSString *_dhcpClientID;
    NSDate *_dhcpLeaseExpirationDate;
    long long _ipv6Config;
    NSArray *_ipv6Addresses;
    NSArray *_ipv6PrefixLengths;
    NSString *_ipv6AddressManual;
    NSString *_ipv6RouterAddress;
    NSString *_ipv6RouterAddressManual;
    NSString *_ipv6PrefixLengthManual;
    long long _dnsConfig;
    NSArray *_dnsServerAddresses;
    NSArray *_dnsSearchDomains;
    long long _httpProxyConfig;
    NSString *_httpProxyServerAddress;
    NSString *_httpProxyServerPort;
    NSString *_httpProxyUsername;
    NSString *_httpProxyPassword;
    NSString *_httpProxyConfigPAC;
}

@property (copy, nonatomic) NSString *ssid;
@property _Bool current;
@property _Bool forgetable;
@property _Bool joinable;
@property _Bool manageable;
@property _Bool cloudSyncable;
@property _Bool canRenewLease;
@property _Bool diagnosable;
@property _Bool autoJoinConfigurable;
@property _Bool autoJoinEnabled;
@property _Bool autoLoginConfigurable;
@property _Bool autoLoginEnabled;
@property _Bool saveDataModeConfigurable;
@property _Bool isInSaveDataMode;
@property (retain) NSArray *healthRecommendations;
@property long long ipv4Config;
@property (copy) NSString *ipv4Address;
@property (copy) NSString *ipv4AddressManual;
@property (copy) NSString *ipv4SubnetMask;
@property (copy) NSString *ipv4SubnetMaskManual;
@property (copy) NSString *ipv4RouterAddress;
@property (copy) NSString *ipv4RouterAddressManual;
@property (copy) NSString *dhcpClientID;
@property (copy) NSDate *dhcpLeaseExpirationDate;
@property long long ipv6Config;
@property (retain) NSArray *ipv6Addresses;
@property (retain) NSArray *ipv6PrefixLengths;
@property (copy) NSString *ipv6AddressManual;
@property (copy) NSString *ipv6RouterAddress;
@property (copy) NSString *ipv6RouterAddressManual;
@property (copy) NSString *ipv6PrefixLengthManual;
@property long long dnsConfig;
@property (retain) NSArray *dnsServerAddresses;
@property (retain) NSArray *dnsSeverAddresses;
@property (copy) NSArray *dnsSearchDomains;
@property _Bool httpProxyConfigurable;
@property long long httpProxyConfig;
@property (copy) NSString *httpProxyServerAddress;
@property (copy) NSString *httpProxyServerPort;
@property _Bool httpProxyAuthenticationRequired;
@property (copy) NSString *httpProxyUsername;
@property (copy) NSString *httpProxyPassword;
@property (copy) NSString *httpProxyConfigPAC;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)changesBetweenConfig:(id)arg1;
- (_Bool)validIPv4Configuration;
- (_Bool)validIPv6Configuration;
- (_Bool)validProxyConfiguration;
- (_Bool)isEqualToNetworkSettingsConfig:(id)arg1;

@end
