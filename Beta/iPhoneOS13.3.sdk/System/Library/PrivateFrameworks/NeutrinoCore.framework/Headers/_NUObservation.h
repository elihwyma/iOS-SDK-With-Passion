/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface _NUObservation : NSObject

{
    id _observer;
    long long _key;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _block;
}

@property (weak, nonatomic, readonly) id observer;
@property (nonatomic, readonly) long long key;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) CDUnknownBlockType block;

- (id)init;
- (id)initWithObserver:(id)arg1 key:(long long)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)notifyWithBlock:(CDUnknownBlockType)arg1;

@end
