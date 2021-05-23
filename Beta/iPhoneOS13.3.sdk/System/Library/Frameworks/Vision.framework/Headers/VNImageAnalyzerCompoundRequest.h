/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNCompoundRequest.h>

@class VNImageAnalyzerCompoundRequestGroupingConfiguration;

__attribute__((visibility("hidden")))
@interface VNImageAnalyzerCompoundRequest : VNCompoundRequest

{
    VNImageAnalyzerCompoundRequestGroupingConfiguration *_groupingConfiguration;
}

+ (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
+ (Class)configurationClass;
+ (void)_addCompoundRequestsToArray:(id)arg1 forModel:(unsigned long long)arg2 withGroupingConfigurations:(id)arg3;
+ (id)compoundRequestsForOriginalRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id *)arg3;

- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (_Bool)allowsCachingOfResults;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (CDUnknownBlockType)resultsSortingComparator;
- (id)initWithDetectorType:(id)arg1 groupingConfiguration:(id)arg2;
- (id)_configuredDetectorForRequestRevision:(unsigned long long)arg1 appliedConfigurationOptions:(id *)arg2 error:(id *)arg3;

@end
