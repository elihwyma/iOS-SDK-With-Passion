/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSNumberFormatter.h>

@class NSString;

@interface NSNumberFormatter (HKNumberFormatter)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)stringFromNumber:(id)arg1 displayType:(id)arg2 unitController:(id)arg3;
- (_Bool)returnsUnitWithValueForDisplay;

@end
