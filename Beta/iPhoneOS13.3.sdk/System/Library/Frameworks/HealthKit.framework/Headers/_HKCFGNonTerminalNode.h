/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/_HKCFGNode.h>

@class NSArray, _HKCFGReplacementRule;

__attribute__((visibility("hidden")))
@interface _HKCFGNonTerminalNode : _HKCFGNode

{
    NSArray *_nodes;
    id _value;
    _HKCFGReplacementRule *_rule;
}

@property (nonatomic, readonly) _HKCFGReplacementRule *rule;

+ (id)nodeWithChildren:(id)arg1 rule:(id)arg2 rangeOfString:(struct _NSRange)arg3;

- (id)evaluate;

@end
