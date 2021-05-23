/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageBasedRequest.h>

@class VNClassificationCustomHierarchy;

@interface VNClassifyImageRequest : VNImageBasedRequest

@property (nonatomic) unsigned long long maximumLeafObservations;
@property (nonatomic) unsigned long long maximumHierarchicalObservations;
@property (copy, nonatomic, readonly) VNClassificationCustomHierarchy *customHierarchy;
@property (nonatomic) unsigned long long imageCropAndScaleOption;

+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;
+ (const CDStruct_7d93034e *)revisionAvailability;
+ (id)knownClassificationsForRevision:(unsigned long long)arg1 error:(id *)arg2;
+ (Class)configurationClass;

- (id)description;
- (void)setRevision:(unsigned long long)arg1;
- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)_applicableDetectorAndOptions:(id *)arg1 error:(id *)arg2;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1;
- (CDUnknownBlockType)resultsSortingComparator;
- (id)supportedImageSizeSet;
- (void)_setCustomHierarchy:(id)arg1;
- (_Bool)defineCustomHierarchy:(id)arg1 error:(id *)arg2;
- (id)defineCustomHierarchyWithRelationships:(id)arg1 error:(id *)arg2;

@end
