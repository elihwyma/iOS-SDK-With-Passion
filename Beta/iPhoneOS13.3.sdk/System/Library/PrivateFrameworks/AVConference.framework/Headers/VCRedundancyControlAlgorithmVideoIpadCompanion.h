/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCRedundancyControlAlgorithmVideoIpadCompanion : NSObject

{
    unsigned int _redundancyPercentage;
    double _redundancyInterval;
    unsigned int _packetLossPercentage;
    unsigned int _burstyLoss[500];
    unsigned int _burstyLossArraySize;
    unsigned int _burstyLossArrayIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned int redundancyPercentage;
@property (nonatomic, readonly) double redundancyInterval;

- (void)updateBurstyLoss:(unsigned int)arg1;
- (unsigned int)computeRedundancyWithLossPercentage;
- (unsigned int)computeRedundancyWithBurstyLoss;
- (void)updateRedundancyStrategyWithNetworkStatistics:(CDStruct_b21f1e06)arg1;

@end
