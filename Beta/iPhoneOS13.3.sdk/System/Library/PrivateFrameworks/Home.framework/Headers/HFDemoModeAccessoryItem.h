/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

#import <Home/Swift-Protocol.h>

@class HMAccessory, HMHome, NSDictionary, NSSet, NSString;

@protocol HFCharacteristicValueSource, HFHomeKitObject;

@interface HFDemoModeAccessoryItem : HFItem <Swift>

{
    HMAccessory *_accessory;
    NSDictionary *_configInfo;
}

@property (retain, nonatomic) NSDictionary *configInfo;
@property (weak, nonatomic) HMAccessory *accessory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <HFHomeKitObject> homeKitObject;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) NSSet *services;
@property (nonatomic, readonly) id <HFCharacteristicValueSource> valueSource;
@property (nonatomic, readonly) _Bool isItemGroup;
@property (nonatomic, readonly) _Bool isContainedWithinItemGroup;
@property (nonatomic, readonly) unsigned long long numberOfItemsContainedWithinGroup;

+ (id)accessoryItemForAccessory:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)accessories;
- (id)initWithAccessory:(id)arg1;
- (id)hf_serviceNameComponents;
- (id)copyWithValueSource:(id)arg1;
- (id)namingComponentForHomeKitObject;
- (id)serviceLikeBuilderInHome:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)mediaProfileContainer;
- (_Bool)isMediaSystemDemoType;

@end
