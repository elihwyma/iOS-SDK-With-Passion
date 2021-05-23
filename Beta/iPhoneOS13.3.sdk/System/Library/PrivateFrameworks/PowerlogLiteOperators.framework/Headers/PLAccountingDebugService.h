/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLService.h>

@class NSArray;

@interface PLAccountingDebugService : PLService

{
    NSArray *_testNames;
}

@property (retain, nonatomic) NSArray *testNames;

+ (void)load;
+ (void)printError:(id)arg1;

- (id)init;
- (_Bool)verifyLastDistributionEventWithDistributionID:(int)arg1 withNodeName:(id)arg2 withWeight:(double)arg3;
- (_Bool)verifyLastPowerEventWithRootNodeID:(int)arg1 withPower:(double)arg2;
- (_Bool)verifyTotalEnergyWithNodeName:(id)arg1 withTotalEnergy:(double)arg2 withRootNodeID:(int)arg3 withEpsilon:(double)arg4;
- (_Bool)verifyTotalCorrectionEnergyWithNodeName:(id)arg1 withTotalCorrectionEnergy:(double)arg2 withRootNodeID:(int)arg3;
- (_Bool)verifyLastQualificationEventWithQualificationID:(int)arg1 withNodeName:(id)arg2;
- (_Bool)verifyAggregateRootNodeEnergyWithNodeName:(id)arg1 withRootNodeID:(int)arg2 withEnergy:(double)arg3 withDate:(id)arg4;
- (_Bool)verifyAggregateQualificationEnergyWithQualificationID:(int)arg1 withRootNodeID:(int)arg2 withNodeName:(id)arg3 withQualificationEnergy:(double)arg4 withDate:(id)arg5;
- (void)blockingClearQueues;
- (void)testDistribution1;
- (void)testDistribution2;
- (void)testDistribution3;
- (void)testDistribution4;
- (void)testDistribution5;
- (void)testCorrection1;
- (void)testCorrection2;
- (void)testCorrection3;
- (void)testCorrection4;
- (void)testQualification1;
- (void)testQualification2;
- (void)testQualification3;
- (void)testReloadBefore1;
- (void)testReloadAfter1;
- (void)testReloadBefore2;
- (void)testReloadAfter2;
- (void)testChunk;
- (void)testPerformance;
- (void)testShortDistributionEventDuration;
- (void)testShortQualificationEventDuration;
- (void)testAddRemoveDistributionEventForward;
- (void)testCorrectionInMemory;
- (void)testPowerEventIntervalOverlap;
- (void)testCurrentDistributionEventForward;
- (void)blockingLogGasGaugeWithTotalPower:(double)arg1 withStartDate:(id)arg2 withEndDate:(id)arg3;

@end
