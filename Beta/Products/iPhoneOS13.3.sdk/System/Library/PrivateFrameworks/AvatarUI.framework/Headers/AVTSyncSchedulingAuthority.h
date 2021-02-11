/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTSyncSchedulingAuthority : NSObject <AVTSyncSchedulingAuthority> {
    <AVTUILogger> * _logger;
}

@property (nonatomic, readonly) <AVTUILogger> *logger;

- (void).cxx_destruct;
- (void)didReceivePushNotification;
- (void)didResetSync;
- (void)exportDidCompleteSuccessfully;
- (bool)exportRequired;
- (void)importDidCompleteSuccessfully;
- (bool)importRequired;
- (id)initWithLogger:(id)arg1;
- (id)logger;
- (void)madeLocalChanges;

@end