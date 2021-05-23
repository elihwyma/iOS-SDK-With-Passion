/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWFanOutNode.h>

@interface BWStillImageConditionalRouterNode : BWFanOutNode

{
    CDUnknownBlockType _shouldEmitSampleBufferDecisionProvider;
}

+ (void)initialize;

- (void)dealloc;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (id)initWithRoutingConfiguration:(id)arg1;

@end
