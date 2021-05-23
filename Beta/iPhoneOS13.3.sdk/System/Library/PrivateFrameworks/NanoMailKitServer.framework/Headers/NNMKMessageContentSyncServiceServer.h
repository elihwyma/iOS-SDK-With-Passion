/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKMessageContentSyncServiceServerDelegate;

@interface NNMKMessageContentSyncServiceServer : NNMKSyncServiceEndpoint

{
    id <NNMKMessageContentSyncServiceServerDelegate> _delegate;
}

@property (weak, nonatomic) id <NNMKMessageContentSyncServiceServerDelegate> delegate;

- (id)initWithQueue:(id)arg1;
- (void)successfullySentProtobufWithIDSIdentifier:(id)arg1;
- (void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2;
- (void)readProtobufData:(id)arg1 type:(unsigned long long)arg2;
- (id)syncMessageContent:(id)arg1 notificationPriority:(_Bool)arg2 userRequested:(_Bool)arg3;
- (id)syncImageAttachment:(id)arg1 notificationPriority:(_Bool)arg2 userRequested:(_Bool)arg3;
- (id)notifyInitialContentSyncCompleted:(id)arg1;

@end
