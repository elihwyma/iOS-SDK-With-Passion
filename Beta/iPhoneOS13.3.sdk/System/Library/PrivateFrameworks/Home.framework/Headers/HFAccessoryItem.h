/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

#import <Home/Swift-Protocol.h>

@class HMAccessory, HMHome, NSArray, NSSet, NSString;

@protocol HFCharacteristicValueSource, HFHomeKitObject;

@interface HFAccessoryItem : HFItem <Swift>

{
    HMAccessory *_accessory;
    id <HFCharacteristicValueSource> _valueSource;
    NSSet *_serviceItems;
}

@property (retain, nonatomic) NSSet *serviceItems;
@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly) id <HFCharacteristicValueSource> valueSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <HFHomeKitObject> homeKitObject;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) NSSet *services;
@property (nonatomic, readonly) _Bool isItemGroup;
@property (nonatomic, readonly) _Bool isContainedWithinItemGroup;
@property (nonatomic, readonly) unsigned long long numberOfItemsContainedWithinGroup;
@property (nonatomic, readonly) _Bool isCompoundItem;
@property (nonatomic, readonly) unsigned long long numberOfCompoundItems;
@property (nonatomic, readonly) id <HFHomeKitObject> primaryHomeKitObject;
@property (nonatomic, readonly) NSArray *allHomeKitObjects;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)accessories;
- (id)copyWithValueSource:(id)arg1;
- (id)initWithAccessory:(id)arg1 valueSource:(id)arg2;
- (id)namingComponentForHomeKitObject;
- (id)serviceLikeBuilderInHome:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (_Bool)containsActions;
- (id)currentStateActionBuildersForHome:(id)arg1;
- (_Bool)actionsMayRequireDeviceUnlock;
- (id)_buildServiceItems;
- (id)_unanimousValueForResultsKey:(id)arg1 inServiceItems:(id)arg2;
- (id)serviceItemForService:(id)arg1;
- (_Bool)isMultiSensorDevice;
- (_Bool)isMultiLightDevice;
- (id)_buildControlDescription;
- (id)_buildControlItems;
- (id)_collectAllChildItems;
- (id)_mostCommonValueInServiceItems:(id)arg1 valueProvider:(CDUnknownBlockType)arg2;
- (id)_sortDescriptorsForServiceItems;
- (id)_buildTileDescription:(_Bool)arg1;
- (id)controlItemsForService:(id)arg1;
- (id)_mostCommonValueForResultsKey:(id)arg1 inServiceItems:(id)arg2;

@end
