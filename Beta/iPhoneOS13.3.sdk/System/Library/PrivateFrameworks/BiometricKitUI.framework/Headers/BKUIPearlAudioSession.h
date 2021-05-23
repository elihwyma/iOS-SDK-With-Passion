/*
 Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
 */

#import <Foundation/NSObject.h>

@class AVAudioEngine, AVAudioPCMBuffer, AVAudioPlayerNode;

@protocol OS_dispatch_queue;

@interface BKUIPearlAudioSession : NSObject

{
    AVAudioEngine *_audioEngine;
    AVAudioPlayerNode *_audioNode;
    AVAudioPCMBuffer *_lockSoundBuffer;
    AVAudioPCMBuffer *_scanSoundBuffer;
    AVAudioPCMBuffer *_completeSoundBuffer;
    AVAudioPCMBuffer *_endSoundBuffer;
    AVAudioPCMBuffer *_failSoundBuffer;
    NSObject<OS_dispatch_queue> *_avPlayerNodeOperationQueue;
}

@property (nonatomic, readonly) AVAudioEngine *audioEngine;
@property (nonatomic, readonly) AVAudioPCMBuffer *lockSoundBuffer;
@property (nonatomic, readonly) AVAudioPCMBuffer *scanSoundBuffer;
@property (nonatomic, readonly) AVAudioPCMBuffer *completeSoundBuffer;
@property (nonatomic, readonly) AVAudioPCMBuffer *endSoundBuffer;
@property (nonatomic, readonly) AVAudioPCMBuffer *failSoundBuffer;

+ (id)_loadSound:(id)arg1;

- (id)init;
- (void)stop;
- (void)play;
- (void)scheduleBuffer:(id)arg1 atTime:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)scheduleBuffer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
