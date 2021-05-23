/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class RECondition;

@interface REConditionEvaluator : NSObject

{
    unsigned long long _mode;
    RECondition *_condition;
}

@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, readonly) RECondition *condition;
@property (nonatomic, readonly) _Bool needsPredictionSet;

- (id)initWithCondition:(id)arg1;
- (_Bool)acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id *)arg3;
- (_Bool)compareFeatureMap:(id)arg1 toFeatureMap:(id)arg2;

@end
