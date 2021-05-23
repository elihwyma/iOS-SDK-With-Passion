/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface HKEnumeratedDisplayTypeNumberFormatter : NSObject

{
    NSDictionary *_valueLabels;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDisplayType:(id)arg1;
- (id)stringFromNumber:(id)arg1 displayType:(id)arg2 unitController:(id)arg3;
- (_Bool)returnsUnitWithValueForDisplay;

@end
