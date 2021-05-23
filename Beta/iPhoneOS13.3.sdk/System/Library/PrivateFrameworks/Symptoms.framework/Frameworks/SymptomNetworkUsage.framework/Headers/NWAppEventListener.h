/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
 */

#import <Foundation/NSObject.h>

@class BKSApplicationStateMonitor, FBSDisplayLayoutMonitor;

@protocol NWAppStateEventListenerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NWAppEventListener : NSObject

{
    BKSApplicationStateMonitor *appStateMonitor;
    FBSDisplayLayoutMonitor *displayLayoutMonitor;
    NSObject<OS_dispatch_queue> *_queue;
    id <NWAppStateEventListenerDelegate> _appStateDelegate;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id <NWAppStateEventListenerDelegate> appStateDelegate;

- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (void)_handleApplicationNotificationStateChangedForDisplayName:(id)arg1 UUID:(id)arg2 pid:(int)arg3 state:(unsigned int)arg4;
- (void)_applicationStateMonitorInit;

@end
