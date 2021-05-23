/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFServiceItem.h>

@interface HFHumiditySensorServiceItem : HFServiceItem

+ (id)supportedServiceTypes;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)createControlItems;

@end
