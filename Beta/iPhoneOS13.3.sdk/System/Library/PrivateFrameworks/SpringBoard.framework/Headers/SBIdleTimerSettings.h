/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <PrototypeTools/PTSettings.h>

@interface SBIdleTimerSettings : PTSettings

{
    _Bool _disableIdleTimer;
}

@property (nonatomic) _Bool disableIdleTimer;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
