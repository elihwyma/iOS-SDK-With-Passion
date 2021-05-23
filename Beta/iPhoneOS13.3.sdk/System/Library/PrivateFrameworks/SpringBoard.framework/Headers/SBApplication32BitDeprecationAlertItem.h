/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardUI/SBAlertItem.h>

@class SBApplication;

@interface SBApplication32BitDeprecationAlertItem : SBAlertItem

{
    SBApplication *_associatedDisplay;
}

@property (weak, nonatomic) SBApplication *associatedDisplay;

- (id)_title;
- (_Bool)dismissOnLock;
- (id)_message;
- (id)initWithApplication:(id)arg1;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;

@end
