/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface SBPhoneAlertItem : SBAlertItem

{
    NSString *_bodyText;
    NSString *_title;
    long long _slot;
}

@property (nonatomic, readonly) long long slot;

- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithTitle:(id)arg1 bodyText:(id)arg2 slot:(long long)arg3;

@end
