/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/VEKPipelineStage.h>

@class VEKProduction;

__attribute__((visibility("hidden")))
@interface VEKInitialPipelineStage : VEKPipelineStage

{
    VEKProduction *_production;
}

@property (weak, nonatomic) VEKProduction *production;

- (id)runStageWithInput:(id)arg1;

@end
