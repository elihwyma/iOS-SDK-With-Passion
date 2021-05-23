/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageBasedRequest.h>

@class NSArray, NSString;

@interface VNDetectRectanglesRequest : VNImageBasedRequest

@property (nonatomic) unsigned long long requiredVersion;
@property (nonatomic) float minimumAspectRatio;
@property (nonatomic) float maximumAspectRatio;
@property (nonatomic) float quadratureTolerance;
@property (nonatomic) float minimumSize;
@property (nonatomic) float minimumConfidence;
@property (nonatomic) unsigned long long maximumObservations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSArray *supportedImageSizeSet;

+ (Class)configurationClass;

- (long long)dependencyProcessingOrdinality;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1;
- (CDUnknownBlockType)resultsSortingComparator;
- (void)setSortedResults:(id)arg1;

@end
