/*
 Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

#import <Foundation/NSObject.h>

@interface BCSConfigController : NSObject

- (void)fetchConfigItemForClientBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchBloomFilterWithStartIndex:(long long)arg1 shardCount:(long long)arg2 forClientBundleID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_shardHashForIndex:(long long)arg1 count:(long long)arg2;
- (void)deleteConfigItemFromPersistentStore;

@end
