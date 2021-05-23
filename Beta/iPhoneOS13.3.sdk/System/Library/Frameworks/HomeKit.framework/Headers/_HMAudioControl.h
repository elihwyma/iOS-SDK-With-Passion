/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class HMFUnfairLock, HMMediaSession, NSString, NSUUID, _HMContext;

@protocol OS_dispatch_queue, _HMAudioControlDelegate;

__attribute__((visibility("hidden")))
@interface _HMAudioControl : NSObject

{
    HMFUnfairLock *_lock;
    _Bool _muted;
    float _volume;
    NSUUID *_uniqueIdentifier;
    HMMediaSession *_mediaSession;
    id <_HMAudioControlDelegate> _delegate;
    _HMContext *_context;
}

@property (weak, nonatomic, readonly) HMMediaSession *mediaSession;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (weak) id <_HMAudioControlDelegate> delegate;
@property float volume;
@property (getter=isMuted) _Bool muted;
@property (retain, nonatomic) _HMContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;

- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (void)__configureWithContext:(id)arg1;
- (void)_handleAudioControlUpdated:(id)arg1;
- (id)messageDestination;
- (id)initWithMediaSession:(id)arg1;
- (void)updateVolume:(float)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateMuted:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
