/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

@class BKSApplicationStateMonitor, NSCountedSet, NSMutableDictionary, NSMutableSet, NSSet;

@protocol FPDProcessMonitorDelegate, OS_dispatch_queue;

@interface FPDProcessMonitor : NSObject

{
    NSObject<OS_dispatch_queue> *_notificationQueue;
    BKSApplicationStateMonitor *_monitor;
    NSMutableDictionary *_bundleIDForPID;
    NSCountedSet *_bundleIDs;
    NSCountedSet *_pids;
    NSMutableSet *_foregroundBundleIDs;
    NSSet *_excludedBundleIDs;
    id <FPDProcessMonitorDelegate> _delegate;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (weak) id <FPDProcessMonitorDelegate> delegate;

- (id)description;
- (void)invalidate;
- (_Bool)isForeground;
- (id)prettyDescription;
- (id)_createAppMonitor;
- (void)process:(int)arg1 didBecomeForeground:(_Bool)arg2;
- (void)_handleAppStateChange:(id)arg1;
- (void)_updateMonitoredBundleIDs;
- (void)_addPIDToObserve:(int)arg1;
- (void)_removePIDToObserve:(int)arg1;
- (id)initWithExcludedBundleIDs:(id)arg1;
- (void)addPIDToObserve:(int)arg1;
- (void)removePIDToObserve:(int)arg1;

@end
