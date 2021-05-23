/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMMediaContentProfileAccessControl.h>

@class NSArray;

@interface HMMutableMediaContentProfileAccessControl : HMMediaContentProfileAccessControl

@property (copy) NSArray *accessories;

- (void)addAccessory:(id)arg1;
- (void)removeAccessory:(id)arg1;

@end
