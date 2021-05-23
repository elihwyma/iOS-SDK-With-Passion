/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>

@class NSString;

@interface PLAssetsdCloudInternalService : PLAbstractLibraryServicesManagerService

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)createPhotostreamAlbumWithStreamID:(id)arg1;
- (void)enablePhotostreamsWithStreamID:(id)arg1;
- (void)updateSharedAlbumsCachedServerConfigurationLimits;
- (void)cloudSharingSpaceManagementRequestWithType:(unsigned long long)arg1 optionalBytesToPurge:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)keyForEmailAddress:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)emailAddressForKey:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)personInfoDictionaryForPersonID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setPersonInfoDictionary:(id)arg1 forPersonID:(id)arg2;
- (void)isReadyForCloudPhotoLibraryWithReply:(CDUnknownBlockType)arg1;
- (void)shouldAutoEnableiCPLOnOSXWithReply:(CDUnknownBlockType)arg1;
- (void)syncCloudPhotoLibrary;
- (void)setCloudPhotoLibraryEnabledState:(_Bool)arg1;
- (void)setCloudPhotoLibraryPauseState:(_Bool)arg1 reason:(short)arg2;
- (void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)getCurrentTransferProgress:(CDUnknownBlockType)arg1;
- (void)getSystemBudgetsWithReply:(CDUnknownBlockType)arg1;
- (void)overrideSystemBudgetsForSyncSession:(_Bool)arg1 systemBudgets:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)publishMomentShareWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)fetchMomentShareWithURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)acceptMomentShareWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)forceSyncMomentShareWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)queryUserIdentitiesWithEmails:(id)arg1 phoneNumbers:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)getResetSyncStatusWithReply:(CDUnknownBlockType)arg1;

@end
