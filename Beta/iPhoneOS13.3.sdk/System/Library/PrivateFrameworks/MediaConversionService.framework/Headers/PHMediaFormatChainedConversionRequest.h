/*
 Image: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
 */

#import <MediaConversionService/PHMediaFormatConversionCompositeRequest.h>

@class PHMediaFormatConversionRequest;

@interface PHMediaFormatChainedConversionRequest : PHMediaFormatConversionCompositeRequest

{
    PHMediaFormatConversionRequest *_independentRequest;
    PHMediaFormatConversionRequest *_dependentRequest;
    CDUnknownBlockType _successUpdateHandler;
}

@property (retain) PHMediaFormatConversionRequest *independentRequest;
@property (retain) PHMediaFormatConversionRequest *dependentRequest;
@property (copy) CDUnknownBlockType successUpdateHandler;

+ (id)requestForSource:(id)arg1 destinationCapabilities:(id)arg2 error:(id *)arg3;
+ (id)chainedRequestForAdjustmentRenderRequest:(id)arg1 dependingOnRequest:(id)arg2 error:(id *)arg3;
+ (id)chainedRequestForRequest:(id)arg1 dependingOnRequest:(id)arg2 error:(id *)arg3 successUpdateHandler:(CDUnknownBlockType)arg4;

- (void)enqueueSubrequestsOnConversionManager:(id)arg1;
- (void)enumerateSubrequests:(CDUnknownBlockType)arg1;
- (void)postProcessSuccessfulCompositeRequest;

@end
