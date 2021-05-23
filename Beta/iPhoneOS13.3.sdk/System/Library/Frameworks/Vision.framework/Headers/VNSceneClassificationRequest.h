/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageBasedRequest.h>

@class NSArray, NSString, VNClassificationCustomHierarchy, VNSceneObservation;

@interface VNSceneClassificationRequest : VNImageBasedRequest

@property (retain, nonatomic, readonly) VNSceneObservation *sceneObservation;
@property (nonatomic) unsigned long long maximumLeafObservations;
@property (nonatomic) unsigned long long maximumHierarchicalObservations;
@property (copy, nonatomic, readonly) VNClassificationCustomHierarchy *customHierarchy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSArray *supportedImageSizeSet;

+ (const CDStruct_7d93034e *)revisionAvailability;
+ (Class)configurationClass;
+ (id)_imageAnalyzerMultiDetectorForRevision:(unsigned long long)arg1 detectionLevel:(unsigned long long)arg2 processingDevice:(id)arg3 requestBackingStore:(unsigned long long)arg4 appliedDetectorOptions:(id *)arg5 error:(id *)arg6;
+ (id)_sceneClassifierForRevision:(unsigned long long)arg1 requestBackingStore:(unsigned long long)arg2 appliedDetectorOptions:(id *)arg3 error:(id *)arg4;
+ (id)_knownVNSceneClassifierLabelsForRevision:(unsigned long long)arg1 requestBackingStore:(unsigned long long)arg2 error:(id *)arg3;
+ (id)_knownVNImageAnalyzerMultiDetectorSceneClassificationObservationsForRevision:(unsigned long long)arg1 requestBackingStore:(unsigned long long)arg2 error:(id *)arg3;
+ (const CDStruct_d47b9615 *)dependentRequestCompatability;
+ (id)knownSceneClassifications;
+ (id)knownSceneClassificationsForRevision:(unsigned long long)arg1 error:(id *)arg2;

- (void)setRevision:(unsigned long long)arg1;
- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)_applicableDetectorAndOptions:(id *)arg1 error:(id *)arg2;
- (CDUnknownBlockType)resultsSortingComparator;
- (void)setSceneObservation:(id)arg1;
- (id)initWithSceneObservation:(id)arg1;
- (id)initWithSceneObservation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_errorForUnimplementedSelector:(SEL)arg1 forRevision:(unsigned long long)arg2;
- (id)_classificationOperationPointsAndReturnError:(id *)arg1;
- (void)_setCustomHierarchy:(id)arg1;
- (_Bool)defineCustomHierarchy:(id)arg1 error:(id *)arg2;
- (id)defineCustomHierarchyWithRelationships:(id)arg1 error:(id *)arg2;

@end
