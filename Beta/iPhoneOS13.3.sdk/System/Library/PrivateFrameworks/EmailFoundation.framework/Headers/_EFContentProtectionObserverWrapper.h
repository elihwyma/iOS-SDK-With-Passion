/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@protocol EFContentProtectionObserver, OS_dispatch_queue;

@interface _EFContentProtectionObserverWrapper : NSObject

{
    id <EFContentProtectionObserver> _observer;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic, readonly) id <EFContentProtectionObserver> observer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (id)initWithObserver:(id)arg1 queue:(id)arg2;

@end
