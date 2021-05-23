/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSData, NSString, NSXPCConnection, NSXPCInterface;

@interface NSURLStorage_CacheClient : NSObject

{
    NSXPCInterface *_netStoreInterface;
    NSXPCConnection *_networkStorageConnection;
    NSString *_path;
    struct weak_ptr<__CFURLCache> _cfWeakCacheCpp;
    NSData *_sandboxExtensionToken;
    long long _storageSize;
    _Bool _networkStorageConnectionInterrupted;
}

@property _Bool networkStorageConnectionInterrupted;

- (void)dealloc;
- (id).cxx_construct;
- (void)_invalidateNSXPCConnection;
- (void)deleteResponseForRequestWithKey:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)copyAllPartitionNamesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)copyHostNamesForOptionalPartition:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)deleteAllHostNames:(id)arg1 forOptionalPartition:(id)arg2;
- (void)performSchemaCheckAndUpdate;
- (void)setMaxSize:(long long)arg1;
- (long long)currentDiskUsage;
- (void)deleteAllResponses;
- (void)addCachedResponseWithDictionary:(id)arg1 key:(id)arg2;
- (id)getPath;
- (void)flushWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)deleteResponsesSinceDate:(id)arg1;
- (void)setMinSizeForVMCachedResource:(long long)arg1;
- (id)initWithCache:(shared_ptr_25027cf4)arg1;
- (_Bool)createStorageTaskManagerForPath:(id)arg1 maxSize:(long long)arg2 extension:(id)arg3;
- (void)notifyCachedURLResponseBecameFileBacked:(id)arg1 filePath:(id)arg2 forUUID:(id)arg3;
- (void)notifyCacheClientOfTimeRelativeResponses:(id)arg1;
- (void)_reconnectWithStorageServer;
- (_Bool)ensureNetworkStorageDaemonConnection;

@end
