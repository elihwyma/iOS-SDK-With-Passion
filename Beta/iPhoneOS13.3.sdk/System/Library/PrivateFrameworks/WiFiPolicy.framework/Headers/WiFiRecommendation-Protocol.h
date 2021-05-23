/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

@class NSString;

@protocol WiFiCandidateNetwork, WiFiScannedNetwork;

@protocol WiFiRecommendation

@property (copy, nonatomic, readonly) NSString *SSID;
@property (nonatomic, readonly) id <WiFiCandidateNetwork> network;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly) id <WiFiScannedNetwork> scannedNetwork;
@property (nonatomic, readonly) _Bool unwantedNetworkName;

@end
