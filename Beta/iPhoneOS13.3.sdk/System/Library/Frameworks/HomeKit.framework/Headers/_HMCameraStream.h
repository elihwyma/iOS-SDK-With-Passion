/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/_HMCameraSource.h>

@class NSNumber, NSObject, NSString, NSUUID;

@protocol OS_dispatch_queue;

@interface _HMCameraStream : _HMCameraSource

{
    unsigned long long _audioStreamSetting;
    NSNumber *_audioVolume;
}

@property (nonatomic) unsigned long long audioStreamSetting;
@property (retain, nonatomic) NSNumber *audioVolume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;

- (void)dealloc;
- (void)_updateAudioVolume:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateAudioStreamSetting:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_issueUpdateAudioStreamSettingRequest:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleAudioStreamSettingUpdate:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2 error:(id)arg3;
- (id)initWithSessionID:(id)arg1 slotIdentifier:(id)arg2 context:(id)arg3 profileUniqueIdentifier:(id)arg4 aspectRatio:(id)arg5 audioStreamSetting:(unsigned long long)arg6;
- (void)updateAudioVolume:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateAudioStreamSetting:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
