/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <LinkPresentation/LPMetadataProviderSpecialization.h>

@class LPFileMetadata, LPImage, LPLinkMetadata, NSObject, NSString, NSURL;

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface LPFileMetadataProviderSpecialization : LPMetadataProviderSpecialization

{
    _Bool _cancelled;
    NSURL *_temporaryFileURL;
    LPImage *_originalImage;
    LPImage *_quickLookThumbnail;
    NSString *_MIMEType;
    LPLinkMetadata *_metadata;
    LPFileMetadata *_fileMetadata;
    NSObject<OS_dispatch_group> *_fetchGroup;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)specialization;
+ (id)specializedMetadataProviderForResourceWithContext:(id)arg1;
+ (id)specializedMetadataProviderForURLWithContext:(id)arg1;
+ (id)_thumbnailQueue;

- (void)cancel;
- (void)start;
- (void)complete;
- (void)metadataProviderSpecializationDidFail:(id)arg1;
- (void)metadataProviderSpecialization:(id)arg1 didCompleteWithMetadata:(id)arg2;
- (void)fetchMetadataFromURL:(id)arg1;
- (void)fetchIconAndThumbnailFromQuickLookForURL:(id)arg1;
- (void)updatePreliminaryMetadata;
- (void)cleanUpTemporaryFile;

@end
