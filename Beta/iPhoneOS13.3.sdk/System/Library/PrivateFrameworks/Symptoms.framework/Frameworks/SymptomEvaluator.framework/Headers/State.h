/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class AWDSymptomsAdvisoryAlternateNetworkType, NSDictionary, NSMutableArray, NSString, StopWatch;

__attribute__((visibility("hidden")))
@interface State : NSObject

{
    int _loopTokens;
    NSString *_label;
    unsigned long long _rank;
    NSDictionary *_entryCellPreds;
    NSDictionary *_entryWiFiPreds;
    StopWatch *_sojournTime;
    CDUnknownBlockType _entryAction;
    CDUnknownBlockType _loopEvaluation;
    CDUnknownBlockType _exitAction;
    State *_previousState;
    AWDSymptomsAdvisoryAlternateNetworkType *_awdMetric;
    NSMutableArray *_digest;
}

@property (readonly) NSString *label;
@property (readonly) unsigned long long rank;
@property (readonly) NSDictionary *entryCellPreds;
@property (readonly) NSDictionary *entryWiFiPreds;
@property (readonly) StopWatch *sojournTime;
@property (copy, nonatomic) CDUnknownBlockType entryAction;
@property (copy, nonatomic) CDUnknownBlockType loopEvaluation;
@property (copy, nonatomic) CDUnknownBlockType exitAction;
@property int loopTokens;
@property (retain) State *previousState;
@property (retain) AWDSymptomsAdvisoryAlternateNetworkType *awdMetric;
@property (readonly) NSMutableArray *digest;

+ (id)createStateWithLabel:(id)arg1 rank:(unsigned long long)arg2 entryCellPreds:(id)arg3 entryWiFiPreds:(id)arg4;
+ (id)createAndInitializeAWDMetricForStateWithLevel:(int)arg1 activationIdentifier:(unsigned int)arg2 policy:(int)arg3 andSignature:(id)arg4;

- (void)dealloc;
- (id)_initStateWithLabel:(id)arg1 rank:(unsigned long long)arg2 entryCellPreds:(id)arg3 entryWiFiPreds:(id)arg4;

@end
