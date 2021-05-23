/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCRedundancyControlAlgorithmAudioLegacy : NSObject

{
    unsigned int _redundancyPercentage;
    double _redundancyInterval;
    unsigned int _packetLossPercentage;
    _Bool _isUplinkRecentlyCongested;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned int redundancyPercentage;
@property (nonatomic, readonly) double redundancyInterval;

- (void)updateRedundancyStrategyWithNetworkStatistics:(CDStruct_b21f1e06)arg1;
- (void)computeRedundancyInfo;

@end
