/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class NSArray, NSString;

@interface BWAttachedMediaSwapNode : BWNode

{
    NSString *_primaryFormatToAttachedMediaKey;
    NSString *_attachedMediaKeyToPrimaryFormat;
    NSArray *_sampleBufferAttachmentsToTransfer;
    _Bool _generatesDroppedSampleMarkerBuffers;
}

+ (void)initialize;

- (void)dealloc;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (id)initWithPrimaryFormatToAttachedMediaKey:(id)arg1 attachedMediaKeyToPrimaryFormat:(id)arg2 sampleBufferAttachmentsToTransfer:(id)arg3 generatesDroppedSampleMarkerBuffers:(_Bool)arg4;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;

@end
