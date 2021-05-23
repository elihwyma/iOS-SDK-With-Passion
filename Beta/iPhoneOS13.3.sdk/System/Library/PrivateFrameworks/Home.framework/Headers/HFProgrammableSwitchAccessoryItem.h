/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

#import <Home/Swift-Protocol.h>

@class HMAccessory, HMHome, NSSet, NSString;

@protocol HFCharacteristicValueSource, HFHomeKitObject;

@interface HFProgrammableSwitchAccessoryItem : HFItem <Swift>

{
    HMAccessory *_accessory;
    id <HFCharacteristicValueSource> _valueSource;
}

@property (retain, nonatomic) HMAccessory *accessory;
@property (retain, nonatomic) id <HFCharacteristicValueSource> valueSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <HFHomeKitObject> homeKitObject;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) NSSet *services;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)accessories;
- (id)copyWithValueSource:(id)arg1;
- (id)initWithAccessory:(id)arg1 valueSource:(id)arg2;
- (_Bool)shouldReduceOptionItemsForNotifyingCharacteristics;
- (id)namingComponentForHomeKitObject;
- (id)serviceLikeBuilderInHome:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (_Bool)containsActions;
- (id)currentStateActionBuildersForHome:(id)arg1;
- (_Bool)actionsMayRequireDeviceUnlock;

@end
