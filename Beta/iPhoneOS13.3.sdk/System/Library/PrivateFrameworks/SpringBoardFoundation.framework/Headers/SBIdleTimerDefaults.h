/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBIdleTimerDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, readonly) double minimumLockscreenIdleTime;
@property (nonatomic, readonly) _Bool disableAutoDim;
@property (nonatomic, readonly) _Bool dontDimOrLockWhileConnectedToPower;
@property (nonatomic, readonly) _Bool supportLiftToWake;
@property (nonatomic, readonly) _Bool supportTapToWake;
@property (nonatomic, readonly) _Bool disableAttentionAwareness;
@property (nonatomic, readonly, getter=isBacklightLoggingEnabled) _Bool backlightLoggingEnabled;

- (void)_bindAndRegisterDefaults;
- (_Bool)disableAutoDimExists;

@end
