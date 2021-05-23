/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TrackedFlowCounts : NSObject

{
    _Bool _probedFlow;
    _Bool _probed3WHSStuckFlow;
    _Bool _probedReadStuckFlow;
    _Bool _probedWriteStuckFlow;
    unsigned long long _rxCellularBytes;
    unsigned long long _txCellularBytes;
    unsigned long long _rxWiFiBytes;
    unsigned long long _txWiFiBytes;
    unsigned long long _rxWiredBytes;
    unsigned long long _txWiredBytes;
    unsigned long long _rxPkts;
    unsigned long long _txPkts;
    unsigned long long _rxDupeBytes;
    unsigned long long _rxOOOBytes;
    unsigned long long _txReTxBytes;
    double _rttMinimumSecs;
    double _rttAverageSecs;
    double _rttVariation;
}

@property (nonatomic) unsigned long long rxCellularBytes;
@property (nonatomic) unsigned long long txCellularBytes;
@property (nonatomic) unsigned long long rxWiFiBytes;
@property (nonatomic) unsigned long long txWiFiBytes;
@property (nonatomic) unsigned long long rxWiredBytes;
@property (nonatomic) unsigned long long txWiredBytes;
@property (nonatomic) unsigned long long rxPkts;
@property (nonatomic) unsigned long long txPkts;
@property (nonatomic) unsigned long long rxDupeBytes;
@property (nonatomic) unsigned long long rxOOOBytes;
@property (nonatomic) unsigned long long txReTxBytes;
@property (nonatomic) double rttMinimumSecs;
@property (nonatomic) double rttAverageSecs;
@property (nonatomic) double rttVariation;
@property (nonatomic) _Bool probedFlow;
@property (nonatomic) _Bool probed3WHSStuckFlow;
@property (nonatomic) _Bool probedReadStuckFlow;
@property (nonatomic) _Bool probedWriteStuckFlow;

- (id)description;
- (void)addFlowCounts:(id)arg1;
- (void)subtractFlowCounts:(id)arg1;

@end
