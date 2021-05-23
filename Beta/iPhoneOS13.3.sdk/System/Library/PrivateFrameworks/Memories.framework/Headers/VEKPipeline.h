/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSArray, VEKResult;

@interface VEKPipeline : NSObject

{
    NSArray *_stages;
    VEKResult *_initialResult;
    CDUnknownBlockType _progressBlock;
}

@property (copy, nonatomic) CDUnknownBlockType progressBlock;
@property (copy) NSArray *stages;
@property (retain, nonatomic) VEKResult *initialResult;

- (id)runPipeline;
- (void)runPipelineWithOptions:(long long)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithStages:(id)arg1;

@end
