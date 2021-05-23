/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNRequest.h>

@class NSArray;

@interface VNGroupImagesByTimeAndContentRequest : VNRequest

{
    NSArray *_inputImageprints;
    float _clusteringDistanceThreshold;
}

@property (copy, nonatomic) NSArray *inputImageprints;
@property (nonatomic) float clusteringDistanceThreshold;

+ (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
+ (void)recordDefaultOptionsInDictionary:(id)arg1;

- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (_Bool)allowsCachingOfResults;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (void)applyConfigurationOfRequest:(id)arg1;
- (_Bool)internalPerformInContext:(id)arg1 error:(id *)arg2;
- (CDUnknownBlockType)resultsSortingComparator;
- (id)initWithImageprintObservations:(id)arg1 clusteringDistanceThreshold:(float)arg2;
- (id)initWithImageprintObservations:(id)arg1 clusteringDistanceThreshold:(float)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
