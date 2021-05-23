/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKMessageContentSyncServiceClientDelegate;

@interface NNMKMessageContentSyncServiceClient : NNMKSyncServiceEndpoint

{
    id <NNMKMessageContentSyncServiceClientDelegate> _delegate;
}

@property (weak, nonatomic) id <NNMKMessageContentSyncServiceClientDelegate> delegate;

- (id)initWithQueue:(id)arg1;
- (void)successfullySentProtobufWithIDSIdentifier:(id)arg1;
- (void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2;
- (void)readProtobufData:(id)arg1 type:(unsigned long long)arg2;

@end
