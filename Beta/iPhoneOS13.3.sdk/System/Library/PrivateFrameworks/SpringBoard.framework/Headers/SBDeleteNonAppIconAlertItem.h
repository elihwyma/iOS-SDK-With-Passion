/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardUI/SBAlertItem.h>

@class NSString, SBIcon;

@interface SBDeleteNonAppIconAlertItem : SBAlertItem

{
    SBIcon *_icon;
    NSString *_iconLocation;
}

- (_Bool)dismissOnLock;
- (id)icon;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (_Bool)shouldShowInLockScreen;
- (void)didActivate;
- (id)initWithIcon:(id)arg1 location:(id)arg2;

@end
