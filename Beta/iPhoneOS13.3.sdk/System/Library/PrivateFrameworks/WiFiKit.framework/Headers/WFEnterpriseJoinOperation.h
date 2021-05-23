/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <WiFiKit/WFOperation.h>

@class WFNetworkProfile, WFNetworkScanRecord;

@protocol WFWiFiJoinProxy;

@interface WFEnterpriseJoinOperation : WFOperation

{
    WFNetworkProfile *_profile;
    WFNetworkScanRecord *_network;
    id <WFWiFiJoinProxy> _joinProxy;
}

@property (retain, nonatomic) WFNetworkProfile *profile;
@property (retain, nonatomic) WFNetworkScanRecord *network;
@property (retain, nonatomic) id <WFWiFiJoinProxy> joinProxy;

- (void)start;
- (void)joinNetworkRef:(struct __WiFiNetwork *)arg1;
- (void)_handleEnterpriseJoinResult:(long long)arg1 userInfo:(id)arg2;
- (id)initWithJoinProxy:(id)arg1 network:(id)arg2 profile:(id)arg3;
- (void)_joinComplete:(int)arg1 network:(struct __WiFiNetwork *)arg2;

@end
