/*
 Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSString, NSUUID;

@interface CWFRoamStatus : NSObject

{
    int _reason;
    NSUUID *_UUID;
    NSString *_interfaceName;
    NSDate *_startedAt;
    NSDate *_endedAt;
    NSData *_SSID;
    NSString *_originOUI;
    NSString *_targetOUI;
    NSString *_fromBSSID;
    NSString *_toBSSID;
    unsigned long long _fromChannel;
    unsigned long long _toChannel;
    long long _fromRSSI;
    long long _toRSSI;
    long long _status;
}

@property (copy, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) NSString *interfaceName;
@property (copy, nonatomic) NSDate *startedAt;
@property (copy, nonatomic) NSDate *endedAt;
@property (copy, nonatomic) NSData *SSID;
@property (copy, nonatomic, readonly) NSString *networkName;
@property (copy, nonatomic) NSString *originOUI;
@property (copy, nonatomic) NSString *targetOUI;
@property (copy, nonatomic) NSString *fromBSSID;
@property (copy, nonatomic) NSString *toBSSID;
@property (nonatomic) unsigned long long fromChannel;
@property (nonatomic) unsigned long long toChannel;
@property (nonatomic) long long fromRSSI;
@property (nonatomic) long long toRSSI;
@property (nonatomic) int reason;
@property (nonatomic) long long status;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToRoamStatus:(id)arg1;

@end
