/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class MISSING_TYPE, MSASStateMachine;

@protocol MSASStateMachineDelegate

@property (nonatomic) MSASStateMachine *MSASCounterpartInstance;

- (MISSING_TYPE *)MSASStateMachineDidStart: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachineDidFindGlobalResetSync:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didFindSyncedKeyValueChangesForAlbumGUIDS:albumChanges:accessControlChangesForAlbumGUIDS:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didFindAlbumChanges:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didFindAccessControlChangesForAlbumGUIDS:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didFindSyncedKeyValueChangesForAlbumGUIDS:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didFinishCheckingForChangesInfo:error: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:willCheckForUpdatesInAlbum:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didFindAssetCollectionChanges:forAlbum:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didFindChangesInAlbum:info:error: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didFinishCheckingForUpdatesInAlbum:info:error: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didFinishCheckingForUpdatesInAlbums:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didFindNewURLString:forAlbumWithGUID:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didFinishGettingAccessControls:forAlbum:info:error: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:willUpdateAssetCollections:inAlbum:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didFinishUpdatingAssetCollections:inAlbum:info:error: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didFinishSubscribingToAlbum:info:error: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didFinishUnsubscribingFromAlbum:info:error: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didFinishMarkingAsSpamInvitationForAlbum:invitationGUID:info:error: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didFinishMarkingAsSpamInvitationForToken:info:error: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didFindCommentChanges:inAssetCollectionWithGUID:inAlbumWithGUID:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didFinishCheckingForCommentChangesInAssetCollectionWithGUID:largestCommentID:info:error: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:willCheckForAlbumSyncedStateChangesInAlbum:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didFindAssetCollectionSyncedState:forAssetCollectionGUID:inAlbum:assetCollectionStateCtag:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didFindAlbumSyncedState:forAlbum:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didFinishCheckingForAlbumSyncedStateChangesInAlbum:info:error:newAlbumStateCtag: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didFinishSettingSyncedStateForAlbum:info:error:newAlbumStateCtag: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didFinishSettingSyncedStateForAssetCollection:inAlbum:assetStateCtag:info:error: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachineDidRequestAlbumStateCtagForAlbumWithGUID:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachineDidRequestAlbumURLStringForAlbumWithGUID:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachineDidRequestAlbumWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachineDidRequestAssetCollectionStateCtagForAssetCollectionWithGUID:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didQueryIsAssetCollectionWithGUIDInModel: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didFinishEnqueueingAssetsForDownload:inAlbumWithGUID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didFinishRetrievingAsset:inAlbum:error: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didFinishDeletingAlbum:info:error: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didFinishDeletingAssetCollection:inAlbum:info:error: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didFinishDeletingComment:inAssetCollection:inAlbum:info:error: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didFinishCreatingAlbum:info:error: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didFinishUpdatingAlbum:info:error: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didRequestAssetsForAddingAssetCollections:inAlbum:specifications:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didFinishAddingAssetCollection:toAlbum:info:error: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didFinishAddingSharingRelationships:toOwnedAlbum:info:error: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didFinishSendingInvitationByPhone:toOwnedAlbum:info:error: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didFinishRemovingSharingRelationship:fromOwnedAlbum:info:error: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didFinishAddingComment:toAssetCollection:inAlbum:info:error: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachine:didFireScheduledEvent:forAssetCollectionGUID:albumGUID:info: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)MSASStateMachineDidUpdateServerCommunicationBackoffDate: /* Error: Ran out of types for this method. */;

@end
