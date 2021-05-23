/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardUI/SBAlertItem.h>

@interface SBActivationFailedAlertItem : SBAlertItem

{
    _Bool _showRetryButton;
    _Bool _showSupportNumber;
    long long _slot;
}

- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)performUnlockAction;
- (_Bool)suppressForKeynote;
- (id)initWithFailureCount:(int)arg1 slot:(long long)arg2;

@end
