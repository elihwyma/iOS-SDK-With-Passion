/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

#import <Home/Swift-Protocol.h>

@class HMAccessory, HMAccessoryProfile, HMHome, NSSet, NSString;

@protocol HFCharacteristicValueSource, HFHomeKitObject;

@interface HFAccessoryProfileItem : HFItem <Swift>

{
    id <HFCharacteristicValueSource> _valueSource;
    HMAccessoryProfile *_profile;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly) HMAccessoryProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSSet *services;
@property (nonatomic, readonly) id <HFHomeKitObject> homeKitObject;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) id <HFCharacteristicValueSource> valueSource;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)accessories;
- (id)profiles;
- (id)copyWithValueSource:(id)arg1;
- (id)namingComponentForHomeKitObject;
- (id)serviceLikeBuilderInHome:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithProfile:(id)arg1 valueSource:(id)arg2;

@end
