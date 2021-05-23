/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class EFObservable;

@protocol EFObserver, OS_dispatch_queue;

@interface MFLockStateMonitor : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    int _token;
    EFObservable<EFObserver> *_observable;
    _Bool _isLocked;
}

@property (nonatomic, readonly) EFObservable *lockStateObservable;
@property (readonly, getter=isLocked) _Bool locked;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_receiveLockState:(_Bool)arg1;

@end
