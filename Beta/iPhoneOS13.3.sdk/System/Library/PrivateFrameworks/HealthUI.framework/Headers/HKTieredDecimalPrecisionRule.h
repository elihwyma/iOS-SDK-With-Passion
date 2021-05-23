/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HKTieredDecimalPrecisionRule : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)numberFormatter;
- (long long)maximumDecimalPrecision;
- (long long)decimalPrecisionForValue:(double)arg1;
- (long long)minimumDecimalPrecision;

@end
