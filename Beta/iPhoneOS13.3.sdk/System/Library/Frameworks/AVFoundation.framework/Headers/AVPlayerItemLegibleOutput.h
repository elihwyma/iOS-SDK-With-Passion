/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVPlayerItemOutput.h>

@class AVPlayerItemLegibleOutputInternal, NSObject;

@protocol AVPlayerItemLegibleOutputPushDelegate, OS_dispatch_queue;

@interface AVPlayerItemLegibleOutput : AVPlayerItemOutput

{
    AVPlayerItemLegibleOutputInternal *_legibleOutputInternal;
}

@property (weak, nonatomic, readonly) id <AVPlayerItemLegibleOutputPushDelegate> delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic) double advanceIntervalForDelegateInvocation;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithMediaSubtypesForNativeRepresentation:(id)arg1;
- (void)setSuppressesPlayerRendering:(_Bool)arg1;
- (void)setTextStylingResolution:(id)arg1;
- (_Bool)suppressesPlayerRendering;
- (id)_figLegibleOutputsDictionaryOptions;
- (_Bool)_attachToPlayerItem:(id)arg1;
- (void)_detachFromPlayerItem;
- (void)_pushAttributedStrings:(id)arg1 andSampleBuffers:(id)arg2 atItemTime:(CDStruct_1b6d18a9)arg3;
- (void)_signalFlush;
- (void)_collectUncollectables;
- (id)textStylingResolution;
- (id)initWithDependencyFactory:(id)arg1 mediaSubtypesForNativeRepresentation:(id)arg2;

@end
