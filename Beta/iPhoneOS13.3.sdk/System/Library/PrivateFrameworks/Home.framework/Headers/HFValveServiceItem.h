/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFServiceItem.h>

@interface HFValveServiceItem : HFServiceItem

+ (id)supportedServiceTypes;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)createControlItems;
- (_Bool)containsActions;
- (id)currentStateActionBuildersForHome:(id)arg1;

@end
