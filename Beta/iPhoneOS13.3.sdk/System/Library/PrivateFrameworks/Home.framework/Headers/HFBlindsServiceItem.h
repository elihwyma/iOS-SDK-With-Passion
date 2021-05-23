/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFDoorServiceItem.h>

@interface HFBlindsServiceItem : HFDoorServiceItem

+ (id)supportedServiceTypes;

- (id)createControlItems;
- (long long)_doorServicePriority;

@end
