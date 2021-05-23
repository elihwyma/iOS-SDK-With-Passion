/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@interface WLWiFiDeviceClient : NSObject

{
    struct __WiFiDeviceClient *_ref;
}

@property (nonatomic) struct __WiFiDeviceClient *ref;

- (void)dealloc;
- (id)hostedNetworkMatchingSSID:(id)arg1;
- (void)disassociate;
- (void)startNetworkWithHostRole:(int)arg1 request:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)stopNetwork:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_hostedNetworks;
- (int)_startNetworkWithRole:(int)arg1 request:(id)arg2 session:(id)arg3;
- (int)_stopNetwork:(id)arg1 session:(id)arg2;
- (id)initWithWiFiDeviceClientRef:(struct __WiFiDeviceClient *)arg1;
- (id)_initWithoutWiFiDeviceClientRef;
- (_Bool)_completionMapsAreEmpty;

@end
