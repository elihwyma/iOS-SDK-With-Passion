/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVSampleBufferAudioRendererInternal, NSError, NSString;

@interface AVSampleBufferAudioRenderer : NSObject

{
    AVSampleBufferAudioRendererInternal *_audioRendererInternal;
}

@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) NSError *error;
@property (copy, nonatomic) NSString *audioOutputDeviceUniqueID;
@property (copy, nonatomic) NSString *audioTimePitchAlgorithm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, readonly) struct OpaqueCMTimebase *timebase;
@property (readonly, getter=isReadyForMoreMediaData) _Bool readyForMoreMediaData;

+ (id)sampleBufferAudioRenderer;

- (id)init;
- (void)dealloc;
- (void)flush;
- (float)volume;
- (void)setVolume:(float)arg1;
- (void)setMuted:(_Bool)arg1;
- (_Bool)isMuted;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)stopRequestingMediaData;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (int)_initializeTimebase;
- (int)_installNotificationHandlers;
- (void)_uninstallNotificationHandlers;
- (void)_transitionToStatus:(long long)arg1 error:(id)arg2;
- (void)_transitionToFailedStatusWithOSStatus:(int)arg1;
- (void)copyFigSampleBufferAudioRenderer:(struct OpaqueFigSampleBufferAudioRenderer **)arg1;
- (_Bool)setRenderSynchronizer:(id)arg1 error:(id *)arg2;
- (void)_triggerMediaRequestCallback;
- (void)_wasFlushedAutomaticallyAtTime:(CDStruct_1b6d18a9)arg1;
- (void)flushFromSourceTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
