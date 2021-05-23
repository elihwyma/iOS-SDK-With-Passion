/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface _LSInstallOperationChoke : NSObject

{
    unsigned long long _numConcurrentOperations;
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_queuedWork;
    unsigned long long _activeInstallers;
    unsigned long long _activeUninstallers;
    NSObject<OS_dispatch_semaphore> *_backpressureSemaphore;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
}

+ (long long)_bufferedRequestSlop;

- (id)initWithWidth:(long long)arg1;
- (void)performOperationForBundleIdentifier:(id)arg1 installType:(long long)arg2 block:(CDUnknownBlockType)arg3;
- (id)availableOperationOfType:(long long)arg1;
- (void)enqueueInstallationOperation:(id)arg1;
- (_Bool)becomeUninstaller;
- (_Bool)becomeInstaller;
- (id)claimOperationOfType:(long long)arg1;
- (void)retireOperation:(id)arg1;
- (void)retireFromUninstaller;
- (void)retireFromInstaller;

@end
