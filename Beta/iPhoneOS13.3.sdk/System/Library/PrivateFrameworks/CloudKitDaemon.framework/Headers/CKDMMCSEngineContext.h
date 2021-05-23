/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKDMMCS, NSMutableIndexSet, NSRunLoop, NSString;

@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface CKDMMCSEngineContext : NSObject

{
    _Bool _stopMMCSThread;
    unsigned int _maxChunkCountForSection;
    long long _refCount;
    long long _state;
    CKDMMCS *_MMCS;
    struct _mmcs_engine *_MMCSEngine;
    NSString *_applicationBundleID;
    NSString *_path;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSRunLoop *_runLoop;
    NSString *_runLoopMode;
    NSMutableIndexSet *_inMemoryItemsIDs;
}

@property (nonatomic) long long refCount;
@property (nonatomic) long long state;
@property (nonatomic) _Bool stopMMCSThread;
@property (weak, nonatomic) CKDMMCS *MMCS;
@property (nonatomic) struct _mmcs_engine *MMCSEngine;
@property (retain, nonatomic) NSString *applicationBundleID;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) NSRunLoop *runLoop;
@property (retain, nonatomic) NSString *runLoopMode;
@property (nonatomic) unsigned int maxChunkCountForSection;
@property (retain, nonatomic) NSMutableIndexSet *inMemoryItemsIDs;

+ (id)_appID;
+ (id)sharedContextsQueue;
+ (_Bool)tearDownMMCSEngineWithContext:(id)arg1;
+ (_Bool)hasCachedCKDMMCSEngineContextForPath:(id)arg1;
+ (id)setupMMCSEngineWithApplicationBundleID:(id)arg1 path:(id)arg2 wasCached:(_Bool *)arg3 error:(id *)arg4;
+ (id)sharedContextsByPath;

- (void)dealloc;
- (id)description;
- (id)CKPropertiesDescription;
- (void)performOnRunLoop:(CDUnknownBlockType)arg1;
- (void)_MMCSTreadAbort;
- (void)_MMCSThread;
- (_Bool)_setupMMCSEngineWithError:(id *)arg1;
- (long long)incRefCount;
- (id)initWithApplicationBundleID:(id)arg1 path:(id)arg2;
- (_Bool)_setupMMCSEngineWithRetryCount:(unsigned long long)arg1 error:(id *)arg2;
- (long long)decRefCount;
- (void)_tearDownMMCSEngine;
- (void)cancelRequestWithContext:(void *)arg1;
- (unsigned long long)nextAvailableItemID;
- (void)stopTrackingItemID:(unsigned long long)arg1;

@end
