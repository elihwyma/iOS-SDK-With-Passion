/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageBasedRequest.h>

@interface VNGenerateImageSaliencyRequest : VNImageBasedRequest

+ (const CDStruct_7d93034e *)revisionAvailability;
+ (Class)configurationClass;

- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (id)_smartCamCombinedModelImageSaliencyObservationsForRevision:(unsigned long long)arg1 performedInContext:(id)arg2 error:(id *)arg3;

@end
