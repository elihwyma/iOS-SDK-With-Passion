/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWFanOutNode.h>

@interface BWOverCaptureFanOutNode : BWFanOutNode

+ (void)initialize;

- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)handleIrisReferenceMovieRequest:(id)arg1 forInput:(id)arg2;

@end
