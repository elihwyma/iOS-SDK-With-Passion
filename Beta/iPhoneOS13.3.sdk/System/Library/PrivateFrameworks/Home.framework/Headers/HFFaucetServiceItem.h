/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFServiceItem.h>

@interface HFFaucetServiceItem : HFServiceItem

+ (id)supportedServiceTypes;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)createControlItems;
- (id)servicesToReadForCharacteristicType:(id)arg1;
- (_Bool)_shouldSubsumeValveInOverallActiveState;
- (_Bool)containsActions;
- (id)currentStateActionBuildersForHome:(id)arg1;

@end
