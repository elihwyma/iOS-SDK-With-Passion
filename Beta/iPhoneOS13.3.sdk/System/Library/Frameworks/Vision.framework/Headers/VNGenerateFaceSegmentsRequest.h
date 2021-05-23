/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageBasedRequest.h>

#import <Vision/Swift-Protocol.h>

@class NSArray, NSString;

@interface VNGenerateFaceSegmentsRequest : VNImageBasedRequest <Swift>

@property (nonatomic) float faceBoundingBoxExpansionRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *inputFaceObservations;

+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;
+ (Class)configurationClass;

- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1;
- (void)_determineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputFacesThatNeedAlignment:(id)arg3 outputfacesThatNeedSegments:(id)arg4;

@end
