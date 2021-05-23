/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>

@class NSString;

@interface PLAssetsdResourceInternalService : PLAbstractLibraryServicesManagerService

{
    NSString *_trustedCallerBundleID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)batchSaveAssetJobs:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)prepareRevertToOriginalWithObjectURI:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)asynchronousMasterThumbnailForAssetUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)purgeExpiredOutboundSharingAssetsWithReply:(CDUnknownBlockType)arg1;
- (id)initWithLibraryServicesManager:(id)arg1 trustedCallerBundleID:(id)arg2;

@end
