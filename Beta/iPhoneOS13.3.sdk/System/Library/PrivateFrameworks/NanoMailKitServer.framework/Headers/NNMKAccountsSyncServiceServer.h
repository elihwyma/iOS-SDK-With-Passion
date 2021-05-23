/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKAccountsSyncServiceServerDelegate;

@interface NNMKAccountsSyncServiceServer : NNMKSyncServiceEndpoint

{
    id <NNMKAccountsSyncServiceServerDelegate> _delegate;
}

@property (weak, nonatomic) id <NNMKAccountsSyncServiceServerDelegate> delegate;

- (id)initWithQueue:(id)arg1;
- (id)deleteAccount:(id)arg1;
- (id)addOrUpdateAccount:(id)arg1;
- (id)sendInitialAccountsSync:(id)arg1;
- (id)sendStandaloneAccountIdentity:(id)arg1;
- (id)requestWatchAccountsStatus:(id)arg1;
- (id)syncVIPList:(id)arg1;
- (void)successfullySentProtobufWithIDSIdentifier:(id)arg1;
- (void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2;
- (void)readProtobufData:(id)arg1 type:(unsigned long long)arg2;

@end
