/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardUI/SBAlertItem.h>

@class FBSApplicationInfo;

@interface SBFairPlayFamilyLeaveAlertItem : SBAlertItem

{
    FBSApplicationInfo *_appInfo;
}

@property (retain, nonatomic) FBSApplicationInfo *appInfo;

- (_Bool)dismissOnLock;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithAppInfo:(id)arg1;

@end
