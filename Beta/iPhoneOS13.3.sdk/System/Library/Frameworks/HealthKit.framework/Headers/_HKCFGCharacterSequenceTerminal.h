/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/_HKCFGTerminal.h>

@class NSCharacterSet;

__attribute__((visibility("hidden")))
@interface _HKCFGCharacterSequenceTerminal : _HKCFGTerminal

{
    NSCharacterSet *_characterSet;
}

@property (copy, nonatomic) NSCharacterSet *characterSet;

- (id)_label;
- (unsigned long long)_minimumLength;
- (_Bool)_scanValue:(id *)arg1 withScanner:(id)arg2;

@end
