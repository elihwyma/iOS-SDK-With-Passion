/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <Foundation/NSObject.h>

@interface SiriCoreWiFiManagerClient : NSObject

{
    int _type;
    struct __WiFiManagerClient *_primitiveWiFiManagerClient;
    long long _rssi;
    long long _snr;
}

- (id)init;
- (void)dealloc;
- (_Bool)isWifiEnabled;
- (void)releaseWiFiAssertion;
- (void)acquireWiFiAssertion:(long long)arg1;
- (struct __WiFiManagerClient *)_primitiveWiFiManagerClient;
- (void)_setWiFiManagerClientType:(int)arg1;
- (_Bool)hasAssociatedNetworkWithRSSI:(long long *)arg1 andSNR:(long long *)arg2 andPhyMode:(id *)arg3 andChannelInfo:(id *)arg4 isCaptive:(_Bool *)arg5;
- (void)registerOneShotEnabledHandler:(CDUnknownBlockType)arg1;

@end
