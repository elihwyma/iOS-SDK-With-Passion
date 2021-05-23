/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface SBDismissOnlyAlertItem : SBAlertItem

{
    NSString *_title;
    NSString *_body;
}

- (id)title;
- (void)setTitle:(id)arg1;
- (void)setBodyText:(id)arg1;
- (id)bodyText;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)performUnlockAction;
- (_Bool)suppressForKeynote;
- (id)initWithTitle:(id)arg1 body:(id)arg2;
- (id)dismissButtonText;

@end
