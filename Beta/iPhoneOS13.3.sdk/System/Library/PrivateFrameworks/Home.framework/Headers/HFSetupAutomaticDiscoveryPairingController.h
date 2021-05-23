/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFDiscoveredAccessory, HFSetupAccessoryResult, HFSetupPairingContext, HMAccessorySetupCompletedInfo, HMHome, NAFuture, NSDate, NSHashTable, NSSet, NSString, NSTimer;

@interface HFSetupAutomaticDiscoveryPairingController : NSObject

{
    HFSetupPairingContext *_context;
    HFSetupAccessoryResult *_setupResult;
    HMAccessorySetupCompletedInfo *_completedInfo;
    unsigned long long _phase;
    NSString *_statusTitle;
    NSString *_statusDescription;
    HMHome *_home;
    HFDiscoveredAccessory *_discoveredAccessoryToPair;
    NSSet *_pairedAccessories;
    NSHashTable *_pairingObservers;
    NAFuture *_pairingFuture;
    NSDate *_phaseStartDate;
    NSTimer *_accessoryNotFoundFatalTimeoutTimer;
    NSTimer *_accessoryNotFoundSoftTimeoutTimer;
}

@property (nonatomic) unsigned long long phase;
@property (retain, nonatomic) NSString *statusTitle;
@property (retain, nonatomic) NSString *statusDescription;
@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) HFDiscoveredAccessory *discoveredAccessoryToPair;
@property (retain, nonatomic) NSSet *pairedAccessories;
@property (retain, nonatomic) NSHashTable *pairingObservers;
@property (retain, nonatomic) NAFuture *pairingFuture;
@property (retain, nonatomic) NSDate *phaseStartDate;
@property (retain, nonatomic) NSTimer *accessoryNotFoundFatalTimeoutTimer;
@property (retain, nonatomic) NSTimer *accessoryNotFoundSoftTimeoutTimer;
@property (retain, nonatomic) HMAccessorySetupCompletedInfo *completedInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) HFSetupPairingContext *context;
@property (retain, nonatomic) HFSetupAccessoryResult *setupResult;

+ (_Bool)supportsSetupPayloadRetry;

- (void)dealloc;
- (id)cancel;
- (id)initWithContext:(id)arg1;
- (void)_assertValidTransitionFromPhase:(unsigned long long)arg1 toPhase:(unsigned long long)arg2;
- (void)_updateStatusTextAndNotifyDelegate:(_Bool)arg1;
- (void)addPairingObserver:(id)arg1;
- (void)removePairingObserver:(id)arg1;
- (void)startWithHome:(id)arg1;
- (id)_sendCancellationRequestToHomeKit;
- (void)_failPairingWithError:(id)arg1;
- (void)_finishPairingWithAccessories:(id)arg1 completedInfo:(id)arg2;

@end
