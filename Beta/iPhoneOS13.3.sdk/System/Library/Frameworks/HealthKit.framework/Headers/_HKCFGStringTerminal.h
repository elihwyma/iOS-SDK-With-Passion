/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/_HKCFGTerminal.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _HKCFGStringTerminal : _HKCFGTerminal

{
    _Bool _caseSensitive;
    NSString *_string;
}

@property (copy, nonatomic) NSString *string;
@property (nonatomic) _Bool caseSensitive;

- (id)_label;
- (id)characterSet;
- (unsigned long long)_minimumLength;
- (_Bool)_scanValue:(id *)arg1 withScanner:(id)arg2;

@end
