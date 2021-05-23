/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <Foundation/NSThread.h>

@interface NSThread (SCRCThread)

- (_Bool)shouldStop;
- (void)registerForStopNotification;
- (void)unregisterForStopNotification;

@end
