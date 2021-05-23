/*
 Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

#import <Foundation/NSObject.h>

@class NSString, PLAccountingCorrectionManager, PLAccountingDistributionManager, PLAccountingQualificationManager, PLActivity, PLEntryNotificationOperatorComposition;

@protocol OS_dispatch_queue;

@interface PLAccountingEngine : NSObject

{
    _Bool _pluggedIn;
    NSObject<OS_dispatch_queue> *_workQueue;
    PLActivity *_chunkActivity;
    PLEntryNotificationOperatorComposition *_batteryListener;
    PLAccountingDistributionManager *_distributionManager;
    PLAccountingCorrectionManager *_correctionManager;
    PLAccountingQualificationManager *_qualificationManager;
}

@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) PLActivity *chunkActivity;
@property (retain) PLEntryNotificationOperatorComposition *batteryListener;
@property _Bool pluggedIn;
@property (retain, nonatomic) PLAccountingDistributionManager *distributionManager;
@property (retain, nonatomic) PLAccountingCorrectionManager *correctionManager;
@property (retain, nonatomic) PLAccountingQualificationManager *qualificationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)workQueue;
+ (id)debugInstance;
+ (id)deviceRootNodeIDs;
+ (id)allQualificationIDs;
+ (double)maxPowerEventChunkInterval;
+ (id)allDistributionIDs;
+ (double)minEnergy;
+ (_Bool)accountingDebugEnabled;
+ (void)clearWithEntryKey:(id)arg1;
+ (id)gasGaugeEntryKey;
+ (id)allSoCRootNodeIDs;
+ (id)deviceSoCRootNodeIDs;
+ (id)allBBRootNodeIDs;
+ (id)deviceBBRootNodeIDs;
+ (id)normalizeWeights:(id)arg1;
+ (id)distributionIDForDistributionName:(id)arg1;
+ (id)qualificationIDForQualificationName:(id)arg1;

- (id)init;
- (void)reset;
- (void)reload;
- (void)createPowerEventForwardWithRootNodeID:(int)arg1 withPower:(double)arg2 withStartDate:(id)arg3;
- (void)createDistributionEventForwardWithDistributionID:(int)arg1 withChildNodeNameToWeight:(id)arg2 withStartDate:(id)arg3;
- (void)createQualificationEventForwardWithQualificationID:(int)arg1 withChildNodeNames:(id)arg2 withStartDate:(id)arg3;
- (void)createDistributionEventIntervalWithDistributionID:(int)arg1 withChildNodeNameToWeight:(id)arg2 withStartDate:(id)arg3 withEndDate:(id)arg4;
- (void)createPowerEventBackwardWithRootNodeID:(int)arg1 withPower:(double)arg2 withEndDate:(id)arg3;
- (void)createPowerEventIntervalWithRootNodeID:(int)arg1 withPower:(double)arg2 withStartDate:(id)arg3 withEndDate:(id)arg4;
- (void)createQualificationEventIntervalWithQualificationID:(int)arg1 withChildNodeNames:(id)arg2 withStartDate:(id)arg3 withEndDate:(id)arg4;
- (void)createDistributionEventForwardWithDistributionID:(int)arg1 withAddingChildNodeName:(id)arg2 withStartDate:(id)arg3;
- (void)createDistributionEventForwardWithDistributionID:(int)arg1 withRemovingChildNodeName:(id)arg2 withStartDate:(id)arg3;
- (void)createDistributionEventBackwardWithDistributionID:(int)arg1 withChildNodeNameToWeight:(id)arg2 withEndDate:(id)arg3;
- (void)createDistributionEventPointWithDistributionID:(int)arg1 withChildNodeNameToWeight:(id)arg2 withStartDate:(id)arg3;
- (void)addPowerMeasurementEventIntervalWithPower:(double)arg1 withStartDate:(id)arg2 withEndDate:(id)arg3;
- (void)createQualificationEventBackwardWithQualificationID:(int)arg1 withChildNodeNames:(id)arg2 withEndDate:(id)arg3;
- (void)createQualificationEventPointWithQualificationID:(int)arg1 withChildNodeNames:(id)arg2 withStartDate:(id)arg3;
- (id)currentDistributionEventForwardWithDistributionID:(int)arg1;
- (void)createQualificationEventForwardWithQualificationID:(int)arg1 withAddingChildNodeName:(id)arg2 withStartDate:(id)arg3;
- (void)createQualificationEventForwardWithQualificationID:(int)arg1 withRemovingChildNodeName:(id)arg2 withStartDate:(id)arg3;
- (void)didQualifyEnergyEvent:(id)arg1 withRootNodeID:(id)arg2 withQualificationID:(id)arg3;
- (void)addQualificationEventIntervalWithLastQualificationEventForward:(id)arg1 withQualificationEventForward:(id)arg2;
- (void)addQualificationEventIntervalWithLastQualificationEventBackward:(id)arg1 withQualificationEventBackward:(id)arg2;
- (void)addQualificationEventInterval:(id)arg1;
- (void)addQualificationEventPoint:(id)arg1;
- (void)didCorrectEnergyEstimate:(id)arg1;
- (void)didDistributeEnergyEstimate:(id)arg1;
- (void)addDistributionEventIntervalWithLastDistributionEventForward:(id)arg1 withDistributionEventForward:(id)arg2;
- (void)addDistributionEventIntervalWithLastDistributionEventBackward:(id)arg1 withDistributionEventBackward:(id)arg2;
- (void)addDistributionEventInterval:(id)arg1;
- (void)addDistributionEventPoint:(id)arg1;
- (void)didCreateChildEnergyEstimate:(id)arg1 withParentEnergyEstimate:(id)arg2;
- (void)chunkWithLastChunkDate:(id)arg1 withNow:(id)arg2;
- (void)createEventWithEvent:(id)arg1 withActionBlock:(CDUnknownBlockType)arg2;
- (void)addEnergyMeasurementWithRootNodeID:(int)arg1 withEnergy:(double)arg2 withRange:(id)arg3;
- (void)createAggregateRootNodeEnergyEntryWithEnergyEstimate:(id)arg1;
- (void)reloadLastPowerEventsWithLastDeviceBootDate:(id)arg1;
- (void)reloadLastDistributionEventsWithLastDeviceBootDate:(id)arg1;
- (void)reloadLastQualificationEventsWithLastDeviceBootDate:(id)arg1;

@end
