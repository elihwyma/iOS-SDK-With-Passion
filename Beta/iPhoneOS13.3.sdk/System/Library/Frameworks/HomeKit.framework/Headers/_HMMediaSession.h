/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class HMAudioControl, HMFUnfairLock, NSString, NSUUID, _HMContext;

@protocol OS_dispatch_queue, _HMMediaSessionDelegate;

__attribute__((visibility("hidden")))
@interface _HMMediaSession : NSObject

{
    HMFUnfairLock *_lock;
    NSUUID *_uuid;
    NSString *_routeUID;
    long long _playbackState;
    long long _shuffleState;
    long long _repeatState;
    NSString *_mediaUniqueIdentifier;
    _HMContext *_context;
    NSUUID *_uniqueIdentifier;
    NSUUID *_messageTargetUUID;
    HMAudioControl *_audioControl;
    id <_HMMediaSessionDelegate> _delegate;
}

@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (retain, nonatomic) NSUUID *messageTargetUUID;
@property (weak, nonatomic) id <_HMMediaSessionDelegate> delegate;
@property (readonly) long long playbackState;
@property (readonly) long long shuffleState;
@property (readonly) long long repeatState;
@property (copy, readonly) NSString *mediaUniqueIdentifier;
@property (nonatomic, readonly) NSString *routeUID;
@property (retain, nonatomic) _HMContext *context;
@property (readonly) HMAudioControl *audioControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;

- (_Bool)isEqual:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setRouteUID:(id)arg1;
- (void)setPlaybackState:(long long)arg1;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (id)messageDestination;
- (void)updatePlaybackState:(id)arg1;
- (void)_handleSessionPlaybackUpdated:(id)arg1;
- (void)_handleSessionRouteUIDUpdated:(id)arg1;
- (void)_updateMediaState:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_notifyDelegateOfUpdatedPlaybackState:(long long)arg1;
- (void)_notifyDelegateOfUpdatedMediaState:(id)arg1;
- (void)_notifyDelegateOfUpdatedRouteUID:(id)arg1;
- (id)initWithUUID:(id)arg1 routeUID:(id)arg2 playbackState:(long long)arg3 audioControl:(id)arg4;
- (void)setShuffleState:(long long)arg1;
- (void)setRepeatState:(long long)arg1;
- (void)setMediaUniqueIdentifier:(id)arg1;
- (void)setPlaybackState:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)refreshPlaybackStateWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
