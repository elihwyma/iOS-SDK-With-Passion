/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface SBCarDoNotDisturbExitConfirmationAlertItem : SBAlertItem

{
    _Bool _showSiriHeaderViewController;
    CDUnknownBlockType _notDrivingActionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType notDrivingActionHandler;
@property (nonatomic) _Bool showSiriHeaderViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (_Bool)shouldShowInLockScreen;
- (_Bool)reappearsAfterUnlock;
- (_Bool)forcesModalAlertAppearance;
- (void)controllerDidProvideContext:(id)arg1;

@end
