/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBIdleTimerBase.h>

@interface SBDisabledIdleTimer : SBIdleTimerBase

{
    _Bool _activated;
}

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reset;
- (_Bool)isDisabled;
- (void)setActivated:(_Bool)arg1;
- (_Bool)isActivated;

@end
