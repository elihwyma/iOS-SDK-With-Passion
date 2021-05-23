/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NRMutableStateBaseObserverWrapper : NSObject

{
    CDUnknownBlockType _observer;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) CDUnknownBlockType observer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

@end
