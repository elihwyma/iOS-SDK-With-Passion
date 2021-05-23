/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWFanOutNode.h>

@class BWNodeOutput;

@interface BWVideoSDOFSplitNode : BWFanOutNode

{
    struct opaqueCMFormatDescription *_originalVideoFormatDescription;
    BWNodeOutput *_originalOutput;
    BWNodeOutput *_sdofOutput;
}

@property (nonatomic, readonly) BWNodeOutput *originalOutput;
@property (nonatomic, readonly) BWNodeOutput *sdofOutput;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)handleIrisReferenceMovieRequest:(id)arg1 forInput:(id)arg2;

@end
