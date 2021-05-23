/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class BKSApplicationStateMonitor, NSMutableSet;

@protocol OS_dispatch_queue, PLForegroundMonitorDelegate;

@interface PLForegroundMonitor : NSObject

{
    NSMutableSet *_foregroundBundleIDs;
    NSObject<OS_dispatch_queue> *_applicationStateMonitorQueue;
    BKSApplicationStateMonitor *_applicationStateMonitor;
    id <PLForegroundMonitorDelegate> _delegate;
}

@property (weak, nonatomic) id <PLForegroundMonitorDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)_applicationChangeToFG:(id)arg1;
- (void)_applicationChangeToBG:(id)arg1;
- (void)_locked_applicationDidMoveToForeground:(id)arg1;
- (void)_locked_applicationDidMoveToBackground:(id)arg1;
- (void)_handleApplicationStateMonitorNotificationWithUserInfo:(id)arg1;

@end
