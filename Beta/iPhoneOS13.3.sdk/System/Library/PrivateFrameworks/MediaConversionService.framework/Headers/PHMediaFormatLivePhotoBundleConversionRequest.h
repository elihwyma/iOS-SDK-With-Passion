/*
 Image: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
 */

#import <MediaConversionService/PHMediaFormatConversionCompositeRequest.h>

@class PHMediaFormatLivePhotoConversionRequest;

@interface PHMediaFormatLivePhotoBundleConversionRequest : PHMediaFormatConversionCompositeRequest

{
    PHMediaFormatLivePhotoConversionRequest *_livePhotoConversionRequest;
}

@property (retain) PHMediaFormatLivePhotoConversionRequest *livePhotoConversionRequest;

- (_Bool)prepareWithError:(id *)arg1;
- (void)enqueueSubrequestsOnConversionManager:(id)arg1;
- (void)enumerateSubrequests:(CDUnknownBlockType)arg1;
- (void)postProcessSuccessfulCompositeRequest;

@end
