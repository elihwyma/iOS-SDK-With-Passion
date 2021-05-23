/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCRedundancyControlAlgorithmAudioMultiWay : NSObject

{
    unsigned int _redundancyPercentage;
    double _redundancyInterval;
    unsigned int _packetLossPercentageIncreaseThresholds[3];
    unsigned int _packetLossPercentageDecreaseThresholds[3];
    _Bool _isPacketLossIncreasing;
    unsigned int _packetLossPercentage;
    unsigned int _packetLossPercentageThreshold;
    unsigned int _burstLossPacketCount;
    _Bool _isUplinkRecentlyCongested;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned int redundancyPercentage;
@property (nonatomic, readonly) double redundancyInterval;

- (id)init;
- (void)updateRedundancyStrategyWithNetworkStatistics:(CDStruct_b21f1e06)arg1;
- (void)computeRedundancyInfo;
- (unsigned int)updateRedundancyPercentageWithPLRThresholds:(unsigned int *)arg1;

@end
