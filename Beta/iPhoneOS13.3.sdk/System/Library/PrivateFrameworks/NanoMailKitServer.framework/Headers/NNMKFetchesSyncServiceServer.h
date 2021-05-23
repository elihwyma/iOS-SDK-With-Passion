/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKFetchesSyncServiceServerDelegate;

@interface NNMKFetchesSyncServiceServer : NNMKSyncServiceEndpoint

{
    id <NNMKFetchesSyncServiceServerDelegate> _delegate;
}

@property (weak, nonatomic) id <NNMKFetchesSyncServiceServerDelegate> delegate;

- (id)initWithQueue:(id)arg1;
- (void)successfullySentProtobufWithIDSIdentifier:(id)arg1;
- (void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2;
- (void)readProtobufData:(id)arg1 type:(unsigned long long)arg2;
- (void)requestPrepareForFullSync:(id)arg1;
- (void)warnErrorDownloadingContentForMessage:(id)arg1 notificationPriority:(_Bool)arg2 userRequested:(_Bool)arg3;
- (void)notifyOldMessagesAvailable:(id)arg1;
- (void)notifyFetchRequestCompleted:(id)arg1;
- (id)reportComposedMessageSendingProgress:(id)arg1;

@end
