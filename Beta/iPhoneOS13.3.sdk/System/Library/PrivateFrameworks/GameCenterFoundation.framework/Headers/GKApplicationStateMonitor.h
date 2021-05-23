/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class BKSApplicationStateMonitor;

@interface GKApplicationStateMonitor : NSObject

{
    BKSApplicationStateMonitor *_applicationStateMonitor;
}

@property (retain, nonatomic) BKSApplicationStateMonitor *applicationStateMonitor;
@property (copy, nonatomic) CDUnknownBlockType handler;

- (id)init;
- (void)dealloc;
- (_Bool)observingStateChangesForBundleID:(id)arg1;
- (void)startObservingStateChangesForBundleID:(id)arg1;

@end
