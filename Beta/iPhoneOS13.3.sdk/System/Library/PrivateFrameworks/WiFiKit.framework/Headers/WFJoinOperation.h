/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <WiFiKit/WFOperation.h>

@class WFNetworkProfile, WFNetworkScanRecord;

@protocol WFWiFiJoinProxy;

@interface WFJoinOperation : WFOperation

{
    WFNetworkProfile *_profile;
    WFNetworkScanRecord *_network;
    id <WFWiFiJoinProxy> _joinProxy;
}

@property (retain, nonatomic) WFNetworkScanRecord *network;
@property (retain, nonatomic) id <WFWiFiJoinProxy> joinProxy;
@property (retain, nonatomic) WFNetworkProfile *profile;

- (void)start;
- (void)joinNetworkRef:(struct __WiFiNetwork *)arg1;
- (id)initWithJoinProxy:(id)arg1 network:(id)arg2 profile:(id)arg3;

@end
