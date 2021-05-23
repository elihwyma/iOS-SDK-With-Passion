/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, StopWatch;

@interface ExpertSystemStateCore : NSObject

{
    int _loopTokens;
    NSString *_label;
    unsigned long long _rank;
    NSDictionary *_entryPreds;
    StopWatch *_sojournTime;
    CDUnknownBlockType _entryAction;
    CDUnknownBlockType _loopEvaluation;
    CDUnknownBlockType _exitAction;
    ExpertSystemStateCore *_previousState;
}

@property (readonly) NSString *label;
@property (readonly) unsigned long long rank;
@property (readonly) NSDictionary *entryPreds;
@property (readonly) StopWatch *sojournTime;
@property (copy, nonatomic) CDUnknownBlockType entryAction;
@property (copy, nonatomic) CDUnknownBlockType loopEvaluation;
@property (copy, nonatomic) CDUnknownBlockType exitAction;
@property int loopTokens;
@property (retain) ExpertSystemStateCore *previousState;

- (id)initStateWithLabel:(id)arg1 rank:(unsigned long long)arg2 entryPreds:(id)arg3;

@end
