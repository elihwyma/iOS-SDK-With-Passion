/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _CATOperationTargetSelectorObserver : NSObject

{
    id _target;
    SEL _selector;
    unsigned long long _events;
    id _userInfo;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property (nonatomic, readonly) id target;
@property (nonatomic, readonly) SEL selector;
@property (nonatomic, readonly) unsigned long long events;
@property (nonatomic, readonly) id userInfo;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)operationDidFinish:(id)arg1;
- (void)operationDidStart:(id)arg1;
- (void)operationDidProgress:(id)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 events:(unsigned long long)arg3 userInfo:(id)arg4 delegateQueue:(id)arg5;
- (void)invokeActionWithOperation:(id)arg1;

@end
