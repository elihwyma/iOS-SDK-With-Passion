/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class DNDEventBehaviorResolutionService, NSMutableDictionary, NSMutableSet, SBLockScreenManager, SBLockStateAggregator;

@interface SBNCSoundController : NSObject

{
    SBLockScreenManager *_lockScreenManager;
    SBLockStateAggregator *_lockStateAggregator;
    NSMutableDictionary *_playingSounds;
    NSMutableSet *_requestsRequiringExplicitKill;
    DNDEventBehaviorResolutionService *_dndEventBehaviorResolutionService;
}

@property (retain, nonatomic) SBLockScreenManager *lockScreenManager;
@property (retain, nonatomic) SBLockStateAggregator *lockStateAggregator;
@property (retain, nonatomic) NSMutableDictionary *playingSounds;
@property (retain, nonatomic) NSMutableSet *requestsRequiringExplicitKill;
@property (retain, nonatomic) DNDEventBehaviorResolutionService *dndEventBehaviorResolutionService;

- (id)init;
- (void)playSoundForNotificationRequest:(id)arg1 presentingDestination:(id)arg2;
- (void)stopSoundForNotificationRequest:(id)arg1;
- (void)_hardwareButtonPressed:(id)arg1;
- (void)playSoundIfPossibleForNotificationRequest:(id)arg1 presentingDestination:(id)arg2;
- (_Bool)_isDeviceUILocked;
- (void)_lockStateChanged:(id)arg1;
- (_Bool)canPlaySoundForNotificationRequest:(id)arg1;
- (void)_killSounds;
- (id)initWithLockScreenManager:(id)arg1 lockStateAggregator:(id)arg2;

@end
