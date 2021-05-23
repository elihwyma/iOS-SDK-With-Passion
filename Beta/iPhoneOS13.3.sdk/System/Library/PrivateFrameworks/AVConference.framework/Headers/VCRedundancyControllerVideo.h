/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class AVCStatisticsCollector, NSString;

@protocol VCRedundancyControlAlgorithm;

__attribute__((visibility("hidden")))
@interface VCRedundancyControllerVideo : NSObject

{
    id _redundancyControllerDelegate;
    AVCStatisticsCollector *_statisticsCollector;
    unsigned int _mode;
    id <VCRedundancyControlAlgorithm> _algorithm;
    unsigned int _currentRedundancyPercentage;
    int _forceRedundancyPercentage;
    double _lastDefaultSettingLoadingTime;
    int _type;
    unsigned long long _statisticsID;
}

@property (nonatomic) unsigned long long statisticsID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)convertRedundancyPercentageToRatio:(unsigned int)arg1;

- (void)dealloc;
- (void)loadDefaultSettings;
- (void)updateRedundancyStrategyWithNetworkStatistics:(CDStruct_b21f1e06)arg1;
- (void)reportRedundancyPercentage:(unsigned int)arg1 redundancyInterval:(double)arg2;
- (id)initWithDelegate:(id)arg1 statisticsCollector:(id)arg2 mode:(unsigned int)arg3 maxAllowedRedundancyPercentage:(unsigned int)arg4;

@end
