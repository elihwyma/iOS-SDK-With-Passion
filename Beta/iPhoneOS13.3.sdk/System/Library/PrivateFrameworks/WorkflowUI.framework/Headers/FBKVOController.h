/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

@interface FBKVOController : NSObject

{
    NSMapTable *_objectInfosMap;
    struct _opaque_pthread_mutex_t _lock;
    id _observer;
}

@property (weak, nonatomic, readonly) id observer;

+ (id)controllerWithObserver:(id)arg1;

- (void)dealloc;
- (id)debugDescription;
- (id)initWithObserver:(id)arg1;
- (id)initWithObserver:(id)arg1 retainObserved:(_Bool)arg2;
- (void)_observe:(id)arg1 info:(id)arg2;
- (void)_unobserve:(id)arg1 info:(id)arg2;
- (void)_unobserve:(id)arg1;
- (void)_unobserveAll;
- (void)observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (void)observe:(id)arg1 keyPaths:(id)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (void)observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 action:(SEL)arg4;
- (void)observe:(id)arg1 keyPaths:(id)arg2 options:(unsigned long long)arg3 action:(SEL)arg4;
- (void)observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)observe:(id)arg1 keyPaths:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)unobserve:(id)arg1 keyPath:(id)arg2;
- (void)unobserve:(id)arg1;
- (void)unobserveAll;

@end
