/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFServiceGroupItem.h>

@class NSString;

@interface HFServiceGroupItem (HUServiceGroupItemServiceContainer)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)hu_containedServices;
- (id)hu_containedAccessories;

@end
