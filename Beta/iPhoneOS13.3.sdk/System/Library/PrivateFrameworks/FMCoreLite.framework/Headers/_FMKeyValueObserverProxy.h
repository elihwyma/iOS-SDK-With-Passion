/*
 Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

#import <FMCoreLite/_FMObserverProxy.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _FMKeyValueObserverProxy : _FMObserverProxy

{
    _Bool _isObserving;
    CDUnknownBlockType _observerBlock;
    id _observedObject;
    NSString *_keyPath;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType observerBlock;
@property (weak, nonatomic, readonly) id observedObject;
@property (copy, nonatomic, readonly) NSString *keyPath;

- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithWeakObserver:(id)arg1 observedObject:(id)arg2 keyPath:(id)arg3 options:(unsigned long long)arg4 observerBlock:(CDUnknownBlockType)arg5;

@end
