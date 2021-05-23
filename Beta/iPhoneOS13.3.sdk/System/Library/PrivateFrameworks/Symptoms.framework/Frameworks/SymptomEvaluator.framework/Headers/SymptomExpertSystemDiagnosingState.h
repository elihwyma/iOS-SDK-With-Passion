/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <SymptomEvaluator/SymptomExpertSystemState.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface SymptomExpertSystemDiagnosingState : SymptomExpertSystemState

{
    NSDictionary *_triggeringSymptom;
}

@property (retain, nonatomic) NSDictionary *triggeringSymptom;

+ (id)createStateWithLabel:(id)arg1 rank:(unsigned long long)arg2 entryPreds:(id)arg3;

- (void)createAndPostAWDMetric;

@end
