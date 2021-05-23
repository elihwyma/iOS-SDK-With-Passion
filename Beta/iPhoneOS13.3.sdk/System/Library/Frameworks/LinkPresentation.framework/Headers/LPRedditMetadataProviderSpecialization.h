/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <LinkPresentation/LPMetadataProviderSpecialization.h>

@class LPLinkMetadata, LPURLFetcher;

__attribute__((visibility("hidden")))
@interface LPRedditMetadataProviderSpecialization : LPMetadataProviderSpecialization

{
    _Bool _cancelled;
    LPURLFetcher *_fetcher;
    LPLinkMetadata *_metadata;
    CDUnknownBlockType _completionHandler;
}

+ (unsigned long long)specialization;
+ (_Bool)generateSpecializedMetadataForCompleteMetadata:(id)arg1 withContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
