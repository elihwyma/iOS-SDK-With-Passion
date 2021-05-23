/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <Foundation/NSObject.h>

@class NNMKBatchRequestHandler, NNMKSyncController, NNMKSyncSessionController;

@protocol NNMKDeviceRegistryHolder, NNMKSyncStateManager;

@interface NNMKSyncPersistenceHandler : NSObject

{
    id <NNMKDeviceRegistryHolder> _delegate;
    id <NNMKSyncStateManager> _syncStateManager;
    NNMKSyncController *_syncController;
    NNMKBatchRequestHandler *_batchRequestHandler;
    NNMKSyncSessionController *_sessionController;
}

@property (weak, nonatomic) id <NNMKDeviceRegistryHolder> delegate;
@property (weak, nonatomic) id <NNMKSyncStateManager> syncStateManager;
@property (retain, nonatomic) NNMKSyncController *syncController;
@property (retain, nonatomic) NNMKBatchRequestHandler *batchRequestHandler;
@property (retain, nonatomic) NNMKSyncSessionController *sessionController;

- (id)currentDeviceRegistry;
- (void)_createDefaultMailbox:(id)arg1;
- (id)protoMessageFromMessage:(id)arg1;
- (id)persistAccounts:(id)arg1;
- (id)updateMailboxListForAccount:(id)arg1 mailboxListChanged:(_Bool *)arg2;
- (id)addStandaloneAccountIdentity:(id)arg1;
- (id)addAccountAuthenticationStatusRequest:(double)arg1;
- (id)addMessages:(id)arg1 containsNewMessages:(_Bool)arg2 mailbox:(id)arg3;
- (id)addMoreMessages:(id)arg1 mailbox:(id)arg2 isProtectedData:(_Bool)arg3;
- (id)addMoreConversationSpecificMessages:(id)arg1 conversationId:(id)arg2 mailbox:(id)arg3 isProtectedData:(_Bool)arg4;
- (id)addMessagesToResend:(id)arg1 mailbox:(id)arg2 isProtectedData:(_Bool)arg3;
- (id)updateMessagesStatus:(id)arg1 mailbox:(id)arg2;
- (id)deleteMessagesWithIds:(id)arg1 mailbox:(id)arg2;
- (id)updateMessagesFromConversation:(id)arg1 withNotifyConversationState:(_Bool)arg2 mailbox:(id)arg3;
- (id)addMessageContent:(id)arg1 forMessage:(id)arg2 mailbox:(id)arg3 isProtectedData:(_Bool)arg4;

@end
