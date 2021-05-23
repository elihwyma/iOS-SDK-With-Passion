/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <LinkPresentation/LPMetadataProviderSpecialization.h>

@class AVAssetImageGenerator, LPLinkMetadata, LPMediaAssetFetcher;

__attribute__((visibility("hidden")))
@interface LPStreamingMediaMetadataProviderSpecialization : LPMetadataProviderSpecialization

{
    _Bool _cancelled;
    LPMediaAssetFetcher *_fetcher;
    AVAssetImageGenerator *_videoImageGenerator;
    LPLinkMetadata *_metadata;
}

+ (unsigned long long)specialization;
+ (id)specializedMetadataProviderForResourceWithContext:(id)arg1;

- (void)cancel;
- (void)start;
- (void)done;
- (void)fail;

@end
