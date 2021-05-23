/*
 Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSString, W5WiFiChannel, W5WiFiPreferredNetwork, W5WiFiScanResult;

@interface W5WiFiStatus : NSObject

{
    _Bool _powerOn;
    int _opMode;
    unsigned int _eapolControlMode;
    unsigned int _eapolSupplicantState;
    int _phyMode;
    int _btcMode;
    NSString *_macAddress;
    NSString *_interfaceName;
    NSData *_power;
    NSString *_ssidString;
    NSData *_ssid;
    NSString *_bssid;
    long long _rssi;
    long long _noise;
    double _txRate;
    long long _security;
    unsigned long long _mcsIndex;
    unsigned long long _guardInterval;
    unsigned long long _numberOfSpacialStreams;
    W5WiFiChannel *_channel;
    NSArray *_linkQualityUpdates;
    NSArray *_supportedChannels;
    NSString *_countryCode;
    NSString *_networkServiceID;
    long long _ipv4ConfigMethod;
    long long _ipv6ConfigMethod;
    NSArray *_ipv4Addresses;
    NSArray *_ipv6Addresses;
    NSString *_ipv4RouterAddress;
    NSString *_ipv6RouterAddress;
    NSArray *_dnsAddresses;
    NSData *_chainAck;
    NSData *_txChainPower;
    NSData *_desense;
    NSData *_desenseLevel;
    NSData *_btcConfig;
    NSData *_btcProfiles2GHz;
    NSData *_btcProfiles5GHz;
    W5WiFiScanResult *_lastJoinedScanResult;
    W5WiFiPreferredNetwork *_lastJoinedPreferredNetwork;
    NSArray *_cachedScanResults;
}

@property (copy, nonatomic) NSString *macAddress;
@property (copy, nonatomic) NSString *interfaceName;
@property (nonatomic) _Bool powerOn;
@property (copy, nonatomic) NSData *power;
@property (nonatomic) int opMode;
@property (copy, nonatomic) NSString *ssidString;
@property (copy, nonatomic) NSData *ssid;
@property (copy, nonatomic) NSString *bssid;
@property (nonatomic) long long rssi;
@property (nonatomic) long long noise;
@property (nonatomic) double txRate;
@property (nonatomic) long long security;
@property (nonatomic) unsigned int eapolControlMode;
@property (nonatomic) unsigned int eapolSupplicantState;
@property (nonatomic) int phyMode;
@property (nonatomic) unsigned long long mcsIndex;
@property (nonatomic) unsigned long long guardInterval;
@property (nonatomic) unsigned long long numberOfSpacialStreams;
@property (copy, nonatomic) W5WiFiChannel *channel;
@property (copy, nonatomic) NSArray *linkQualityUpdates;
@property (copy, nonatomic) NSArray *supportedChannels;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *networkServiceID;
@property (nonatomic) long long ipv4ConfigMethod;
@property (nonatomic) long long ipv6ConfigMethod;
@property (copy, nonatomic) NSArray *ipv4Addresses;
@property (copy, nonatomic) NSArray *ipv6Addresses;
@property (copy, nonatomic) NSString *ipv4RouterAddress;
@property (copy, nonatomic) NSString *ipv6RouterAddress;
@property (copy, nonatomic) NSArray *dnsAddresses;
@property (nonatomic) int btcMode;
@property (copy, nonatomic) NSData *chainAck;
@property (copy, nonatomic) NSData *txChainPower;
@property (copy, nonatomic) NSData *desense;
@property (copy, nonatomic) NSData *desenseLevel;
@property (copy, nonatomic) NSData *btcConfig;
@property (copy, nonatomic) NSData *btcProfiles2GHz;
@property (copy, nonatomic) NSData *btcProfiles5GHz;
@property (copy, nonatomic) W5WiFiScanResult *lastJoinedScanResult;
@property (copy, nonatomic) W5WiFiPreferredNetwork *lastJoinedPreferredNetwork;
@property (copy, nonatomic) NSArray *cachedScanResults;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToWiFiStatus:(id)arg1;

@end
