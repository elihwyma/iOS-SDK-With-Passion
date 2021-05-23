/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSNumber.h>

@class NSString;

@interface NSNumber (HFPropertyListConverting)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hf_isFloatValue;
@property (nonatomic, readonly) _Bool hf_isSignedValue;
@property (copy, nonatomic, readonly) NSNumber *hf_absoluteValue;

- (id)hf_largerNumber:(id)arg1;
- (id)hf_smallerNumber:(id)arg1;
- (id)hf_valueRoundedToNearestStepValue:(id)arg1 relativeToBaseValue:(id)arg2;
- (long long)hf_compareAbsoluteValue:(id)arg1;

@end
