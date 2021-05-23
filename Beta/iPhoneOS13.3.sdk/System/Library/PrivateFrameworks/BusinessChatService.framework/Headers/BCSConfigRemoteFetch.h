/*
 Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

#import <BusinessChatService/BCSRemoteFetch.h>

__attribute__((visibility("hidden")))
@interface BCSConfigRemoteFetch : BCSRemoteFetch

- (void)fetchConfigItemForClientBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchBloomFilterWithStartIndex:(long long)arg1 shardCount:(long long)arg2 forClientBundleID:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
