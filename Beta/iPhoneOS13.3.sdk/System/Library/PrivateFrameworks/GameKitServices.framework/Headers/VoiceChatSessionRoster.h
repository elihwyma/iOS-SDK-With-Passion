/*
 Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <Foundation/NSObject.h>

@class GKSessionInternal, GKVoiceChatSessionInternal, NSMutableArray, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface VoiceChatSessionRoster : NSObject

{
    GKSessionInternal *_gkSession;
    NSString *_peerID;
    GKVoiceChatSessionInternal *_gkvs;
    NSObject<OS_dispatch_queue> *_sendQueue;
    NSMutableArray *_connectedPeers;
    NSMutableDictionary *_peerStateTable;
    struct _opaque_pthread_mutex_t resMutex;
    _Bool _needsUpdateBeaconList;
    _Bool _waitingToCalculateFocus;
    unsigned int _deviceRating;
    unsigned int _focusRating;
    unsigned int _chosenFocusRating;
    unsigned int _focusID;
    _Bool _isBeaconUp;
    _Bool _hasFocus;
}

- (void)dealloc;
- (void)cleanup;
- (_Bool)hasFocus;
- (id)initWithGKSession:(id)arg1 peerID:(id)arg2 voiceChatSession:(id)arg3 sendQueue:(id)arg4;
- (void)startBeaconWrapper:(id)arg1;
- (unsigned int)focusID;
- (id)subscribedPeers;
- (void)stopBeacon;
- (void)peer:(id)arg1 didChangeState:(unsigned int)arg2;
- (void)receivedBeacon:(id)arg1 fromPeer:(id)arg2;
- (_Bool)recalculateFocusRating;
- (void)updateBeacon;
- (void)configureDeviceRating;
- (void)startBeacon;
- (void)sendBeacons;
- (void)calculateFocus:(id)arg1;
- (void)sendBeacon:(struct tagVoiceChatBeacon *)arg1 ToPeer:(id)arg2;
- (void)processSubscribeBeacon:(struct tagVoiceChatBeacon *)arg1 beaconState:(id)arg2 fromPeer:(id)arg3;
- (void)processUnsubscribeBeacon:(struct tagVoiceChatBeacon *)arg1 beaconState:(id)arg2 fromPeer:(id)arg3;

@end
