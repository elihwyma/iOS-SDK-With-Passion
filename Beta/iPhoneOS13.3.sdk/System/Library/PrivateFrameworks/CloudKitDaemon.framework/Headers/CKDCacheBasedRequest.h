/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKDKeyValueDiskCache, CKDOperation, CKDPublicIdentityLookupService;

__attribute__((visibility("hidden")))
@interface CKDCacheBasedRequest : NSObject

{
    _Bool _isCancelled;
    CKDOperation *_operation;
    CKDKeyValueDiskCache *_cache;
    CKDPublicIdentityLookupService *_lookupService;
    unsigned long long _fetchBatchSize;
}

@property (nonatomic) _Bool isCancelled;
@property (weak, nonatomic) CKDOperation *operation;
@property (weak, nonatomic) CKDKeyValueDiskCache *cache;
@property (weak, nonatomic) CKDPublicIdentityLookupService *lookupService;
@property (nonatomic) unsigned long long fetchBatchSize;

- (id)init;
- (void)cancel;
- (void)finishWithError:(id)arg1;
- (void)performRequest;
- (id)spawnURLRequests;

@end
