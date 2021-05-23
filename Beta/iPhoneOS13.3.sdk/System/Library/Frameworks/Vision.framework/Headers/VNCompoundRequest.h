/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNRequest.h>

@class NSArray, NSNumber;

__attribute__((visibility("hidden")))
@interface VNCompoundRequest : VNRequest

{
    NSArray *_originalRequests;
    NSNumber *_cachedDependencyProcessingOrdinality;
}

@property (copy, nonatomic, readonly) NSArray *originalRequests;
@property (nonatomic, readonly) struct CGRect regionOfInterest;

+ (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
+ (id)compoundRequestsForOriginalRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id *)arg3;
+ (id)compoundRequestProcessingDeviceFromOriginalRequestsProcessingDevice:(id)arg1;

- (id)description;
- (_Bool)usesCPUOnly;
- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (long long)dependencyProcessingOrdinality;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (id)initWithOriginalRequests:(id)arg1;
- (_Bool)allowsCachingOfResults;
- (id)sequencedRequestPreviousObservationsKey;
- (CDUnknownBlockType)resultsSortingComparator;
- (id)compoundResults;
- (void)recordWarningsInOriginalRequests;

@end
