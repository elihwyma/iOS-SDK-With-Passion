/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <Foundation/NSObject.h>

@class HKPluginProxyProvider, NSString;

@protocol ASServerInterface, OS_dispatch_queue;

@interface ASClient : NSObject

{
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    id <ASServerInterface> _serverProxy;
    HKPluginProxyProvider *_pluginProxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)arg1;
- (CDUnknownBlockType)_clientQueueSuccessCompletion:(CDUnknownBlockType)arg1;
- (void)_remoteProxy:(CDUnknownBlockType)arg1;
- (void)sendInviteRequestToDestination:(id)arg1 callerID:(id)arg2 serviceIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)acceptInviteRequestFromFriendWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendWithdrawInviteRequestToFriendWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)ignoreInviteRequestFromFriendWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendCompetitionRequestToFriendWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)acceptCompetitionRequestFromFriendWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)ignoreCompetitionRequestFromFriendWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)completeCompetitionWithFriendWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setActivityDataVisible:(_Bool)arg1 toFriendWithUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setMuteEnabled:(_Bool)arg1 forFriendWithUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeFriendWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pushActivityDataToAllFriendsWithCompletion:(CDUnknownBlockType)arg1;
- (void)pushFakeActivityDataToAllFriendsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAllDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAllDataIfTimeSinceLastFetchIsGreaterThan:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cloudKitAccountStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearFriendListWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAreMultipleDevicesSharingDataForSnapshotIndex:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)expireChangeTokenWithCompletion:(CDUnknownBlockType)arg1;
- (void)friendWithRemoteUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
