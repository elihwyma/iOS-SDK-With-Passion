/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class BWNodeOutput;

@interface BWStillImageDisparitySplitterNode : BWNode

{
    id *_outputs;
    unsigned long long _numberOfOutputs;
}

@property (nonatomic, readonly) BWNodeOutput *disparityOutput;
@property (nonatomic, readonly) BWNodeOutput *processedOutput;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)nodeType;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;

@end
