/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageBasedRequest.h>

@interface VNGenerateObjectnessBasedSaliencyImageRequest : VNImageBasedRequest

+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;
+ (const CDStruct_7d93034e *)revisionAvailability;
+ (Class)configurationClass;
+ (_Bool)supportsPrivateRevision:(unsigned long long)arg1;
+ (id)descriptionForPrivateRevision:(unsigned long long)arg1;

- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (id)_detectorTypeForRevision:(unsigned long long)arg1 error:(id *)arg2;
- (id)_detectorForRevision:(unsigned long long)arg1 getAppliedDetectorOptions:(id *)arg2 error:(id *)arg3;
- (id)_objectnessObservationsForRevision:(unsigned long long)arg1 performedInContext:(id)arg2 error:(id *)arg3;

@end
