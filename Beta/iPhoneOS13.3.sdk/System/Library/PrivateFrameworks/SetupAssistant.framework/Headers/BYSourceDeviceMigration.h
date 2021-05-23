/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <SetupAssistant/BYDeviceMigrationManager.h>

@interface BYSourceDeviceMigration : BYDeviceMigrationManager

+ (id)createDeviceTransferTask:(id)arg1;

- (void)startDeviceTransferTask;
- (void)cancelDeviceTransferTask;
- (_Bool)requiresProcessAssertion;
- (id)sourceDeviceTransferTask;
- (void)updateFileTransferSession:(id)arg1;

@end
