/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@class NSArray, NSURL;

@interface ETModelDefinition : NSObject

{
    NSArray *_layerNames;
    NSArray *_inputs;
    NSArray *_outputs;
    NSURL *_modelURL;
}

@property (readonly) NSArray *layerNames;
@property (readonly) NSArray *inputs;
@property (readonly) NSArray *outputs;
@property (readonly) NSURL *modelURL;

- (id)initWithInferenceNetworkPath:(id)arg1 inferenceInputs:(id)arg2 inferenceOutputs:(id)arg3 error:(id *)arg4;
- (id)initWithInferenceNetworkPath:(id)arg1 error:(id *)arg2;

@end
