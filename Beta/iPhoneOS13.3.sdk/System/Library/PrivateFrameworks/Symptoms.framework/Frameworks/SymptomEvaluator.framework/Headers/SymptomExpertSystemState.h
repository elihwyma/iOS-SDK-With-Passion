/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <SymptomEvaluator/ExpertSystemStateCore.h>

@class NSObject;

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SymptomExpertSystemState : ExpertSystemStateCore

{
    NSObject<OS_dispatch_source> *_strobe;
}

@property (retain, nonatomic) NSObject<OS_dispatch_source> *strobe;

+ (id)createStateWithLabel:(id)arg1 rank:(unsigned long long)arg2 entryPreds:(id)arg3;

@end
