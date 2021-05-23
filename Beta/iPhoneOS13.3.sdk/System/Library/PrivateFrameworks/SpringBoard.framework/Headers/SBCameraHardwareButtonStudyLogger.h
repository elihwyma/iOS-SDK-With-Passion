/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class BKSApplicationStateMonitor, SLGNotificationActivatedLogger;

@interface SBCameraHardwareButtonStudyLogger : NSObject

{
    BKSApplicationStateMonitor *_processMonitor;
    SLGNotificationActivatedLogger *_logger;
}

- (id)init;
- (void)dealloc;
- (void)logButtonEvent:(struct __IOHIDEvent *)arg1;
- (void)logPocketState:(long long)arg1;
- (void)_startProcessMonitor;
- (void)_stopProcessMonitor;

@end
