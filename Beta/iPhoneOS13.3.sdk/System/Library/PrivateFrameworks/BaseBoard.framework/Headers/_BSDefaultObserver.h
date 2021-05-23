/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class BSAbstractDefaultDomain, NSArray, NSString;

@protocol OS_dispatch_queue;

@interface _BSDefaultObserver : NSObject

{
    BSAbstractDefaultDomain *_defaults;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_defaultsToObserve;
    CDUnknownBlockType _fireBlock;
    _Bool _invalidated;
    _Atomic unsigned int _debounceCounter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithAbstractDefaultDomain:(id)arg1 defaultsToObserve:(id)arg2 onQueue:(id)arg3 withBlock:(CDUnknownBlockType)arg4;

@end
