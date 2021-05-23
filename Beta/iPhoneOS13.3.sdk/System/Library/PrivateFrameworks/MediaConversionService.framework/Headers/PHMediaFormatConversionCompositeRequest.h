/*
 Image: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
 */

#import <MediaConversionService/PHMediaFormatConversionRequest.h>

@interface PHMediaFormatConversionCompositeRequest : PHMediaFormatConversionRequest

- (_Bool)isCompositeRequest;
- (void)setupProgress;
- (void)preflightWithConversionManager:(id)arg1;
- (_Bool)requiresLocationMetadataChange;
- (_Bool)requiresFormatConversion;
- (void)didFinishProcessing;
- (void)didPreflightSubrequest:(id)arg1;
- (void)enqueueSubrequestsOnConversionManager:(id)arg1;
- (void)enumerateSubrequests:(CDUnknownBlockType)arg1;
- (void)postProcessSuccessfulCompositeRequest;
- (void)propagateRequestOptionsToSubrequests;
- (_Bool)areAllSubrequestsPreflighted;
- (id)compositeRequestCommonInitWithError:(id *)arg1;

@end
