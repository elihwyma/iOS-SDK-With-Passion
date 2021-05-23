/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureSinkPipeline.h>

@class BWAudioConverterNode, BWAudioFileSinkNode, BWFileCoordinatorNode;

@interface FigCaptureAudioFileSinkPipeline : FigCaptureSinkPipeline

{
    BWFileCoordinatorNode *_fileCoordinatorNode;
    BWAudioConverterNode *_audioConverterNode;
    BWAudioFileSinkNode *_audioFileSinkNode;
}

@property (nonatomic, readonly) BWFileCoordinatorNode *fileCoordinatorNode;
@property (nonatomic, readonly) BWAudioFileSinkNode *audioFileSinkNode;

+ (void)initialize;

- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 graph:(id)arg2 name:(id)arg3 sourceAudioOutput:(id)arg4 recordingStatusDelegate:(id)arg5;
- (int)_buildAudioFileSinkPipeline:(id)arg1 graph:(id)arg2 sourceAudioOutput:(id)arg3 recordingStatusDelegate:(id)arg4;

@end
