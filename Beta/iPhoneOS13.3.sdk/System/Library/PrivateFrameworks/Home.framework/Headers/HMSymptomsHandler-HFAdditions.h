/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <HomeKit/HMSymptomsHandler.h>

@interface HMSymptomsHandler (HFAdditions)

+ (void)initialize;
+ (id)hf_symptomTypesSortedByPriority;
+ (CDUnknownBlockType)hf_symptomArraySortComparator;

- (id)hf_fakeSymptomsImplementationUsedForDebuggingPleaseDontTouchThisItIsFragileSwizzlingIsBadMKay;
- (id)hf_symptomsSortedByPriority;

@end
