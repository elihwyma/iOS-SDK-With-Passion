/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFDiscoveredAccessory, HFSetupAccessoryResult, HFSetupPairingContext, HMAccessorySetupCompletedInfo, HMHome, NAFuture, NSDate, NSHashTable, NSSet, NSString;

@interface HFSetupSingleAccessoryPairingController : NSObject

{
    _Bool _accessoryRequiresCode;
    HFSetupPairingContext *_context;
    HFSetupAccessoryResult *_setupResult;
    HMAccessorySetupCompletedInfo *_completedInfo;
    HFDiscoveredAccessory *_discoveredAccessoryToPair;
    unsigned long long _phase;
    NSString *_statusTitle;
    NSString *_statusDescription;
    HMHome *_home;
    NSSet *_pairedAccessories;
    NSHashTable *_pairingObservers;
    NAFuture *_pairingFuture;
    NSDate *_phaseStartDate;
}

@property (nonatomic) unsigned long long phase;
@property (retain, nonatomic) NSString *statusTitle;
@property (retain, nonatomic) NSString *statusDescription;
@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) NSSet *pairedAccessories;
@property (retain, nonatomic) NSHashTable *pairingObservers;
@property (retain, nonatomic) NAFuture *pairingFuture;
@property (retain, nonatomic) NSDate *phaseStartDate;
@property (nonatomic) _Bool accessoryRequiresCode;
@property (nonatomic, readonly) HFDiscoveredAccessory *discoveredAccessoryToPair;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) HFSetupPairingContext *context;
@property (retain, nonatomic) HFSetupAccessoryResult *setupResult;
@property (nonatomic, readonly) HMAccessorySetupCompletedInfo *completedInfo;

+ (_Bool)supportsSetupPayloadRetry;

- (id)cancel;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)_assertValidTransitionFromPhase:(unsigned long long)arg1 toPhase:(unsigned long long)arg2;
- (void)_updateStatusTextAndNotifyDelegate:(_Bool)arg1;
- (void)_tryPairing;
- (void)_failPairingWithDiscoveredAccessory:(id)arg1 error:(id)arg2;
- (void)_finishPairingWithDiscoveredAccessory:(id)arg1;
- (void)addPairingObserver:(id)arg1;
- (void)removePairingObserver:(id)arg1;
- (void)startWithHome:(id)arg1;
- (id)initWithContext:(id)arg1 discoveredAccessory:(id)arg2;

@end
