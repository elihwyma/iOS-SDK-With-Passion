/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _HKCFGReplacementRule : NSObject

{
    NSString *_description;
    NSArray *_rightHandSide;
    CDUnknownBlockType _nodeEvaluator;
    unsigned long long _lengthIncrease;
}

@property (copy, nonatomic) NSArray *rightHandSide;
@property (copy, nonatomic, readonly) CDUnknownBlockType nodeEvaluator;
@property (nonatomic, readonly) unsigned long long lengthIncrease;

+ (id)ruleWithLHS:(id)arg1 RHS:(id)arg2 nodeEvaluator:(CDUnknownBlockType)arg3;

- (id)description;

@end
