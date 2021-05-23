/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKMessagesSyncServiceServerDelegate;

@interface NNMKMessagesSyncServiceServer : NNMKSyncServiceEndpoint

{
    id <NNMKMessagesSyncServiceServerDelegate> _delegate;
}

@property (weak, nonatomic) id <NNMKMessagesSyncServiceServerDelegate> delegate;

- (id)initWithQueue:(id)arg1;
- (void)successfullySentProtobufWithIDSIdentifier:(id)arg1;
- (void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2;
- (void)readProtobufData:(id)arg1 type:(unsigned long long)arg2;
- (id)updateMailboxSelection:(id)arg1;
- (void)connectivityChanged;
- (void)spaceBecameAvailable;
- (id)updateMessagesStatus:(id)arg1 notificationPriority:(_Bool)arg2;
- (id)deleteMessages:(id)arg1 notificationPriority:(_Bool)arg2;
- (id)addMessages:(id)arg1 notificationPriority:(_Bool)arg2;
- (id)sendInitialMessagesSync:(id)arg1;
- (id)sendBatchedInitialMessagesSync:(id)arg1;
- (id)sendMoreMessages:(id)arg1;
- (id)sendMoreMessagesForConversation:(id)arg1;
- (id)sendBatchedFetchResult:(id)arg1;
- (id)sendCoalescedBatchedFetchResult:(id)arg1;

@end
