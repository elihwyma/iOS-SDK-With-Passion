/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCapturePipeline.h>

@class BWNodeOutput, NSString;

@interface FigCaptureSinkPipeline : FigCapturePipeline

{
    NSString *_sinkID;
    BWNodeOutput *_upstreamOutput;
}

@property (nonatomic, readonly) NSString *sinkID;
@property (nonatomic) _Bool discardsSampleData;

- (void)dealloc;
- (id)initWithGraph:(id)arg1 name:(id)arg2 sinkID:(id)arg3;
- (void)setUpstreamOutput:(id)arg1;

@end
