/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@protocol HDContentProtectionObserver, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _HDContentProtectionObserverWrapper : NSObject

{
    id <HDContentProtectionObserver> _observer;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic, readonly) id <HDContentProtectionObserver> observer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (id)initWithObserver:(id)arg1 queue:(id)arg2;

@end
