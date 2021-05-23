/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBDeviceUnlockAggdLogger : NSObject

{
    _Bool _observeDashBoardEvents;
}

@property (nonatomic, getter=_observeDashBoardEvents, setter=_setObserveDashBoardEvents:) _Bool observeDashBoardEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *coverSheetIdentifier;
@property (nonatomic, readonly) long long participantState;

- (id)init;
- (void)dealloc;
- (_Bool)handleEvent:(id)arg1;
- (_Bool)wouldHandleButtonEvent:(id)arg1;
- (void)logOrientationAndAccessoryStateForPrefix:(id)arg1;
- (void)logDeviceWake;
- (void)logDeviceUnlock;
- (void)logIdleTimerScreenDimWarning;
- (void)logUserResetIdleTimer;

@end
