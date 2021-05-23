/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class AXMDiagnosticMetricToken, AXMDiagnostics, AXMPipelineContextInput, AXMSequenceRequestManager, AXMVisionAnalysisOptions, AXMVisionResult, NSArray, NSDictionary, NSError, NSMutableArray, NSMutableSet, NSNumber, VNImageRequestHandler, VNSceneObservation;

@protocol NSCopying, NSSecureCoding, OS_dispatch_queue;

@interface AXMVisionPipelineContext : NSObject

{
    AXMPipelineContextInput *_sourceInput;
    NSDictionary *_sourceParameters;
    _Bool _sourceProvidesOwnResults;
    NSMutableArray *_resultHandlers;
    AXMDiagnosticMetricToken *_processingDiagnosticToken;
    VNSceneObservation *_sceneObservation;
    NSObject<OS_dispatch_queue> *_sceneObservationQueue;
    _Bool _shouldProcessRemotely;
    _Bool _shouldCallCompletionHandlersForEngineBusyError;
    _Bool _shouldCallCompletionHandlersForEmptyResultSet;
    _Bool _evaluationExclusivelyUsesVisionFramework;
    NSError *_error;
    AXMVisionAnalysisOptions *_analysisOptions;
    long long _imageRegistrationState;
    NSObject<NSSecureCoding> *_userContext;
    id <NSCopying> _cacheKey;
    unsigned long long _sequenceID;
    AXMDiagnostics *_diagnostics;
    NSMutableArray *_features;
    NSMutableSet *_evaluatedFeatureTypes;
    AXMVisionResult *_result;
    NSNumber *_appliedImageOrientation;
    VNImageRequestHandler *_visionImageRequestHandler;
    AXMSequenceRequestManager *_sequenceRequestManager;
}

@property (retain, nonatomic) NSMutableArray *features;
@property (retain, nonatomic) NSMutableSet *evaluatedFeatureTypes;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) AXMVisionAnalysisOptions *analysisOptions;
@property (retain, nonatomic) AXMVisionResult *result;
@property (retain, nonatomic) NSNumber *appliedImageOrientation;
@property (retain, nonatomic) AXMDiagnostics *diagnostics;
@property (retain, nonatomic) VNImageRequestHandler *visionImageRequestHandler;
@property (nonatomic) long long imageRegistrationState;
@property (retain, nonatomic) AXMSequenceRequestManager *sequenceRequestManager;
@property (retain, nonatomic) NSObject<NSSecureCoding> *userContext;
@property (nonatomic) _Bool shouldProcessRemotely;
@property (nonatomic, readonly) NSArray *resultHandlers;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) _Bool sourceProvidesResults;
@property (nonatomic, readonly) _Bool visionImageRequestHandlerIsLoaded;
@property (retain, nonatomic) id <NSCopying> cacheKey;
@property (nonatomic) _Bool shouldCallCompletionHandlersForEngineBusyError;
@property (nonatomic) _Bool shouldCallCompletionHandlersForEmptyResultSet;
@property (nonatomic) _Bool evaluationExclusivelyUsesVisionFramework;
@property (nonatomic) unsigned long long sequenceID;
@property (nonatomic, readonly) AXMPipelineContextInput *sourceInput;

+ (_Bool)supportsSecureCoding;
+ (id)contextWithSourceParameters:(id)arg1 options:(id)arg2;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_commonInit;
- (id)sceneObservation;
- (void)errorOccurred:(id)arg1;
- (void)appendFeature:(id)arg1;
- (void)addEvaluatedFeatureType:(unsigned long long)arg1;
- (void)produceImage:(CDUnknownBlockType)arg1;
- (id)generateImageRepresentation;
- (id)generateFileNameForImageWithPrefix:(id)arg1 extension:(id)arg2;
- (void)didFinishProcessingContext;
- (void)addResultHandlers:(id)arg1;
- (void)willBeginProcessingContext;
- (void)addResultHandler:(CDUnknownBlockType)arg1;
- (id)initWithSourceParameters:(id)arg1 options:(id)arg2;
- (id)_makeRequestHandlerForInput:(id)arg1 options:(id)arg2;
- (id)visionImageRequestHandlerWithOptions:(id)arg1;
- (void)createSceneObservationIfNilWithBlock:(CDUnknownBlockType)arg1;

@end
