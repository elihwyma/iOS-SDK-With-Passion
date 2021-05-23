/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class REMXPCDaemonController;

@interface REMSyncInterface : NSObject

{
    REMXPCDaemonController *_daemonController;
}

@property (retain, nonatomic) REMXPCDaemonController *daemonController;

- (id)init;
- (id)initWithDaemonController:(id)arg1;
- (void)syncCloudKitWithReason:(id)arg1 discretionary:(_Bool)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)restartCloudKitSyncWithReason:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
