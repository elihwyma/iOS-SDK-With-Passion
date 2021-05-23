/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceProvider.h>

@class RERelevanceCondition;

@interface REConditionalRelevanceProvider : RERelevanceProvider

{
    RERelevanceCondition *_condition;
}

@property (nonatomic, readonly) RERelevanceCondition *condition;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)_hash;
- (id)initWithRelevanceCondition:(id)arg1;
- (float)_evaluateCondition;

@end
