/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class MLModel, MLObjectBoundingBoxOutputDescription, NSString;

@protocol MLFeatureProvider, NSObject><NSCopying;

@interface VNCoreMLModel : NSObject

{
    NSString *_uuidStringForCacheIdentifier;
    int _modelType;
    unsigned int _inputImageFormat;
    id <MLFeatureProvider> _featureProvider;
    MLModel *_model;
    NSString *_inputImageKey;
    NSString *_predictedFeatureKey;
    NSString *_predictedProbabilitiesKey;
    MLObjectBoundingBoxOutputDescription *_boundingBoxOutputDescription;
    unsigned long long _inputImageWidth;
    unsigned long long _inputImageHeight;
    unsigned long long _scenePrintRevision;
    NSString *_inputScenePrintKey;
    long long _inputScenePrintMLMultiArrayDataType;
}

@property (copy, nonatomic, readonly) id <NSObject><NSCopying> cachingIdentifier;
@property (retain) MLModel *model;
@property int modelType;
@property (retain) NSString *inputImageKey;
@property (retain) NSString *predictedFeatureKey;
@property (readonly) NSString *predictedProbabilitiesKey;
@property (readonly) MLObjectBoundingBoxOutputDescription *boundingBoxOutputDescription;
@property (readonly) unsigned long long inputImageWidth;
@property (readonly) unsigned long long inputImageHeight;
@property (readonly) unsigned int inputImageFormat;
@property (readonly) unsigned long long scenePrintRevision;
@property (retain) NSString *inputScenePrintKey;
@property (readonly) long long inputScenePrintMLMultiArrayDataType;
@property (copy, nonatomic) NSString *inputImageFeatureName;
@property (retain, nonatomic) id <MLFeatureProvider> featureProvider;

+ (id)modelForMLModel:(id)arg1 error:(id *)arg2;

- (id)sequencedRequestPreviousObservationsKey;
- (_Bool)wantsSequencedRequestObservationsRecording;
- (id)initWithMLModel:(id)arg1 error:(id *)arg2;
- (_Bool)setupInputImageFromModelDescription:(id)arg1;
- (void)_updateModelWithFlexibleImageConstraintUsingWidth:(long long)arg1 height:(long long)arg2;
- (id)predictWithCVPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 error:(id *)arg3;
- (id)predictWithScenePrint:(id)arg1 options:(id)arg2 error:(id *)arg3;

@end
