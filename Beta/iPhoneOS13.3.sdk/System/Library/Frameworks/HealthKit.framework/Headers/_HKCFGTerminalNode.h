/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/_HKCFGNode.h>

__attribute__((visibility("hidden")))
@interface _HKCFGTerminalNode : _HKCFGNode

{
    id _value;
}

+ (id)nodeWithValue:(id)arg1 rangeOfString:(struct _NSRange)arg2;

- (id)evaluate;

@end
