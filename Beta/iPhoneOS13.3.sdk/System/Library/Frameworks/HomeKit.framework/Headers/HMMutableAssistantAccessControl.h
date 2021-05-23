/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMAssistantAccessControl.h>

@class NSArray;

@interface HMMutableAssistantAccessControl : HMAssistantAccessControl

@property (getter=isEnabled) _Bool enabled;
@property _Bool allowUnauthenticatedRequests;
@property (copy) NSArray *accessories;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)options;
- (void)setOptions:(unsigned long long)arg1;
- (void)addAccessory:(id)arg1;
- (void)removeAccessory:(id)arg1;

@end
