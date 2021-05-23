/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSObject.h>

@class MSASPConnectionGate, NSString, NSURL;

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface MSASProtocol : NSObject

{
    _Bool _isShuttingDown;
    MSASPConnectionGate *_gate;
    NSObject<OS_dispatch_queue> *_pendingConnectionsQueue;
    NSObject<OS_dispatch_group> *_pendingConnectionsGroup;
    NSString *_personID;
    NSURL *_baseURL;
    NSString *_serverSideConfigVersion;
    NSString *_headerVersion;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_memberQueue;
}

@property (retain, nonatomic) MSASPConnectionGate *gate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pendingConnectionsQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *pendingConnectionsGroup;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (nonatomic) _Bool isShuttingDown;
@property (nonatomic, readonly) NSString *headerVersion;
@property (retain, nonatomic, readonly) NSString *personID;
@property (retain, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) NSString *serverSideConfigVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_shareURL;
- (void)shutDownCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithPersonID:(id)arg1;
- (void)acceptInvitationWithToken:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)stopCompletionBlock:(CDUnknownBlockType)arg1;
- (id)shutDownError;
- (id)stoppingError;
- (CDUnknownBlockType)stopHandlerBlock;
- (void)sendURLRequest:(id)arg1 bodyObj:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)sendURLRequest:(id)arg1 method:(id)arg2 bodyObj:(id)arg3 checkServerSideConfigVersion:(_Bool)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_sendOneURLRequest:(id)arg1 checkServerSideConfigVersion:(_Bool)arg2 retryCount:(unsigned long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_prepareHeadersForRequest:(id)arg1;
- (id)HTTPErrorWithStatusCode:(long long)arg1;
- (id)errorFromStandardProcessingOnResponse:(id)arg1 responseObject:(id)arg2 checkServerSideConfigVersion:(_Bool)arg3 error:(id)arg4 body:(id)arg5;
- (id)_createAlbumURL;
- (id)_updateAlbumURLWithBaseURL:(id)arg1;
- (id)_putAssetsURLWithBaseURL:(id)arg1;
- (id)_getUploadTokensURLWithBaseURL:(id)arg1;
- (id)_getVideoURLWithBaseURL:(id)arg1;
- (id)_uploadCompleteURLWithBaseURL:(id)arg1;
- (id)_unshareURL;
- (id)_addCommentURLWithBaseURL:(id)arg1;
- (id)_enablePublicAccessURLWithBaseURL:(id)arg1;
- (id)_enableMultipleContributorsURLWithBaseURL:(id)arg1;
- (id)_deleteURLWithBaseURL:(id)arg1;
- (id)_deleteAssetsURLWithBaseURL:(id)arg1;
- (id)_deleteCommentURLWithBaseURL:(id)arg1;
- (id)_getChangesURL;
- (id)_sharingInfoURLWithBaseURL:(id)arg1;
- (id)_albumSummaryURLWithBaseURL:(id)arg1;
- (id)_getAssetsURLWithBaseURL:(id)arg1;
- (id)_getTokensURLWithBaseURL:(id)arg1;
- (id)_subscribeURL;
- (id)_unsubscribeURL;
- (id)_reportSpamURL;
- (id)_getCommentsURLWithBaseURL:(id)arg1;
- (id)_setCommentPositionURL;
- (id)_albumStateURL;
- (id)_setAssetStateURL;
- (id)_setAlbumStateURL;
- (id)_serverSideConfigURL;
- (id)_getAlbumURL;
- (void)createAlbum:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)updateAlbum:(id)arg1 albumURLString:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)putAssetCollections:(id)arg1 intoAlbum:(id)arg2 albumURLString:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)getUploadTokens:(id)arg1 forAssetCollectionWithGUID:(id)arg2 inAlbumWithGUID:(id)arg3 albumURLString:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)getVideoURL:(id)arg1 forAssetCollectionWithGUID:(id)arg2 inAlbumWithGUID:(id)arg3 albumURLString:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (_Bool)responseDict:(id)arg1 containsLimitErrorCode:(id)arg2 outMaxAllowed:(id *)arg3;
- (void)sendUploadCompleteSuccessfulAssetCollections:(id)arg1 failedAssetCollections:(id)arg2 album:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)addSharingRelationships:(id)arg1 toAlbum:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)removeSharingRelationships:(id)arg1 fromAlbum:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)addComment:(id)arg1 toAssetCollection:(id)arg2 inAlbum:(id)arg3 albumURLString:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)setPublicAccessEnabled:(_Bool)arg1 forAlbum:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setMultipleContributorsEnabled:(_Bool)arg1 forAlbum:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)deleteAlbum:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)deleteAssetCollections:(id)arg1 inAlbum:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)deleteComment:(id)arg1 fromAssetCollection:(id)arg2 inAlbum:(id)arg3 albumURLString:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)getChangesRootCtag:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getSharingInfoForAlbum:(id)arg1 albumURLString:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)albumSummaryAlbum:(id)arg1 albumURLString:(id)arg2 resetSync:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)getAssetCollections:(id)arg1 inAlbum:(id)arg2 albumURLString:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)_couldNotReauthorizeError;
- (void)getTokensForAssets:(id)arg1 inAlbum:(id)arg2 albumURLString:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)subscribeToAlbum:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)unsubscribeFromAlbum:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)markAsSpamInvitationForAlbum:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)markAsSpamInvitationForToken:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getCommentChanges:(id)arg1 inAlbumWithGUID:(id)arg2 albumURLString:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)getAlbumSyncedStateForAlbum:(id)arg1 assetCollectionStateBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setAssetCollectionSyncedState:(id)arg1 forAssetCollection:(id)arg2 inAlbum:(id)arg3 assetCollectionStateCtag:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)setAlbumSyncedState:(id)arg1 forAlbum:(id)arg2 albumStateCtag:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)getServerSideConfigCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getAlbumURLForAlbumWithGUID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
