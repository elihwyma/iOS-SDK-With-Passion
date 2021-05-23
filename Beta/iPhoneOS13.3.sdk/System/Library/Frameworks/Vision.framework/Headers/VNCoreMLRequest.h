/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageBasedRequest.h>

@class VNCoreMLModel;

@interface VNCoreMLRequest : VNImageBasedRequest

{
    VNCoreMLModel *_model;
}

@property (nonatomic, readonly) VNCoreMLModel *model;
@property (nonatomic) unsigned long long imageCropAndScaleOption;

+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;
+ (Class)configurationClass;

- (id)description;
- (id)initWithModel:(id)arg1;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (_Bool)allowsCachingOfResults;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (id)sequencedRequestPreviousObservationsKey;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)newDefaultRequestInstance;
- (id)initWithModel:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
