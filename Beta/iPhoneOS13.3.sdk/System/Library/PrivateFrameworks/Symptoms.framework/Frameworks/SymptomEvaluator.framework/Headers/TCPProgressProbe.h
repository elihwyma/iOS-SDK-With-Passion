/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TCPProgressProbe : NSObject

{
    NSObject<OS_dispatch_queue> *lqueue;
    const char *interfaceName;
    unsigned int state;
    unsigned long long _countPremiumModeClients;
    _Bool _localFlowTracking;
    unsigned long long _interfaceIndex;
}

@property (nonatomic, readonly) unsigned long long interfaceIndex;
@property (nonatomic) _Bool localFlowTracking;

+ (void)initialize;
+ (id)probeForInterface:(id)arg1;
+ (id)progressPrettyPrintUtility:(struct xtcpprogress_indicators *)arg1;
+ (void)forceInvalidationFor:(id)arg1 periods:(unsigned long long)arg2;

- (void)dealloc;
- (id)description;
- (_Bool)manage:(unsigned int)arg1 outValue:(unsigned int *)arg2;
- (_Bool)fetchMetricsForFlowsAged:(double)arg1 metrics:(struct xtcpprogress_indicators *)arg2;
- (_Bool)interfaceMappingIsCurrent;
- (id)_initForInterface:(id)arg1;

@end
