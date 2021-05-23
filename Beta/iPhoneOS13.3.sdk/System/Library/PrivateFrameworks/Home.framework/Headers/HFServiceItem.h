/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

#import <Home/Swift-Protocol.h>

@class HMHome, HMService, NSSet, NSString;

@protocol HFCharacteristicValueSource, HFHomeKitObject;

@interface HFServiceItem : HFItem <Swift>

{
    id <HFCharacteristicValueSource> _valueSource;
    HMService *_service;
}

@property (nonatomic, readonly) id <HFCharacteristicValueSource> valueSource;
@property (nonatomic, readonly) HMService *service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <HFHomeKitObject> homeKitObject;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) NSSet *services;

+ (id)supportedServiceTypes;
+ (id)serviceItemForService:(id)arg1 valueSource:(id)arg2;
+ (Class)itemClassForService:(id)arg1;
+ (id)_serviceTypeToServiceItemClassMap;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)accessories;
- (id)copyWithValueSource:(id)arg1;
- (id)namingComponentForHomeKitObject;
- (id)serviceLikeBuilderInHome:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)controlItemValueSourceForPrimaryService;
- (id)performStandardUpdateWithCharacteristicTypes:(id)arg1 options:(id)arg2;
- (id)descriptionForCharacteristic:(id)arg1 withValue:(id)arg2;
- (id)controlDescriptionForCharacteristic:(id)arg1 withValue:(id)arg2;
- (id)createControlItems;
- (id)servicesToReadForCharacteristicType:(id)arg1;
- (id)controlItemValueSourceForServices:(id)arg1;
- (_Bool)containsActions;
- (id)currentStateActionBuildersForHome:(id)arg1;
- (_Bool)actionsMayRequireDeviceUnlock;
- (id)initWithValueSource:(id)arg1 service:(id)arg2;
- (id)_descriptionBuilder;
- (id)_allRepresentedServices;
- (id)_actionableCharacteristics;
- (id)characteristicsToReadForCharacteristicTypes:(id)arg1 controlItems:(id)arg2;
- (id)_augmentedStandardResultsForUpdateResponse:(id)arg1 controlItems:(id)arg2;
- (id)incrementalStateIconDescriptorForPrimaryState:(long long)arg1 incrementalValue:(id)arg2;

@end
