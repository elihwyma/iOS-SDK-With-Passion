/*
 Image: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
 */

#import <MediaConversionService/PHMediaFormatConversionCompositeRequest.h>

@class PHMediaFormatConversionRequest;

@interface PHMediaFormatLivePhotoConversionRequest : PHMediaFormatConversionCompositeRequest

{
    PHMediaFormatConversionRequest *_imageConversionRequest;
    PHMediaFormatConversionRequest *_videoConversionRequest;
}

@property (retain) PHMediaFormatConversionRequest *imageConversionRequest;
@property (retain) PHMediaFormatConversionRequest *videoConversionRequest;

+ (id)requestForSource:(id)arg1 destinationCapabilities:(id)arg2 error:(id *)arg3;
+ (id)requestForImageConversionRequest:(id)arg1 videoConversionRequest:(id)arg2 error:(id *)arg3;

- (void)didPreflightSubrequest:(id)arg1;
- (void)enqueueSubrequestsOnConversionManager:(id)arg1;
- (void)enumerateSubrequests:(CDUnknownBlockType)arg1;

@end
