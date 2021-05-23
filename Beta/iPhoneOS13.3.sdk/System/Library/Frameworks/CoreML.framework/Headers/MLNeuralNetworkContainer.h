/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class MLModel, MLNeuralNetworksCompileTimeParams, NSArray, NSDictionary, NSString;

@interface MLNeuralNetworkContainer : NSObject

{
    _Bool _hasBidirectionalLayer;
    _Bool _hasOptionalInputSequenceConcat;
    _Bool _hasDynamicLayer;
    _Bool _ndArrayInterpretation;
    int _precision;
    int _engine;
    NSString *_modelFilePath;
    NSArray *_inputLayerNames;
    NSArray *_outputLayerNames;
    NSString *_name;
    NSDictionary *_inputDescription;
    NSDictionary *_outputDescription;
    NSDictionary *_imageParameters;
    NSArray *_configurationList;
    NSArray *_classLabels;
    NSString *_classScoreVectorName;
    MLModel *_transformDesc;
    NSDictionary *_imagePreprocessingParams;
    MLNeuralNetworksCompileTimeParams *_updatableModelCompiledParams;
    map_7c549560 _optionalInputTypes;
}

@property (nonatomic) int precision;
@property (nonatomic) int engine;
@property (nonatomic) map_7c549560 optionalInputTypes;
@property (retain, nonatomic) NSString *modelFilePath;
@property (retain, nonatomic, readonly) NSArray *inputLayerNames;
@property (retain, nonatomic, readonly) NSArray *outputLayerNames;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *inputDescription;
@property (retain, nonatomic) NSDictionary *outputDescription;
@property (retain, nonatomic) NSDictionary *imageParameters;
@property (retain, nonatomic) NSArray *configurationList;
@property (nonatomic) _Bool hasBidirectionalLayer;
@property (nonatomic) _Bool hasOptionalInputSequenceConcat;
@property (nonatomic) _Bool hasDynamicLayer;
@property (retain) NSArray *classLabels;
@property (retain) NSString *classScoreVectorName;
@property (retain) MLModel *transformDesc;
@property _Bool ndArrayInterpretation;
@property (retain, nonatomic) NSDictionary *imagePreprocessingParams;
@property (retain, nonatomic) MLNeuralNetworksCompileTimeParams *updatableModelCompiledParams;

+ (id)containerFromFilePath:(id)arg1 inputLayerNames:(id)arg2 outputLayerNames:(id)arg3 parameters:(id)arg4;
+ (id)containerFromCompiledArchive:(struct _MLModelInputArchiver *)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id *)arg5;

- (id).cxx_construct;
- (id)initWithFilePath:(id)arg1 inputLayerNames:(id)arg2 outputLayerNames:(id)arg3 parameters:(id)arg4;
- (id)initWithFeatureDescriptions:(id)arg1 transformDesc:(id)arg2 outputLayerNames:(id)arg3 parameters:(id)arg4 configurations:(id)arg5 classScoreVectorName:(id)arg6 classLabels:(id)arg7 hasBidirectionalLayer:(_Bool)arg8 hasOptionalInputSequenceConcat:(_Bool)arg9 hasDynamicLayer:(_Bool)arg10;

@end
