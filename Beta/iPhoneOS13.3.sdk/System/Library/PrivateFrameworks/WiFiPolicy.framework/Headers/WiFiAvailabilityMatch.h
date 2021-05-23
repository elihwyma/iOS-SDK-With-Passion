/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@protocol WiFiCandidateNetwork, WiFiScannedNetwork;

@interface WiFiAvailabilityMatch : NSObject

{
    _Bool _unwantedNetworkName;
    long long _priority;
    id <WiFiCandidateNetwork> _network;
    NSString *_SSID;
    id <WiFiScannedNetwork> _scannedNetwork;
    NSDate *_matchedAt;
}

@property (retain, nonatomic) id <WiFiScannedNetwork> scannedNetwork;
@property (retain, nonatomic) NSDate *matchedAt;
@property (nonatomic) _Bool unwantedNetworkName;
@property (copy, nonatomic, readonly) NSString *SSID;
@property (nonatomic, readonly) id <WiFiCandidateNetwork> network;
@property (nonatomic, readonly) long long priority;

+ (id)matchWithNetwork:(id)arg1 scannedNetwork:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithNetwork:(id)arg1 scannedNetwork:(id)arg2;
- (_Bool)isEqualToAvailabilityMatch:(id)arg1;
- (_Bool)isEqualToScannedNetwork:(id)arg1;

@end
