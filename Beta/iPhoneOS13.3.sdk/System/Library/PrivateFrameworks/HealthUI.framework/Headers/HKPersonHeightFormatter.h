/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSLengthFormatter, NSNumber;

@interface HKPersonHeightFormatter : NSObject

{
    NSLengthFormatter *_heightFormatter;
    NSNumber *_usesImperialUnits;
}

@property (nonatomic, readonly) _Bool usesImperialUnits;

+ (id)sharedFormatter;

- (id)init;
- (void)dealloc;
- (void)_localeChanged:(id)arg1;
- (id)localizedStringFromHeightInCentimeters:(id)arg1;
- (void)getFeet:(long long *)arg1 inches:(long long *)arg2 fromCentimeters:(double)arg3;
- (double)centimetersFromFeet:(double)arg1 inches:(double)arg2;
- (id)formattedValueForFeet:(double)arg1;
- (id)formattedValueForInches:(double)arg1;
- (id)formattedValueForCentimeters:(double)arg1;

@end
