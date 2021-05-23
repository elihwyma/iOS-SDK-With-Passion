/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFServiceItem.h>

@class NSString;

@interface HFServiceItem (HUServiceItemServiceContainer)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)hu_containedServices;
- (id)hu_containedAccessories;

@end
