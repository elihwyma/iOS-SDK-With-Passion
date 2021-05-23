/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKDClientContext, CKDKeyValueDiskCache;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDPublicIdentityLookupService : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    CKDClientContext *_context;
    CKDKeyValueDiskCache *_cache;
}

@property (retain, nonatomic) CKDKeyValueDiskCache *cache;
@property (weak, nonatomic) CKDClientContext *context;

- (id)initWithClientContext:(id)arg1;
- (void)removeCacheForLookupInfos:(id)arg1;
- (void)scheduleRequest:(id)arg1 forOperation:(id)arg2;
- (void)configureRequest:(id)arg1 parentOperation:(id)arg2;

@end
