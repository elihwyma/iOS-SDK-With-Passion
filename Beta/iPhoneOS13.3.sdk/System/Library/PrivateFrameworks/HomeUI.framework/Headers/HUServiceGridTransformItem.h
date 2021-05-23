/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFHomeKitTransformItem.h>

#import <HomeUI/Swift-Protocol.h>

@class HFItem, NSSet, NSString;

@protocol HFHomeKitItemProtocol><HFServiceVendor><HFActionBuilderFactory;

@interface HUServiceGridTransformItem : HFHomeKitTransformItem <Swift>

@property (nonatomic, readonly) HFItem<HFHomeKitItemProtocol><HFServiceVendor><HFActionBuilderFactory> *sourceServicePickerItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSSet *services;

- (id)accessories;
- (_Bool)containsActions;
- (id)currentStateActionBuildersForHome:(id)arg1;
- (_Bool)actionsMayRequireDeviceUnlock;

@end
