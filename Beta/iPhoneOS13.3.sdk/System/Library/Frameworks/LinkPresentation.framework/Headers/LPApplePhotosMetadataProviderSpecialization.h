/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <LinkPresentation/LPMetadataProviderSpecialization.h>

@class LPApplePhotosMomentMetadata, NSString, PHFetchResult, PHPhotoLibrary;

__attribute__((visibility("hidden")))
@interface LPApplePhotosMetadataProviderSpecialization : LPMetadataProviderSpecialization

{
    _Bool _cancelled;
    int _pendingImageRequest;
    PHPhotoLibrary *_photoLibrary;
    PHFetchResult *_keyAssetFetch;
    LPApplePhotosMomentMetadata *_metadata;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)specialization;
+ (id)specializedMetadataProviderForURLWithContext:(id)arg1;

- (void)dealloc;
- (void)cancel;
- (void)start;
- (void)fail;
- (void)didFetchKeyAsset:(id)arg1;
- (void)completeWithMetadata:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;

@end
