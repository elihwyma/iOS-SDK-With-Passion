/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <SymptomEvaluator/ExpertSystemStateCore.h>

@class AWDSymptomsAdvisoryAlternateNetworkType, NSDictionary;

__attribute__((visibility("hidden")))
@interface NoBackhaulHandlerState : ExpertSystemStateCore

{
    _Bool _noPreconditions;
    NSDictionary *_entryCellPreds;
    NSDictionary *_entryWiFiPreds;
    AWDSymptomsAdvisoryAlternateNetworkType *_awdMetric;
}

@property (readonly) NSDictionary *entryCellPreds;
@property (readonly) NSDictionary *entryWiFiPreds;
@property (nonatomic) _Bool noPreconditions;
@property (retain) AWDSymptomsAdvisoryAlternateNetworkType *awdMetric;

+ (id)createStateWithLabel:(id)arg1 rank:(unsigned long long)arg2 entryCellPreds:(id)arg3 entryWiFiPreds:(id)arg4;
+ (id)createAndInitializeAWDMetricForStateWithLevel:(int)arg1 activationIdentifier:(unsigned int)arg2;

- (id)_initStateWithLabel:(id)arg1 rank:(unsigned long long)arg2 entryCellPreds:(id)arg3 entryWiFiPreds:(id)arg4;

@end
