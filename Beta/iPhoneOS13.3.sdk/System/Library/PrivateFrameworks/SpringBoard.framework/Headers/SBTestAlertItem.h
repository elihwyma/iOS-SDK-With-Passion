/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface SBTestAlertItem : SBAlertItem

{
    _Bool _shouldShowInLockScreen;
    _Bool _forcesModalAlertAppearance;
    _Bool _behavesSuperModally;
    _Bool _allowMenuButtonDismissal;
    _Bool _allowLockScreenDismissal;
    _Bool _reappearsAfterUnlock;
    _Bool _reappearsAfterLock;
    NSString *_title;
}

@property (copy, nonatomic) NSString *title;
@property (nonatomic) _Bool shouldShowInLockScreen;
@property (nonatomic) _Bool forcesModalAlertAppearance;
@property (nonatomic) _Bool behavesSuperModally;
@property (nonatomic) _Bool allowMenuButtonDismissal;
@property (nonatomic) _Bool allowLockScreenDismissal;
@property (nonatomic) _Bool reappearsAfterUnlock;
@property (nonatomic) _Bool reappearsAfterLock;

+ (id)alertItemWithShowInLockScreen:(_Bool)arg1 forcesModal:(_Bool)arg2 superModal:(_Bool)arg3;

- (id)description;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;

@end
