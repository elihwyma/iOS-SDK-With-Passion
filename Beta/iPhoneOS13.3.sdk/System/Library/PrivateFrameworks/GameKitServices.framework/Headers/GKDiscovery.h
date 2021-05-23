/*
 Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <Foundation/NSObject.h>

@class GKDiscoveryManager;

@interface GKDiscovery : NSObject

{
    GKDiscoveryManager *_manager;
}

@property (retain, nonatomic) GKDiscoveryManager *manager;
@property (copy, nonatomic) CDUnknownBlockType playerFoundHandler;
@property (copy, nonatomic) CDUnknownBlockType playerLostHandler;
@property (copy, nonatomic) CDUnknownBlockType receiveDataHandler;

- (id)init;
- (void)dealloc;
- (void)stopAdvertising;
- (void)stopBrowsing;
- (void)sendDataToParticipant:(id)arg1 deviceID:(id)arg2 data:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (id)startAdvertisingLocalPlayer:(id)arg1 discoveryInfo:(id)arg2;
- (void)startBrowsingLocalPlayer:(id)arg1;
- (void)forgetParticipant:(id)arg1 deviceID:(id)arg2;
- (id)initWithDomain:(id)arg1 type:(id)arg2;

@end
