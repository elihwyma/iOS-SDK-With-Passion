/*
 Image: /System/Library/PrivateFrameworks/Cards.framework/Cards
 */

#import <NSObject.h>

@class NSPointerArray;

@protocol CRInvocationChainDelegate, OS_dispatch_queue;

@interface CRInvocationChain : NSObject

{
    NSObject<OS_dispatch_queue> *_chainedObjectsAccessQueue;
    id <CRInvocationChainDelegate> _delegate;
    NSPointerArray *_chainedObjects;
}

@property (retain, nonatomic, getter=_chainedObjects, setter=_setChainedObjects:) NSPointerArray *chainedObjects;
@property (weak, nonatomic) id <CRInvocationChainDelegate> delegate;

- (id)init;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)_methodSignatureForSelector:(SEL)arg1;
- (void)addChainedObject:(id)arg1;
- (void)_forwardInvocation:(id)arg1;
- (void)_accessChainedObjectsSafely:(CDUnknownBlockType)arg1;
- (_Bool)_respondsToSelector:(SEL)arg1;
- (void)_addChainedObject:(id)arg1;
- (void)_enumerateChainedObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)_isEligibleForSelector:(SEL)arg1;
- (void)enumerateChainedObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)isEligibleForSelector:(SEL)arg1;

@end
