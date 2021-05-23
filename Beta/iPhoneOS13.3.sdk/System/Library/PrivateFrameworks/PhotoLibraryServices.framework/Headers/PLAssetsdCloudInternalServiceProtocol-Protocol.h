/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@protocol PLAssetsdCloudInternalServiceProtocol <Swift>

- (unsigned short)createPhotostreamAlbumWithStreamID: /* Error: Ran out of types for this method. */;
- (unsigned short)enablePhotostreamsWithStreamID: /* Error: Ran out of types for this method. */;
- (unsigned short)updateSharedAlbumsCachedServerConfigurationLimits;
- (unsigned short)cloudSharingSpaceManagementRequestWithType:optionalBytesToPurge:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)keyForEmailAddress:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)emailAddressForKey:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)personInfoDictionaryForPersonID:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)setPersonInfoDictionary:forPersonID: /* Error: Ran out of types for this method. */;
- (unsigned short)isReadyForCloudPhotoLibraryWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldAutoEnableiCPLOnOSXWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)syncCloudPhotoLibrary;
- (unsigned short)setCloudPhotoLibraryEnabledState: /* Error: Ran out of types for this method. */;
- (unsigned short)setCloudPhotoLibraryPauseState:reason: /* Error: Ran out of types for this method. */;
- (unsigned short)rampingRequestForResourceType:numRequested:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)getCurrentTransferProgress: /* Error: Ran out of types for this method. */;
- (unsigned short)getSystemBudgetsWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)overrideSystemBudgetsForSyncSession:systemBudgets:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)publishMomentShareWithUUID:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchMomentShareWithURL:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)acceptMomentShareWithUUID:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)forceSyncMomentShareWithUUID:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)queryUserIdentitiesWithEmails:phoneNumbers:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)getResetSyncStatusWithReply: /* Error: Ran out of types for this method. */;

@end
