/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSArray, VEKProgress;

@interface VEKPipelineStage : NSObject

{
    _Bool _isCancelled;
    NSArray *_outputType;
    VEKProgress *_progress;
}

@property (readonly) NSArray *inputTypes;
@property (readonly) NSArray *outputType;
@property (readonly) VEKProgress *progress;
@property _Bool isCancelled;

- (id)outputTypes;
- (id)runStageWithInput:(id)arg1;

@end
