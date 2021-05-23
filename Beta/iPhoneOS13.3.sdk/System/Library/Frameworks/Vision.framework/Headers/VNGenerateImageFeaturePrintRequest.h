/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageBasedRequest.h>

@interface VNGenerateImageFeaturePrintRequest : VNImageBasedRequest

@property (nonatomic) unsigned long long imageCropAndScaleOption;

+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;
+ (Class)configurationClass;

- (id)description;
- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)_applicableDetectorAndOptions:(id *)arg1 error:(id *)arg2;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1;
- (CDUnknownBlockType)resultsSortingComparator;

@end
