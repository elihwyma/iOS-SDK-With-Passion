/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@protocol MTLComputePipelineState, MTLFunction;

__attribute__((visibility("hidden")))
@interface SCNMTLComputePipeline : NSObject

{
    id <MTLComputePipelineState> _state;
    id <MTLFunction> _computeFunction;
}

@property (retain, nonatomic) id <MTLComputePipelineState> state;
@property (retain, nonatomic) id <MTLFunction> computeFunction;

- (id)init;
- (void)dealloc;
- (id)description;

@end
