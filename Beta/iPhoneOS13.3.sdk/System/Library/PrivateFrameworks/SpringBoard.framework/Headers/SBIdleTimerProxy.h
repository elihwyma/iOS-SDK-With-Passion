/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBIdleTimerBase.h>

@class NSString;

@protocol SBIdleTimer;

@interface SBIdleTimerProxy : SBIdleTimerBase

{
    id <SBIdleTimer> _sourceTimer;
}

@property (retain, nonatomic) id <SBIdleTimer> sourceTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)disabledIdleTimerProxy;

- (void)reset;
- (_Bool)isDisabled;
- (void)setActivated:(_Bool)arg1;
- (_Bool)isActivated;
- (id)initWithIdleTimerSource:(id)arg1;
- (void)idleTimerDidRefresh:(id)arg1;
- (void)idleTimerDidExpire:(id)arg1;
- (void)idleTimerDidResetForUserAttention:(id)arg1;
- (void)idleTimerDidWarn:(id)arg1;
- (void)_logExpirationTimeout:(double)arg1;

@end
