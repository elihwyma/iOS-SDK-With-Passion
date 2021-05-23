/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDFitnessMachineStateTimer;

@protocol HDFitnessMachineStateTimersDelegate, OS_dispatch_queue;

@interface HDFitnessMachineStateTimers : NSObject

{
    id <HDFitnessMachineStateTimersDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    HDFitnessMachineStateTimer *_fieldDetectTimer;
    HDFitnessMachineStateTimer *_tagReadTimer;
    HDFitnessMachineStateTimer *_machineIdentityVerificationTimer;
    HDFitnessMachineStateTimer *_userAcceptanceTimer;
    HDFitnessMachineStateTimer *_waitForMachineStartTimer;
    HDFitnessMachineStateTimer *_pauseTimer;
    HDFitnessMachineStateTimer *_disconnectTimer;
    HDFitnessMachineStateTimer *_retryConnectionTimer;
    HDFitnessMachineStateTimer *_mfaTimer;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) HDFitnessMachineStateTimer *fieldDetectTimer;
@property (retain, nonatomic) HDFitnessMachineStateTimer *tagReadTimer;
@property (retain, nonatomic) HDFitnessMachineStateTimer *machineIdentityVerificationTimer;
@property (retain, nonatomic) HDFitnessMachineStateTimer *userAcceptanceTimer;
@property (retain, nonatomic) HDFitnessMachineStateTimer *waitForMachineStartTimer;
@property (retain, nonatomic) HDFitnessMachineStateTimer *pauseTimer;
@property (retain, nonatomic) HDFitnessMachineStateTimer *disconnectTimer;
@property (retain, nonatomic) HDFitnessMachineStateTimer *retryConnectionTimer;
@property (retain, nonatomic) HDFitnessMachineStateTimer *mfaTimer;
@property (weak, nonatomic) id <HDFitnessMachineStateTimersDelegate> delegate;

- (void)dealloc;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;
- (void)cancelAllTimers;
- (void)beginRetryConnectionTimeout;
- (void)cancelRetryConnectionTimeout;
- (void)cancelWaitForMachineStartTimeout;
- (void)cancelPauseTimeout;
- (void)beginPauseTimeout;
- (void)cancelMfaTimeout;
- (void)beginDisconnectTimeout;
- (void)cancelDisconnectTimeout;
- (_Bool)isDisconnectTimerValid;
- (_Bool)isRetryConnectionTimerValid;
- (void)beginMfaTimeout;
- (void)beginWaitForMachineStartTimeout;
- (void)cancelFieldDetectTimeout;
- (void)cancelTagReadTimeout;
- (void)cancelMachineIdentityVerificationTimeout;
- (void)cancelUserAcceptanceTimeout;
- (void)beginFieldDetectTimeout;
- (_Bool)isFieldDetectTimerValid;
- (void)beginTagReadTimeout;
- (_Bool)isTagReadTimerValid;
- (void)beginMachineIdentityVerificationTimeout;
- (_Bool)isMachineIdentityVerificationTimerValid;
- (void)beginUserAcceptanceTimeout;
- (_Bool)isUserAcceptanceTimerValid;
- (_Bool)isWaitForMachineStartTimerValid;
- (_Bool)isPauseTimerValid;
- (_Bool)isMfaTimerValid;

@end
