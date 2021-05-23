/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLModel.h>

#import <CoreML/Swift-Protocol.h>

@class MLParameterContainer, MLUpdateProgressHandlers, NSArray, NSDictionary, NSObject, NSOrderedSet, NSString;

@protocol MLNearestNeighborsIndex, OS_dispatch_queue;

@interface MLKNearestNeighborsClassifier : MLModel <Swift>

{
    _Bool _continueWithUpdate;
    MLUpdateProgressHandlers *_progressHandlers;
    NSObject<OS_dispatch_queue> *_progressHandlersDispatchQueue;
    NSDictionary *_updateParameters;
    MLParameterContainer *_parameterContainer;
    unsigned long long _numberOfDimensions;
    long long _indexType;
    id <MLNearestNeighborsIndex> _index;
    long long _labelType;
    NSArray *_labelsForDataPoints;
    NSOrderedSet *_labelsSet;
    NSObject *_defaultLabel;
    long long _weightingScheme;
    NSString *_nearestLabelsFeatureName;
    NSString *_nearestDistancesFeatureName;
}

@property (retain, nonatomic) MLUpdateProgressHandlers *progressHandlers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *progressHandlersDispatchQueue;
@property (retain, nonatomic) NSDictionary *updateParameters;
@property (nonatomic) _Bool continueWithUpdate;
@property (retain, nonatomic) MLParameterContainer *parameterContainer;
@property (nonatomic) unsigned long long numberOfDimensions;
@property (nonatomic) long long indexType;
@property (retain, nonatomic) id <MLNearestNeighborsIndex> index;
@property (nonatomic) long long labelType;
@property (retain, nonatomic) NSArray *labelsForDataPoints;
@property (retain, nonatomic) NSOrderedSet *labelsSet;
@property (retain, nonatomic) NSObject *defaultLabel;
@property (nonatomic) long long weightingScheme;
@property (retain, nonatomic) NSString *nearestLabelsFeatureName;
@property (retain, nonatomic) NSString *nearestDistancesFeatureName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)compileSpecification:(struct _MLModelSpecification *)arg1 toArchive:(struct _MLModelOutputArchiver *)arg2 options:(id)arg3 error:(id *)arg4;
+ (id)compiledVersionForSpecification:(struct _MLModelSpecification *)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)loadModelFromCompiledArchive:(struct _MLModelInputArchiver *)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id *)arg5;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)parameterValueForKey:(id)arg1 error:(id *)arg2;
- (void)setUpdateProgressHandlers:(id)arg1 dispatchQueue:(id)arg2;
- (void)updateModelWithData:(id)arg1;
- (void)resumeUpdateWithParameters:(id)arg1;
- (void)resumeUpdate;
- (void)cancelUpdate;
- (id)initWithDescription:(id)arg1 configuration:(id)arg2 parameters:(id)arg3 dataPoints:(vector_7584168e *)arg4 labels:(id)arg5 error:(id *)arg6;
- (vector_392775c5)computeKClosestLabels:(id)arg1;
- (void)computeClassProbabilities:(id *)arg1 from:(vector_392775c5 *)arg2;
- (id)inputMultiArray:(id)arg1 error:(id *)arg2;
- (id)packageOutputWithPredictedLabel:(id)arg1 classProbabilities:(id)arg2 nearestLabels:(id)arg3 nearestDistances:(id)arg4;
- (void)extractNearestNeighborLabels:(id *)arg1 distances:(id *)arg2 from:(vector_392775c5)arg3;

@end
