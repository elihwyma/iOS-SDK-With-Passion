/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardUI/SBAlertItem.h>

@interface SBIPhotoLaunchDeniedAlertItem : SBAlertItem

{
    _Bool _offersMigration;
}

@property (nonatomic) _Bool offersMigration;

- (_Bool)dismissOnLock;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (_Bool)ignoreIfAlreadyDisplaying;

@end
