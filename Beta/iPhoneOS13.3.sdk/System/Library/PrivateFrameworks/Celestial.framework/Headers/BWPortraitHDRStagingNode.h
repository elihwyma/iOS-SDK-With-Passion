/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@interface BWPortraitHDRStagingNode : BWNode

{
    struct os_unfair_lock_s _lock;
    long long _settingsID;
    _Bool _passthroughBuffer;
    struct opaqueCMSampleBuffer *_stagedBuffer;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)nodeType;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)bufferReceivedWithFlags:(unsigned int)arg1 error:(int)arg2;

@end
