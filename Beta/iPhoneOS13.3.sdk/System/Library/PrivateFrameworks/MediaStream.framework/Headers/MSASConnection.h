/*
 Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, XPCNSClientConnection;

@protocol OS_dispatch_queue;

@interface MSASConnection : NSObject

{
    XPCNSClientConnection *_connection;
    XPCNSClientConnection *_noWakeConnection;
    NSMutableDictionary *_foregroundPingTimerContextByPersonID;
    NSMutableDictionary *_focusAlbumTimerByPersonID;
    NSMutableDictionary *_focusAlbumGUIDByPersonID;
    NSMutableDictionary *_serverSideConfigurationDictionaryByPersonID;
    NSObject<OS_dispatch_queue> *_memberQueue;
}

@property (retain, nonatomic) XPCNSClientConnection *connection;
@property (retain, nonatomic) XPCNSClientConnection *noWakeConnection;
@property (retain, nonatomic) NSMutableDictionary *foregroundPingTimerContextByPersonID;
@property (retain, nonatomic) NSMutableDictionary *focusAlbumTimerByPersonID;
@property (retain, nonatomic) NSMutableDictionary *focusAlbumGUIDByPersonID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) NSMutableDictionary *serverSideConfigurationDictionaryByPersonID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedConnection;

- (id)init;
- (void)videoURLsForAssetCollectionWithGUID:(id)arg1 forMediaAssetType:(unsigned long long)arg2 personID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)retryOutstandingActivities;
- (void)assetsInDownloadQueueCountForPersonID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)isBusyCompletionBlock:(CDUnknownBlockType)arg1;
- (void)refreshResetSync:(_Bool)arg1 personID:(id)arg2;
- (void)setIsUIForeground:(_Bool)arg1 forPersonID:(id)arg2;
- (void)assetCollectionWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)retrieveAssets:(id)arg1 inAlbumWithGUID:(id)arg2 personID:(id)arg3;
- (void)setFocusAssetCollectionGUID:(id)arg1 forPersonID:(id)arg2;
- (void)setFocusAlbum:(id)arg1 forPersonID:(id)arg2;
- (void)assetCollectionGUIDsInAlbumWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)commentGUIDsForAssetCollectionWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)commentWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2 personID:(id)arg3;
- (void)markAlbumGUIDAsViewed:(id)arg1 personID:(id)arg2 moveLastViewedAssetCollectionMarker:(_Bool)arg3 info:(id)arg4;
- (void)deleteCommentWithGUID:(id)arg1 personID:(id)arg2;
- (void)addComments:(id)arg1 toAssetCollectionWithGUID:(id)arg2 personID:(id)arg3;
- (void)refreshAccessControlListForAlbumWithGUID:(id)arg1 personID:(id)arg2;
- (void)markAsSpamAlbumWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)markAsSpamInvitationWithToken:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)subscribeToAlbumWithGUID:(id)arg1 personID:(id)arg2;
- (void)acceptInvitationWithToken:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)unsubscribeFromAlbumWithGUID:(id)arg1 personID:(id)arg2;
- (void)removeAccessControlEntryWithGUID:(id)arg1 personID:(id)arg2;
- (void)deleteAssetCollectionsWithGUIDs:(id)arg1 personID:(id)arg2;
- (void)addAssetCollections:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3;
- (void)setMultipleContributorsEnabled:(_Bool)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)setPublicAccessEnabled:(_Bool)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)modifyAlbumMetadata:(id)arg1 personID:(id)arg2;
- (void)deleteAlbumWithGUID:(id)arg1 personID:(id)arg2;
- (void)addAlbum:(id)arg1 personID:(id)arg2;
- (void)serverSideConfigurationDictionaryForPersonID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)forgetEverythingAboutPersonID:(id)arg1;
- (void)retryOutstandingActivitiesForPersonID:(id)arg1;
- (void)retrieveAssetsFromAssetCollectionsWithGUIDs:(id)arg1 assetTypeFlags:(int)arg2 personID:(id)arg3;
- (void)addAccessControlEntries:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3;
- (void)XPCNSClientConnection:(id)arg1 didReceiveRequest:(id)arg2;
- (void)_sendMessageReliably:(id)arg1 data:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
- (id)_communicationFailureError;
- (void)_sendMessageReliably:(id)arg1;
- (id)_cloneArray:(id)arg1;
- (void)nextActivityDateHandler:(CDUnknownBlockType)arg1;
- (void)isInRetryStateHandler:(CDUnknownBlockType)arg1;
- (void)cancelActivitiesForPersonID:(id)arg1;
- (void)handlePushNotificationForPersonID:(id)arg1;
- (void)activityIsThrottledByLackOfDiskSpacePersonID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)timerPingQueueSendSetUIForeground:(_Bool)arg1 personID:(id)arg2;
- (void)pingForeground;
- (void)timerPingQueueForegroundPingTimerExpiredContext:(id)arg1 personID:(id)arg2;
- (void)setFocusAlbumGUID:(id)arg1 forPersonID:(id)arg2;
- (void)albumGUIDsForPersonID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)albumWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)accessControlGUIDsForAlbumWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)accessControlWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)invitationGUIDsForPersonID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)invitationWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)videoURLForAssetCollectionWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)isAssetCollectionWithGUID:(id)arg1 markedAsUnviewedPersonID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)refreshResetSync:(_Bool)arg1 personID:(id)arg2 info:(id)arg3;
- (void)refreshContentOfAlbumWithGUID:(id)arg1 resetSync:(_Bool)arg2 personID:(id)arg3;
- (void)refreshContentOfAlbumWithGUID:(id)arg1 resetSync:(_Bool)arg2 personID:(id)arg3 info:(id)arg4;
- (void)refreshAccessControlListForAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)refreshCommentsForAssetCollectionWithGUID:(id)arg1 resetSync:(_Bool)arg2 personID:(id)arg3;
- (void)refreshCommentsForAssetCollectionWithGUID:(id)arg1 resetSync:(_Bool)arg2 personID:(id)arg3 info:(id)arg4;
- (void)addAlbum:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)modifyAlbumMetadata:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)deleteAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)markAlbumGUIDAsViewed:(id)arg1 personID:(id)arg2;
- (void)markAlbumGUIDAsViewed:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)setPublicAccessEnabled:(_Bool)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)setMultipleContributorsEnabled:(_Bool)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)subscribeToAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)unsubscribeFromAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)markAsSpamInvitationWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)acceptInvitationWithToken:(id)arg1 personID:(id)arg2 info:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)acceptInvitationWithGUID:(id)arg1 personID:(id)arg2;
- (void)acceptInvitationWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)rejectInvitationWithGUID:(id)arg1 personID:(id)arg2;
- (void)rejectInvitationWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)addAccessControlEntries:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4;
- (void)removeAccessControlEntryWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)addAssetCollections:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4;
- (void)deleteAssetCollectionWithGUID:(id)arg1 personID:(id)arg2;
- (void)deleteAssetCollectionWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2 personID:(id)arg3 info:(id)arg4;
- (void)addComments:(id)arg1 toAssetCollectionWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4;
- (void)deleteCommentWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;

@end
