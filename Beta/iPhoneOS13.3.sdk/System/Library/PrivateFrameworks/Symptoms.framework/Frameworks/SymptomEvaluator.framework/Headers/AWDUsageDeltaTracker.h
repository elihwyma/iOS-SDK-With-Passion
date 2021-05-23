/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AWDUsageDeltaTracker : NSObject

{
    int netType;
    int rootCause;
    unsigned long long startValue;
    unsigned long long lastValue;
    unsigned long long flowCount;
}

- (void)dealloc;
- (id)initForNetworkType:(int)arg1 rootCause:(int)arg2 startValue:(unsigned long long)arg3;
- (void)recordUsageValue:(unsigned long long)arg1;
- (void)recordFlowCount:(unsigned long long)arg1;

@end
