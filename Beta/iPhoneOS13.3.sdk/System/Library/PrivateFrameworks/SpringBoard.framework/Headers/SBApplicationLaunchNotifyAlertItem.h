/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardUI/SBAlertItem.h>

@class SBApplication;

@interface SBApplicationLaunchNotifyAlertItem : SBAlertItem

{
    SBApplication *_application;
}

@property (nonatomic, readonly) SBApplication *application;

- (_Bool)dismissOnLock;
- (id)initWithApplication:(id)arg1;

@end
