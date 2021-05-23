/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _HKObserverRecord : NSObject

{
    id _observer;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

@property (weak, nonatomic) id observer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;

- (id)initWithObserver:(id)arg1 clientQueue:(id)arg2;

@end
