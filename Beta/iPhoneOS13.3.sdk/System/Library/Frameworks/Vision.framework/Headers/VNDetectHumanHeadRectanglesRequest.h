/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageBasedRequest.h>

@interface VNDetectHumanHeadRectanglesRequest : VNImageBasedRequest

+ (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;
+ (const CDStruct_7d93034e *)revisionAvailability;

- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (long long)dependencyProcessingOrdinality;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;

@end
