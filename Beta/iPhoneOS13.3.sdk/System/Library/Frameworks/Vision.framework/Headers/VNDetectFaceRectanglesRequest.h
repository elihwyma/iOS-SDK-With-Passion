/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageBasedRequest.h>

@interface VNDetectFaceRectanglesRequest : VNImageBasedRequest

+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;
+ (const CDStruct_7d93034e *)revisionAvailability;
+ (_Bool)supportsPrivateRevision:(unsigned long long)arg1;
+ (id)descriptionForPrivateRevision:(unsigned long long)arg1;
+ (void)recordDefaultOptionsInDictionary:(id)arg1;

- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (long long)dependencyProcessingOrdinality;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;

@end
