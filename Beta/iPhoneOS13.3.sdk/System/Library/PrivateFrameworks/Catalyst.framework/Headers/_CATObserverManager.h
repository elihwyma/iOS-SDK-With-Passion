/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSObject.h>

@class CATOperation, NSMutableSet, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _CATObserverManager : NSObject

{
    NSMutableSet *mObservers;
    int mState;
    NSObject<OS_dispatch_queue> *mQueue;
    NSObject<OS_dispatch_source> *mProgressSource;
    CATOperation *mOperation;
    CATOperation *mStrongOperation;
    _Bool mIsObserving;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)addObserver:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserver:(id)arg1;
- (void)operationDidFinish:(id)arg1;
- (id)initWithOperation:(id)arg1;
- (void)operationDidStart:(id)arg1;
- (void)operationDidProgress:(id)arg1;
- (void)notifyObserversOperationDidProgress:(id)arg1;

@end
