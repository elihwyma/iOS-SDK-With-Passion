/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardUI/SBAlertItem.h>

@interface SBLongPressDisambiguationAlertItem : SBAlertItem

{
    long long _result;
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType completion;

- (id)init;
- (_Bool)dismissOnLock;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)deactivateForButton;
- (_Bool)ignoreIfAlreadyDisplaying;

@end
