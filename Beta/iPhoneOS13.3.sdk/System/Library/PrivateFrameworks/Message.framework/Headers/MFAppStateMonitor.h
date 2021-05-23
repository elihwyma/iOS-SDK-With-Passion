/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class BKSApplicationStateMonitor, EFObservable;

@protocol EFObserver, OS_dispatch_queue;

@interface MFAppStateMonitor : NSObject

{
    unsigned int _appState;
    BKSApplicationStateMonitor *_appStateMonitor;
    NSObject<OS_dispatch_queue> *_queue;
    EFObservable<EFObserver> *_observable;
}

@property (nonatomic, readonly) EFObservable *appStateObservable;
@property (nonatomic, readonly, getter=isForeground) _Bool foreground;

+ (id)sharedInstance;

- (void)dealloc;
- (id)initWithBundleId:(id)arg1;
- (void)_updateApplicationState:(id)arg1 observer:(id)arg2;

@end
