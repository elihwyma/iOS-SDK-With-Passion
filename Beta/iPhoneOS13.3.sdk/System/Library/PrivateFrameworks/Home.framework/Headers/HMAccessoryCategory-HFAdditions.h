/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <HomeKit/HMAccessoryCategory.h>

@interface HMAccessoryCategory (HFAdditions)

@property (nonatomic, readonly) _Bool hf_isMediaAccessory;

- (id)hf_compatibleServiceTypes;

@end
