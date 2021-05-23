/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdCloudInternalClient : PLAssetsdBaseClient

- (_Bool)isReadyForCloudPhotoLibrary;
- (void)fetchMomentShareFromShareURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)acceptMomentShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)publishMomentShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)createPhotostreamAlbumWithStreamID:(id)arg1;
- (void)enablePhotostreamsWithStreamID:(id)arg1;
- (void)updateSharedAlbumsCachedServerConfigurationLimits;
- (void)setPersonInfoDictionary:(id)arg1 forPersonID:(id)arg2;
- (void)syncCloudPhotoLibrary;
- (void)setCloudPhotoLibraryEnabledState:(_Bool)arg1;
- (void)setCloudPhotoLibraryPauseState:(_Bool)arg1 reason:(short)arg2;
- (void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)getCurrentTransferProgress:(CDUnknownBlockType)arg1;
- (void)getSystemBudgetsWithReply:(CDUnknownBlockType)arg1;
- (void)overrideSystemBudgetsForSyncSession:(_Bool)arg1 systemBudgets:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (id)personInfoDictionaryForPersonID:(id)arg1 error:(id *)arg2;
- (unsigned long long)cloudSharingSpaceManagementRequestWithType:(unsigned long long)arg1 optionalBytesToPurge:(unsigned long long)arg2 error:(id *)arg3;
- (id)emailAddressForKey:(long long)arg1 error:(id *)arg2;
- (long long)keyForEmailAddress:(id)arg1 error:(id *)arg2;
- (void)queryParticipantsWithEmails:(id)arg1 phoneNumbers:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)forceSyncMomentShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)shouldAutoEnableiCPLOnOSXWithError:(id *)arg1;
- (void)synchronouslySetCloudPhotoLibraryPauseState:(_Bool)arg1 reason:(short)arg2;
- (unsigned long long)getResetSyncStatusWithError:(id *)arg1;

@end
