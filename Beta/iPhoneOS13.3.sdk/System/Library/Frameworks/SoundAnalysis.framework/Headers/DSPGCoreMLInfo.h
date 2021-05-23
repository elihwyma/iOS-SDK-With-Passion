/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

@class DSPGMLInputProvider, MLModelDescription, NSArray;

@protocol DSPGMLModel, MLFeatureProvider;

__attribute__((visibility("hidden")))
@interface DSPGCoreMLInfo : NSObject

{
    id <DSPGMLModel> _model;
    MLModelDescription *_modelDescription;
    DSPGMLInputProvider *_inputProvider;
    id <MLFeatureProvider> _outputProvider;
    NSArray *_outputs;
    NSArray *_outputLabels;
}

@property (retain, nonatomic) id <DSPGMLModel> model;
@property (retain, nonatomic) MLModelDescription *modelDescription;
@property (retain, nonatomic) DSPGMLInputProvider *inputProvider;
@property (retain, nonatomic) id <MLFeatureProvider> outputProvider;
@property (retain, nonatomic) NSArray *outputs;
@property (retain, nonatomic) NSArray *outputLabels;

@end
