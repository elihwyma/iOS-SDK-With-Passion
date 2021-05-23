/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <WiFiKitUI/Swift-Protocol.h>

@class NSNumber, NSString;

@protocol WFDiagnosticsProviderContext <Swift>

@property (copy, nonatomic) CDUnknownBlockType refreshHandler;
@property (nonatomic, readonly) NSString *security;
@property (nonatomic, readonly) NSString *securityAdvice;
@property (nonatomic, readonly) NSString *BSSID;
@property (nonatomic, readonly) NSNumber *channel;
@property (nonatomic, readonly) NSString *channelString;
@property (nonatomic, readonly) NSString *channelWidth;
@property (nonatomic, readonly) NSString *channelPerformance;
@property (nonatomic, readonly) NSString *rssi;
@property (nonatomic, readonly) NSString *cca;
@property (nonatomic, readonly) NSString *adviceString;
@property (nonatomic, readonly) NSString *beaconPER;
@property (nonatomic, readonly) NSString *transmitPER;
@property (nonatomic, readonly) NSString *recvFrames;
@property (nonatomic, readonly) NSString *rssiPerformance;
@property (nonatomic, readonly) _Bool captive;
@property (nonatomic, readonly) _Bool managed;
@property (nonatomic, readonly) _Bool multiAP;
@property (nonatomic, readonly) NSString *deployment;
@property (nonatomic, readonly) NSString *motion;
@property (nonatomic, readonly) NSString *gateway;
@property (nonatomic, readonly) NSString *internet;
@property (nonatomic, readonly) NSString *probeFooter;
@property (nonatomic, readonly) NSString *awdl;
@property (nonatomic, readonly) NSString *bluetooth;
@property (nonatomic, readonly) NSString *scan;
@property (nonatomic, readonly) NSString *coexFooter;

@end
