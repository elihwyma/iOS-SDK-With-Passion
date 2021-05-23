/*
 Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

#import <Foundation/NSObject.h>

@protocol MTLComputePipelineState;

__attribute__((visibility("hidden")))
@interface ARUIComputeState : NSObject

{
    id <MTLComputePipelineState> _computePipelineState;
}

@property (retain, nonatomic) id <MTLComputePipelineState> computePipelineState;

- (id)initWithDevice:(id)arg1 library:(id)arg2;
- (id)computeFunctionFromLibrary:(id)arg1;

@end
