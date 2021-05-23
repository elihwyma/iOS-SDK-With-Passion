/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNCompoundRequest.h>

__attribute__((visibility("hidden")))
@interface VNANFDDetectorCompoundRequest : VNCompoundRequest

+ (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;
+ (Class)configurationClass;
+ (id)compoundRequestsForOriginalRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id *)arg3;

- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (id)initWithDetectorType:(id)arg1 configuration:(id)arg2;
- (void)assignOriginalRequestsResultsFromObservations:(id)arg1 obtainedInPerformingContext:(id)arg2;

@end
