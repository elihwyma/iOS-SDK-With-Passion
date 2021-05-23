/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCRedundancyControlAlgorithmAudio : NSObject

{
    unsigned int _redundancyPercentage;
    double _redundancyInterval;
    double _packetLossPercentageIncreaseThresholds[3];
    double _packetLossPercentageDecreaseThresholds[3];
    _Bool _isPacketLossIncreasing;
    double _packetLossPercentage;
    double _packetLossPercentageThreshold;
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
- (unsigned int)updateRedundancyPercentageWithPLRThresholds:(double *)arg1;

@end
