/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureRemoteQueueSinkPipeline.h>

@interface FigCaptureAudioDataSinkPipeline : FigCaptureRemoteQueueSinkPipeline

+ (void)initialize;

- (id)initWithConfiguration:(id)arg1 graph:(id)arg2 name:(id)arg3 sourceAudioOutput:(id)arg4 clientPID:(id)arg5 renderDelegate:(id)arg6;
- (int)_buildAudioDataSinkPipeline:(id)arg1 graph:(id)arg2 sourceAudioOutput:(id)arg3 clientPID:(id)arg4 renderDelegate:(id)arg5;

@end
