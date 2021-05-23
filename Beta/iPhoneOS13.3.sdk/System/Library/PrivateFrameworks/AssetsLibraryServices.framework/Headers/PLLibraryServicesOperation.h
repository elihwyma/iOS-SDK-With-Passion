/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSBlockOperation.h>

@class NSProgress;

@interface PLLibraryServicesOperation : NSBlockOperation

{
    CDUnknownBlockType _cancellationBlock;
    struct os_unfair_lock_s _cancellationLock;
    _Bool _cancellationBlockCalled;
    long long _requiredState;
    NSProgress *_progress;
    long long _progressPercentOfTotal;
}

@property (nonatomic) long long requiredState;
@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic) long long progressPercentOfTotal;
@property (copy, nonatomic) CDUnknownBlockType cancellationBlock;

+ (id)operationWithName:(id)arg1 requiredState:(long long)arg2 parentProgress:(id)arg3 execution:(CDUnknownBlockType)arg4;
+ (_Bool)shouldSuppressLogging;
+ (void)setShouldSuppressLogging:(_Bool)arg1;

- (id)init;
- (void)dealloc;
- (id)debugDescription;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setExecutionBlockFromOperationBlock:(CDUnknownBlockType)arg1;
- (void)_safeRemoveCancellationObserver;

@end
