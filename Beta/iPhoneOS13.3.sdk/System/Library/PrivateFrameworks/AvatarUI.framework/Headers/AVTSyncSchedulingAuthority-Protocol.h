/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@protocol AVTSyncSchedulingAuthority

- (unsigned short)importRequired;
- (unsigned short)exportRequired;
- (unsigned short)importDidCompleteSuccessfully;
- (unsigned short)exportDidCompleteSuccessfully;
- (unsigned short)didReceivePushNotification;
- (unsigned short)didResetSync;
- (unsigned short)madeLocalChanges;

@end
