/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <AVFAudio/AVAudioNode.h>

@class NSString;

@interface AVAudioPlayerNode : AVAudioNode

@property (nonatomic, readonly, getter=isPlaying) _Bool playing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) float volume;

- (id)init;
- (void)pause;
- (void)stop;
- (void)play;
- (void)scheduleBuffer:(id)arg1 atTime:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)scheduleFile:(id)arg1 atTime:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)didAttachToEngine:(id)arg1;
- (void)playAtTime:(id)arg1;
- (void)callLegacyCompletionHandlerForType:(long long)arg1 legacyHandler:(CDUnknownBlockType)arg2;
- (void)scheduleBuffer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)scheduleBuffer:(id)arg1 completionCallbackType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)scheduleBuffer:(id)arg1 atTime:(id)arg2 options:(unsigned long long)arg3 completionCallbackType:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)scheduleFile:(id)arg1 atTime:(id)arg2 completionCallbackType:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)scheduleSegment:(id)arg1 startingFrame:(long long)arg2 frameCount:(unsigned int)arg3 atTime:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)scheduleSegment:(id)arg1 startingFrame:(long long)arg2 frameCount:(unsigned int)arg3 atTime:(id)arg4 completionCallbackType:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)prepareWithFrameCount:(unsigned int)arg1;
- (id)nodeTimeForPlayerTime:(id)arg1;
- (id)playerTimeForNodeTime:(id)arg1;

@end
