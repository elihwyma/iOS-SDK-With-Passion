/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

#import <SetupAssistantUI/BFFTimeRemainingController.h>

@class MBDeviceTransferConnectionInfo, MBDeviceTransferProgress, NSDateComponentsFormatter, NSString;

@interface BFFMigrationTimeRemainingController : BFFTimeRemainingController

{
    NSString *_internalProgressText;
    NSDateComponentsFormatter *_elapsedDurationFormatter;
    MBDeviceTransferConnectionInfo *_connectionInfo;
    MBDeviceTransferProgress *_migrationProgress;
}

@property (retain, nonatomic) NSDateComponentsFormatter *elapsedDurationFormatter;
@property (retain, nonatomic) MBDeviceTransferConnectionInfo *connectionInfo;
@property (retain, nonatomic) MBDeviceTransferProgress *migrationProgress;
@property (retain) NSString *internalProgressText;

- (id)initWithTitle:(id)arg1;
- (id)timeRemainingString:(double)arg1;
- (void)updateProgressSubtext;
- (void)setDeviceConnectionInformation:(id)arg1;
- (void)setDeviceTransferProgress:(id)arg1;

@end
