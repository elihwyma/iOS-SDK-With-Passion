/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWFunnelNode.h>

@class NSMutableDictionary;

@interface BWParallelJoinerNode : BWFunnelNode

{
    int _inputsCount;
    NSMutableDictionary *_receivedBuffers;
    NSMutableDictionary *_sentErrorCountForID;
}

- (void)dealloc;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)initWithNumberOfInputs:(int)arg1 mediaType:(unsigned int)arg2;

@end
