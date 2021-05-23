/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKAccountsSyncServiceClientDelegate;

@interface NNMKAccountsSyncServiceClient : NNMKSyncServiceEndpoint

{
    id <NNMKAccountsSyncServiceClientDelegate> _delegate;
}

@property (weak, nonatomic) id <NNMKAccountsSyncServiceClientDelegate> delegate;

- (id)initWithQueue:(id)arg1;
- (void)successfullySentProtobufWithIDSIdentifier:(id)arg1;
- (void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2;
- (void)readProtobufData:(id)arg1 type:(unsigned long long)arg2;
- (id)updateAccountSourceTypeForAccount:(id)arg1;
- (id)sendAccountAuthenticationStatus:(id)arg1;

@end
