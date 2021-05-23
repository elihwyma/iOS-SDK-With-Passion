/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCRedundancyControlAlgorithmVideoMultiway : NSObject

{
    unsigned int _redundancyPercentage;
    double _redundancyInterval;
    double _packetLossPercentages[20];
    double _roundTripTime;
    double _packetLossThreshold;
    unsigned int _targetBitrate;
    unsigned int _packetLossWindowSize;
    unsigned int _packetLossPercentageIndex;
    int _mode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned int redundancyPercentage;
@property (nonatomic, readonly) double redundancyInterval;

- (id)init;
- (void)updateRedundancyStrategyWithNetworkStatistics:(CDStruct_b21f1e06)arg1;
- (void)updateInternalParametersWithMode:(int)arg1;
- (void)updateRoundTripTimeWithStatistics:(CDStruct_b21f1e06)arg1;
- (void)updateRedundancyPercentage;

@end
