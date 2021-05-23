/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@interface RERelevanceCondition : NSObject

{
    CDUnknownBlockType _condition;
}

+ (id)conditionWithBlock:(CDUnknownBlockType)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)_hash;
- (id)initWithCondtionBlock:(CDUnknownBlockType)arg1;
- (float)_evaluateRelevanceWithEnvironment:(id)arg1;

@end
