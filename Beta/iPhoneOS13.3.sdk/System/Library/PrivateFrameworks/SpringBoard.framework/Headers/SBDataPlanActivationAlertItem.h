/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBDataPlanAccountAlertItem.h>

@interface SBDataPlanActivationAlertItem : SBDataPlanAccountAlertItem

{
    _Bool _newAccount;
    _Bool _promptToDisable;
}

@property (nonatomic, getter=isNewAccount) _Bool newAccount;

- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)notNow;
- (id)initWithAccountURL:(id)arg1 newAccount:(_Bool)arg2 promptToDisable:(_Bool)arg3;

@end
