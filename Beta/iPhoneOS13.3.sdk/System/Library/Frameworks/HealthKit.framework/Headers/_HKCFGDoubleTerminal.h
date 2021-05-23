/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/_HKCFGTerminal.h>

__attribute__((visibility("hidden")))
@interface _HKCFGDoubleTerminal : _HKCFGTerminal

{
    CDUnknownBlockType _condition;
}

@property (copy, nonatomic) CDUnknownBlockType condition;

- (id)_label;
- (id)characterSet;
- (unsigned long long)_minimumLength;
- (_Bool)_scanValue:(id *)arg1 withScanner:(id)arg2;

@end
