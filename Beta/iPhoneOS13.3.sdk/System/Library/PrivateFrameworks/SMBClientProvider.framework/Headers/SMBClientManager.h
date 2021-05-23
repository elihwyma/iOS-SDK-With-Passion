/*
 Image: /System/Library/PrivateFrameworks/SMBClientProvider.framework/SMBClientProvider
 */

#import <LiveFS/LiveFSClient.h>

@interface SMBClientManager : LiveFSClient

+ (id)newManager;

- (id)volumes:(id *)arg1;
- (void)listenerForVolume:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)listenerForVolume:(id)arg1 error:(id *)arg2;
- (id)forgetVolume:(id)arg1;
- (void)addSMBServerOrShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)forgetVolume:(id)arg1 withFlags:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)volumesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)forgetVolume:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)addVolume:(id)arg1 atServer:(id)arg2 credentialType:(long long)arg3 credential:(id)arg4;
- (void)addVolumes:(id)arg1 atServer:(id)arg2 credentialType:(long long)arg3 credential:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)sharesAtServer:(id)arg1 credentialType:(long long)arg2 credential:(id)arg3 error:(id *)arg4;
- (void)sharesAtServer:(id)arg1 credentialType:(long long)arg2 credential:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)credentialTypesForServer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)mountsFromServer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
