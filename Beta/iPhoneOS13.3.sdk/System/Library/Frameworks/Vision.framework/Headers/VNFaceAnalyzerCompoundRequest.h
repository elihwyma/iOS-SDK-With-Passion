/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNHomologousObservationClassCompoundRequest.h>

__attribute__((visibility("hidden")))
@interface VNFaceAnalyzerCompoundRequest : VNHomologousObservationClassCompoundRequest

+ (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;
+ (Class)configurationClass;
+ (id)compoundRequestsForOriginalRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id *)arg3;

- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (id)initWithDetectorType:(id)arg1 configuration:(id)arg2;
- (void)_determineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputfacesThatNeedAttributes:(id)arg3 isFaceprintRequest:(_Bool)arg4 isAttributeRequest:(_Bool)arg5;
- (unsigned long long)detectionLevel;
- (void)assignOriginalRequestsResultsFromObservations:(id)arg1 obtainedInPerformingContext:(id)arg2;

@end
