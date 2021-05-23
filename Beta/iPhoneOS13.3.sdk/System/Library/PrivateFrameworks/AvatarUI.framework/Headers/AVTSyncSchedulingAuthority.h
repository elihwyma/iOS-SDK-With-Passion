/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@protocol AVTUILogger;

@interface AVTSyncSchedulingAuthority : NSObject

{
    id <AVTUILogger> _logger;
}

@property (nonatomic, readonly) id <AVTUILogger> logger;

- (id)initWithLogger:(id)arg1;
- (_Bool)importRequired;
- (_Bool)exportRequired;
- (void)importDidCompleteSuccessfully;
- (void)exportDidCompleteSuccessfully;
- (void)didReceivePushNotification;
- (void)didResetSync;
- (void)madeLocalChanges;

@end
