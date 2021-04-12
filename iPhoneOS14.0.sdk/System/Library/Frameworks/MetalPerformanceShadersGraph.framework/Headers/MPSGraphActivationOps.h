//
//  MPSGraphActivationOps.h
//  MetalPerformanceShadersGraph
//
//  Created on 12/13/19.
//  Copyright © 2019 Apple Inc. All rights reserved.
//

#ifndef MPSGraphActivationOps_h
#define MPSGraphActivationOps_h

#import <MetalPerformanceShadersGraph/MPSGraph.h>

NS_ASSUME_NONNULL_BEGIN

@interface MPSGraph(MPSGraphActivationOps)


-(MPSGraphTensor *) reLUWithTensor:(MPSGraphTensor *) tensor
                              name:(NSString * _Nullable) name;


-(MPSGraphTensor *) reLUGradientWithIncomingGradient:(MPSGraphTensor *) gradient
                                        sourceTensor:(MPSGraphTensor *) source
                                                name:(NSString * _Nullable) name;


-(MPSGraphTensor *) sigmoidWithTensor:(MPSGraphTensor *) tensor
                                 name:(NSString * _Nullable) name;


-(MPSGraphTensor *) sigmoidGradientWithIncomingGradient:(MPSGraphTensor *) gradient
                                           sourceTensor:(MPSGraphTensor *) source
                                                   name:(NSString * _Nullable) name;


-(MPSGraphTensor *) softMaxWithTensor:(MPSGraphTensor *) tensor
                                 axis:(NSInteger) axis
                                 name:(NSString * _Nullable) name;

-(MPSGraphTensor *) softMaxGradientWithIncomingGradient:(MPSGraphTensor *) gradient
                                           sourceTensor:(MPSGraphTensor *) source
                                                   axis:(NSInteger) axis
                                                   name:(NSString * _Nullable) name;

@end

NS_ASSUME_NONNULL_END

#endif /* MPSGraphActivationOps_h */
