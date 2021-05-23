/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureSinkPipeline.h>

@class BWRemoteQueueSinkNode;

@interface FigCaptureRemoteQueueSinkPipeline : FigCaptureSinkPipeline

{
    BWRemoteQueueSinkNode *_sinkNode;
}

@property (nonatomic, readonly) BWRemoteQueueSinkNode *sinkNode;

- (void)dealloc;
- (void)setSinkNode:(id)arg1;

@end
