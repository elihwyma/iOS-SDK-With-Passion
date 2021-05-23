/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNTargetedImageRequest.h>

@class NSDictionary, NSString;

@interface VNAppendBurstSequenceFrameRequest : VNTargetedImageRequest

{
    NSString *_burstFrameIdentifier;
    NSDictionary *_imageProperties;
}

@property (copy, nonatomic) NSString *burstFrameIdentifier;
@property (copy, nonatomic) NSDictionary *imageProperties;

+ (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;

- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (id)initWithTargetedCVPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithTargetedCVPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2;
- (id)initWithTargetedCGImage:(struct CGImage *)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithTargetedCGImage:(struct CGImage *)arg1 options:(id)arg2;
- (id)initWithTargetedCIImage:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithTargetedCIImage:(id)arg1 options:(id)arg2;
- (id)initWithTargetedImageURL:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithTargetedImageURL:(id)arg1 options:(id)arg2;
- (id)initWithTargetedImageData:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithTargetedImageData:(id)arg1 options:(id)arg2;
- (_Bool)allowsCachingOfResults;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (id)sequencedRequestPreviousObservationsKey;
- (void)applyConfigurationOfRequest:(id)arg1;
- (_Bool)internalPerformInContext:(id)arg1 error:(id *)arg2;

@end
