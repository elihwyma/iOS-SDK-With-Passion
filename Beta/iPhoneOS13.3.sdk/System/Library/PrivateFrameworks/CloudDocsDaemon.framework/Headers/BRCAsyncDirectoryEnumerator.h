/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCRelativePath;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCAsyncDirectoryEnumerator : NSObject

{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_targetQueue;
    long long _batchSize;
    _Bool _isRecursive;
    int _error;
    BRCRelativePath *_rootPath;
}

@property (nonatomic, readonly) BRCRelativePath *rootPath;

- (void)dealloc;
- (id)initForEnumeratingBelow:(id)arg1 recursive:(_Bool)arg2 batchSize:(long long)arg3 targetQueue:(id)arg4;
- (void)scheduleWithProcessBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;

@end
