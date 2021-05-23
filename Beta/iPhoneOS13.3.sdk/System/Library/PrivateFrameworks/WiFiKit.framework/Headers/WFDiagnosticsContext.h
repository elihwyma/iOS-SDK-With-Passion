/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString, WFNetworkProfile, WFNetworkScanRecord;

@interface WFDiagnosticsContext : NSObject

{
    _Bool _captive;
    _Bool _multiAP;
    _Bool _managed;
    NSString *_BSSID;
    NSNumber *_channel;
    NSString *_channelPerformance;
    long long requestedFields;
    NSString *_rssi;
    NSString *_rssiPerformance;
    CDUnknownBlockType refreshHandler;
    NSString *_security;
    NSString *_adviceString;
    NSString *_awdl;
    NSString *_beaconPER;
    NSString *_bluetooth;
    NSString *_cca;
    NSString *_channelString;
    NSString *_channelWidth;
    NSString *_coexFooter;
    NSString *_deployment;
    NSString *_motion;
    NSString *_gateway;
    NSString *_internet;
    NSString *_probeFooter;
    NSString *_recvFrames;
    NSString *_scan;
    NSString *_securityAdvice;
    NSString *_transmitPER;
    WFNetworkScanRecord *_network;
    WFNetworkProfile *_profile;
    struct __WiFiManagerClient *_manager;
    struct __WiFiDeviceClient *_device;
}

@property (retain, nonatomic) WFNetworkScanRecord *network;
@property (retain, nonatomic) WFNetworkProfile *profile;
@property (nonatomic) struct __WiFiManagerClient *manager;
@property (nonatomic) struct __WiFiDeviceClient *device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long requestedFields;
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

- (void)cancel;
- (id)initWithNetwork:(id)arg1 profile:(id)arg2;
- (void)updateInfo:(id)arg1;

@end
