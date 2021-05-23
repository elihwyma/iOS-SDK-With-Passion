/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface _PASKVOHandler : NSObject

{
    struct _opaque_pthread_mutex_t _lock;
    NSMutableArray *_tasks;
}

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)reactAfterChangesToKeyPath:(id)arg1 ofObject:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)reactAsynchronouslyAfterChangesToKeyPath:(id)arg1 ofObject:(id)arg2 usingBlock:(CDUnknownBlockType)arg3 onQueue:(id)arg4;
- (void)reactBeforeAndAfterChangesToKeyPath:(id)arg1 ofObject:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_watchKeyPath:(id)arg1 ofObject:(id)arg2 options:(unsigned long long)arg3 usingTask:(id)arg4;

@end
