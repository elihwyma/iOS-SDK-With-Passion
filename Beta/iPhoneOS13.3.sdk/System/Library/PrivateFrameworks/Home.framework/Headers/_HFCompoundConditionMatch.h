/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFCondition, NSArray;

@interface _HFCompoundConditionMatch : NSObject

{
    HFCondition *_matchedCondition;
    NSArray *_matchedPredicates;
}

@property (retain, nonatomic) HFCondition *matchedCondition;
@property (retain, nonatomic) NSArray *matchedPredicates;

+ (id)matchWithCondition:(id)arg1 matchedPredicates:(id)arg2;

@end
