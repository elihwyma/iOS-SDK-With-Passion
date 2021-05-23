/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSOperationQueue, NSRecursiveLock;

__attribute__((visibility("hidden")))
@interface MBAssetLoader : NSObject

{
    unsigned long long _maxConcurrentOperationCount;
    NSArray *_prefetchKeys;
    NSOperationQueue *_operationQueue;
    NSRecursiveLock *_queuedOperationsLock;
    NSMutableArray *_queuedOperations;
}

@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSRecursiveLock *queuedOperationsLock;
@property (retain, nonatomic) NSMutableArray *queuedOperations;
@property unsigned long long maxConcurrentOperationCount;
@property (retain, nonatomic) NSArray *prefetchKeys;

+ (id)sharedLoader;

- (id)init;
- (void)loadAssetsFromURLs:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)suspendOperationQueue:(id)arg1;
- (void)resumeOperationQueue:(id)arg1;
- (void)_loadAssetsFromURLs:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
