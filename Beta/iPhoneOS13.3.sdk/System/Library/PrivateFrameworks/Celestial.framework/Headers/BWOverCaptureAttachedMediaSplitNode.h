/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWAttachedMediaSplitNode.h>

@class BWNodeOutput;

@interface BWOverCaptureAttachedMediaSplitNode : BWAttachedMediaSplitNode

{
    BWNodeOutput *_primaryFrameOutput;
    BWNodeOutput *_synchronizedSlaveFrameOutput;
}

@property (nonatomic, readonly) BWNodeOutput *primaryFrameOutput;
@property (nonatomic, readonly) BWNodeOutput *synchronizedSlaveFrameOutput;

+ (void)initialize;

- (void)dealloc;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)_setupAttachedMediaConfigurationForInput:(id)arg1 attachedMediaKey:(id)arg2;
- (void)_setupAttachedMediaConfigurationForOutput:(id)arg1 attachedMediaKey:(id)arg2;
- (void)_updateSynchronizedSlaveFrameEnabledWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)handleIrisReferenceMovieRequest:(id)arg1 forInput:(id)arg2;
- (id)initWithBackPressureExtraRetainBufferCount:(int)arg1 videoStitchingEnabled:(_Bool)arg2;

@end
