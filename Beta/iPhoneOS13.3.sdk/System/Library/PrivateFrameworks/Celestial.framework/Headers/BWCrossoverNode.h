/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@interface BWCrossoverNode : BWNode

{
    int _numEODMessagesReceived;
    struct os_unfair_lock_s _bufferServicingLock;
}

+ (void)initialize;

- (id)nodeType;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)initWithMediaType:(unsigned int)arg1 numberOfInputs:(unsigned int)arg2;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 forInput:(id)arg2;

@end
