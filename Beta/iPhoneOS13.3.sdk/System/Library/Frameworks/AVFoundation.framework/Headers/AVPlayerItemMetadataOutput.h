/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVPlayerItemOutput.h>

@class AVPlayerItemMetadataOutputInternal, NSDictionary, NSObject;

@protocol AVPlayerItemMetadataOutputPushDelegate, OS_dispatch_queue;

@interface AVPlayerItemMetadataOutput : AVPlayerItemOutput

{
    AVPlayerItemMetadataOutputInternal *_metadataOutputInternal;
}

@property (nonatomic, readonly, getter=_figMetadataOutputsDictionaryOptions) NSDictionary *figMetadataOutputsDictionaryOptions;
@property (weak, nonatomic, readonly) id <AVPlayerItemMetadataOutputPushDelegate> delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic) double advanceIntervalForDelegateInvocation;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithIdentifiers:(id)arg1;
- (_Bool)_attachToPlayerItem:(id)arg1;
- (void)_detachFromPlayerItem;
- (void)_signalFlush;
- (void)_pushTimedMetadataGroups:(id)arg1 fromPlayerItemTrack:(id)arg2;
- (void)_collectUncollectables;

@end
