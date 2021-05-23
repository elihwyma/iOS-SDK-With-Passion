/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/Swift-Protocol.h>

@class HFDiscoveredAccessory, HFSetupAccessoryResult, HFSetupPairingContext, HMAccessorySetupCompletedInfo, HMHome, NSString;

@protocol HFSetupPairingController <Swift>

@property (nonatomic, readonly) HFSetupPairingContext *context;
@property (retain, nonatomic) HFSetupAccessoryResult *setupResult;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) unsigned long long phase;
@property (nonatomic, readonly) NSString *statusTitle;
@property (nonatomic, readonly) NSString *statusDescription;
@property (nonatomic, readonly) HFDiscoveredAccessory *discoveredAccessoryToPair;
@property (nonatomic, readonly) HMAccessorySetupCompletedInfo *completedInfo;

+ (unsigned short)supportsSetupPayloadRetry;

- (unsigned short)cancel;
- (unsigned short)pairedAccessories;
- (unsigned short)addPairingObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)removePairingObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)startWithHome: /* Error: Ran out of types for this method. */;

@end
