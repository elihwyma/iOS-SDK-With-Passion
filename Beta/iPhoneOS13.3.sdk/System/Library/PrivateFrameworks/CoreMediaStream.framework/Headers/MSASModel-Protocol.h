/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <CoreMediaStream/Swift-Protocol.h>

@class MISSING_TYPE, NSString;

@protocol MSASModel <Swift>

@property (retain, nonatomic, readonly) NSString *personID;
@property (nonatomic) int maxGroupedCallbackEventBatchCount;
@property (nonatomic) double maxGroupedCallbackEventIdleInterval;
@property (nonatomic) double maxGroupedCallbackEventStaleness;

- (MISSING_TYPE *)cancel;
- (MISSING_TYPE *)start;
- (MISSING_TYPE *)addObserver: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)removeObserver: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)shutDown;
- (MISSING_TYPE *)albums;
- (MISSING_TYPE *)markCommentsForAssetCollectionWithGUID:asViewedWithLastViewedDate: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setFocusAlbumGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setFocusAssetCollectionGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)focusAssetCollectionGUID;
- (MISSING_TYPE *)hasCommandsInGroupedCommandQueue;
- (MISSING_TYPE *)addAlbum: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)serverSideConfiguration;
- (MISSING_TYPE *)forgetEverythingInfo:completionBlock: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)shutDownForDestruction:completionBlock: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)retrieveAssetsFromAssetCollectionsWithGUIDs:assetTypeFlags: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)retrieveAssets:inAlbumWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)deleteCommentWithGUID:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)addComments:toAssetCollectionWithGUID:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)markCommentsForAssetCollectionWithGUID:asViewedWithLastViewedDate:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)deleteAssetCollectionsWithGUIDs: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)deleteAssetCollectionWithGUID:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)addAssetCollections:toAlbumWithGUID:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setMultipleContributorsEnabled:forAlbumWithGUID:info:completionBlock: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setPublicAccessEnabled:forAlbumWithGUID:info:completionBlock: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)removeAccessControlEntryWithGUID:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)addAccessControlEntries:toAlbumWithGUID:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)rejectInvitationWithGUID:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)acceptInvitationWithGUID:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)acceptInvitationWithToken:info:completionBlock: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)markAsSpamInvitationWithToken:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)markAsSpamInvitationWithGUID:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)markAsSpamAlbumWithGUID:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)unsubscribeFromAlbumWithGUID:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)subscribeToAlbumWithGUID:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)markAlbumGUIDAsViewed:moveLastViewedAssetCollectionMarker:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)deleteAlbumWithGUID:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)modifyAlbumMetadata:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)addAlbum:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)refreshCommentsForAssetCollectionWithGUID:resetSync:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)refreshAccessControlListForAlbumWithGUID:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)refreshContentOfAlbumWithGUID:resetSync:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)refreshResetSync:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)hasEnqueuedActivities;
- (MISSING_TYPE *)albumGUIDs;
- (MISSING_TYPE *)albumWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)accessControlsForAlbumWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)accessControlGUIDsForAlbumWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)accessControlWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)invitations;
- (MISSING_TYPE *)invitationGUIDs;
- (MISSING_TYPE *)invitationForAlbumWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)invitationWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)isPublicAccessEnabledForAlbumWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)assetCollectionsInAlbumWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)assetCollectionGUIDsInAlbumWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)assetCollectionWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)videoURLForAssetCollectionWithGUID:completionBlock: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)videoURLsForAssetCollectionWithGUID:forMediaAssetType:completionBlock: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)commentsForAssetCollectionWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)commentWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)captionForAssetCollectionWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)isAlbumWithGUIDMarkedAsUnviewed: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)unviewedAlbumCount;
- (MISSING_TYPE *)isAssetCollectionWithGUIDMarkedAsUnviewed: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)unviewedAssetCollectionCountForAlbumWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)earliestUnviewedAssetCollectionGUIDInAlbumWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)lastViewedCommentDateForAssetCollectionWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setUserInfo:forAlbumWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)userInfoForAlbumWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setUserInfo:forAssetCollectionWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)userInfoForAssetCollectionWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setUserInfo:forAccessControlWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)userInfoForAccessControlWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setUserInfo:forInvitationWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)userInfoForInvitationWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setUserInfo:forCommentWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)userInfoForCommentWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)serverCommunicationBackoffDate;
- (MISSING_TYPE *)markAlbumGUIDAsViewed:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)forgetEverythingInfo: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)refreshResetSync: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)refreshContentOfAlbumWithGUID:resetSync: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)refreshCommentsForAssetCollectionWithGUID:resetSync: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)refreshAccessControlListForAlbumWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)modifyAlbumMetadata: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)deleteAlbumWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)markAlbumGUIDAsViewed: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)subscribeToAlbumWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)unsubscribeFromAlbumWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)acceptInvitationWithToken:completionBlock: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)acceptInvitationWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)rejectInvitationWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)addAccessControlEntries:toAlbumWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)removeAccessControlEntryWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setPublicAccessEnabled:forAlbumWithGUID:completionBlock: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setMultipleContributorsEnabled:forAlbumWithGUID:completionBlock: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)addAssetCollections:toAlbumWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)deleteAssetCollectionWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)addComments:toAssetCollectionWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)deleteCommentWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)forgetEverything;
- (MISSING_TYPE *)assetsInDownloadQueueCount;
- (MISSING_TYPE *)errorIsCancellation: /* Error: Ran out of types for this method. */;

@end
