/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface SBPressPrecedenceArbiter : NSObject

{
    unsigned long long _volumeAndLockButtonPriority;
    long long _homeButtonType;
    _Bool _isMusicPlayingSomewhere;
    NSArray *_hardwareButtons;
}

@property (retain, nonatomic) NSArray *hardwareButtons;

- (id)initWithHomeButtonType:(long long)arg1;
- (_Bool)_shouldArbitrateLockAndVolumeHardwareButtonPriorities;
- (void)_initializeButtonPriorities;
- (void)_updateButtonPrioritiesForNotification:(id)arg1;
- (void)_updateButtonPrioritiesForClientIsPlayingNotification:(id)arg1;
- (void)_applyButtonPriority:(unsigned long long)arg1;
- (unsigned long long)_currentButtonPriority;
- (void)_updateButtonPriority;

@end
