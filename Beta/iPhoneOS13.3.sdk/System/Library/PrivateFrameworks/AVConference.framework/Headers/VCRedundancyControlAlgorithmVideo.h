/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCRedundancyControlAlgorithmVideo : NSObject

{
    unsigned int _redundancyPercentage;
    double _redundancyInterval;
    double _packetLossPercentage;
    double _packetLossPercentageVideo;
    double _plrEnvelope;
    _Bool _isNetworkCongested;
    unsigned int _maxAllowedRedundancyPercentage;
    unsigned int _burstyLoss[8];
    unsigned int _burstyLossArraySize;
    unsigned int _burstyLossArrayIndex;
    unsigned int _redundancyMode;
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
- (id)initWithRedundancyControllerMode:(unsigned int)arg1 maxAllowedRedundancyPercentage:(unsigned int)arg2;

@end
