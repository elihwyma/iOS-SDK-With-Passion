/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class BSTimer, NSMutableSet, NSString, SBClawGestureLogger, SBMainWorkspace, SBSOSDefaults, SOSManager;

@protocol SBSOSClawGestureObserverDelegate;

@interface SBSOSClawGestureObserver : NSObject <Swift>

{
    SOSManager *_sosManager;
    SBMainWorkspace *_workspace;
    _Bool _sosEnabled;
    _Bool _wasSOSTiggeredByClaw;
    NSMutableSet *_activePressTypes;
    SBClawGestureLogger *_clawGestureLogger;
    id <SBSOSClawGestureObserverDelegate> _delegate;
    SBSOSDefaults *_sosDefaults;
    BSTimer *_sosTriggerTimer;
}

@property (retain, nonatomic) NSMutableSet *activePressTypes;
@property (nonatomic, readonly, getter=_isSOSActivated) _Bool sosActivated;
@property (nonatomic, readonly) SBSOSDefaults *sosDefaults;
@property (retain, nonatomic) BSTimer *sosTriggerTimer;
@property (retain, nonatomic) SBClawGestureLogger *clawGestureLogger;
@property (nonatomic, getter=_wasSOSTriggeredByClaw, setter=_setWasSOSTriggeredByClaw:) _Bool wasSOSTiggeredByClaw;
@property (nonatomic, getter=isGestureLoggingEnabled) _Bool gestureLoggingEnabled;
@property (nonatomic, getter=isSOSEnabled, setter=setSOSEnabled:) _Bool sosEnabled;
@property (weak, nonatomic) id <SBSOSClawGestureObserverDelegate> delegate;
@property (nonatomic, readonly, getter=isClawActivated) _Bool clawActivated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)didUpdateCurrentSOSInitiationState:(long long)arg1;
- (void)handleVolumeIncrease;
- (void)handleVolumeDecrease;
- (id)_initWithSOSManager:(id)arg1 workspace:(id)arg2;
- (void)_presentSOSInterface;
- (void)noteGesturePressType:(long long)arg1 withPressPhase:(long long)arg2;
- (_Bool)_isAutomaticCallCountdownEnabled;

@end
