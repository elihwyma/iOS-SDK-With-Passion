/*
 Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

#import <BusinessChatService/BCSRemoteFetch.h>

__attribute__((visibility("hidden")))
@interface BCSBusinessItemRemoteFetch : BCSRemoteFetch

- (void)fetchBusinessItemWithBizID:(id)arg1 forClientBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchBusinessItemWithBucketStartIndex:(long long)arg1 endIndex:(long long)arg2 forClientBundleID:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
