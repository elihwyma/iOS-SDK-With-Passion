/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <CoreMediaStream/MSCupidStateMachine.h>

@class MSMediaStreamDaemon, MSObjectQueue, MSReauthorizationProtocol, MSSubscribeStreamsProtocol, NSMutableArray, NSMutableDictionary, NSString;

@protocol MSSubscribeStorageProtocol, MSSubscriberDelegate;

@interface MSSubscriber : MSCupidStateMachine

{
    id <MSSubscriberDelegate> _delegate;
    MSMediaStreamDaemon *_daemon;
    _Bool _checkOneMoreTime;
    int _state;
    MSSubscribeStreamsProtocol *_protocol;
    NSMutableDictionary *_newSubscriptionsByStreamID;
    int _retrievalState;
    id <MSSubscribeStorageProtocol> _storageProtocol;
    MSReauthorizationProtocol *_reauthProtocol;
    MSObjectQueue *_retrievalQueue;
    NSMutableArray *_assetsBeingRetrieved;
    long long _targetRetrievalByteCount;
    int _retrievalBatchSize;
    long long _maxErrorCount;
}

@property (nonatomic) MSMediaStreamDaemon *daemon;
@property (nonatomic) long long targetRetrievalByteCount;
@property (nonatomic) int retrievalBatchSize;
@property (nonatomic) id <MSSubscriberDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)forgetPersonID:(id)arg1;
+ (id)_descriptionForState:(int)arg1;
+ (id)nextActivityDate;
+ (_Bool)isInRetryState;
+ (void)stopAllActivities;
+ (id)nextActivityDateForPersonID:(id)arg1;
+ (void)_setMasterNextActivityDate:(id)arg1 forPersonID:(id)arg2;
+ (id)personIDsWithOutstandingActivities;
+ (id)_descriptionForRetrievalState:(int)arg1;
+ (id)subscriberForPersonID:(id)arg1;
+ (id)existingSubscriberForPersonID:(id)arg1;
+ (id)_clearInstantiatedSubscribersByPersonID;

- (void)dealloc;
- (void)stop;
- (void)abort;
- (void)deactivate;
- (id)subscribedStreams;
- (void)_abort;
- (void)checkForOutstandingActivities;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (void)_updateMasterManifest;
- (void)_serverSideConfigurationDidChange:(id)arg1;
- (void)_forget;
- (_Bool)_isInRetryState;
- (void)reauthorizationProtocol:(id)arg1 reauthorizedAssets:(id)arg2 rejectedAssets:(id)arg3 error:(id)arg4;
- (void)reauthorizationProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
- (void)subscribeStorageProtocol:(id)arg1 didFinishRetrievingAsset:(id)arg2 error:(id)arg3;
- (void)subscribeStorageProtocolDidFinishRetrievingAllAssets:(id)arg1;
- (void)subscribeStreamsProtocol:(id)arg1 willReceiveUpdatesForPersonID:(id)arg2 wasReset:(_Bool)arg3 metadata:(id)arg4;
- (void)subscribeStreamsProtocol:(id)arg1 didReceiveAssetCollections:(id)arg2 forPersonID:(id)arg3;
- (void)subscribeStreamsProtocol:(id)arg1 didFinishReceivingUpdatesForPersonID:(id)arg2 ctag:(id)arg3;
- (void)subscribeStreamsProtocol:(id)arg1 didFindDisappearedSubscriptionForPersonID:(id)arg2;
- (void)subscribeStreamsProtocol:(id)arg1 didFindTemporarilyUnavailableSubscriptionForPersonID:(id)arg2;
- (void)subscribeStreamsProtocol:(id)arg1 didFinishError:(id)arg2;
- (void)subscribeStreamsProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
- (void)resetSync;
- (void)checkForNewAssetCollections;
- (void)retrieveAssets:(id)arg1;
- (id)ownSubscribedStream;
- (void)_changeStateTo:(int)arg1;
- (void)_changeRetrievalStateTo:(int)arg1;
- (void)_refreshServerSideConfigurationParameters;
- (_Bool)_hasOutstandingPoll;
- (void)_setHasOutstandingPoll:(_Bool)arg1;
- (id)_subscriptionsByStreamID;
- (void)_setSubscriptionsByStreamID:(id)arg1;
- (_Bool)_isAllowedToDownload;
- (void)_checkForNewAssetCollections;
- (void)_didFinishRetrievingSubscriptionUpdate;
- (void)_didReceiveAuthenticationError:(id)arg1;
- (void)_retrieveAssets;
- (void)_retrieveNextAssets;
- (void)_reauthorizeAssets;
- (void)_stopOutSubscriberState:(int *)arg1 outRetrievalState:(int *)arg2;
- (void)_finishedRetrievingAsset:(id)arg1;

@end
