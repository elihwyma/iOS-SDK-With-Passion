/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

@class HMHome, NSSet, NSString;

@protocol HFCharacteristicValueSource, HFHomeKitObject, HFHomeKitSettingsVendor, HFMediaProfileContainer, HFMediaValueSource;

@interface HFMediaAccessoryItem : HFItem

{
    _Bool _isItemInActionBuilder;
    id <HFHomeKitObject> _homeKitObject;
    id <HFHomeKitSettingsVendor> _homeKitSettingsVendor;
    id <HFCharacteristicValueSource> _valueSource;
    id <HFMediaProfileContainer> _mediaProfileContainer;
    long long _mediaAccessoryItemType;
}

@property (nonatomic, readonly) id <HFMediaValueSource> mediaValueSource;
@property (nonatomic) _Bool isItemInActionBuilder;
@property (nonatomic, readonly) id <HFMediaProfileContainer> mediaProfileContainer;
@property (nonatomic, readonly) long long mediaAccessoryItemType;
@property (nonatomic, readonly) _Bool allowsAppleMusicAccount;
@property (nonatomic, readonly) _Bool supportsMediaAction;
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
@property (nonatomic, readonly) NSSet *accessoriesSupportingSoftwareUpdate;
@property (nonatomic, readonly) NSSet *availableSoftwareUpdates;
@property (nonatomic, readonly) id <HFHomeKitSettingsVendor> homeKitSettingsVendor;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)settings;
- (id)accessories;
- (id)room;
- (_Bool)isHomePod;
- (_Bool)isAppleTV;
- (_Bool)isSpeaker;
- (_Bool)supportsMultiUser;
- (id)copyWithValueSource:(id)arg1;
- (id)namingComponentForHomeKitObject;
- (id)serviceLikeBuilderInHome:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)createControlItems;
- (_Bool)containsActions;
- (id)currentStateActionBuildersForHome:(id)arg1;
- (_Bool)actionsMayRequireDeviceUnlock;
- (unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)arg1;
- (id)initWithValueSource:(id)arg1 homeKitObject:(id)arg2;
- (id)initWithValueSource:(id)arg1 mediaProfileContainer:(id)arg2;
- (_Bool)isStandaloneHomePod;
- (_Bool)isHomePodAndIsInMediaSystem;
- (_Bool)isHomePodMediaSystem;
- (_Bool)isAirPort;
- (_Bool)supportsMediaQuickControls;
- (id)performStandardUpdateWithOptions:(id)arg1;
- (void)_decorateServiceLikeItemKeys:(id)arg1;
- (void)_decorateWithMediaSessionKeys:(id)arg1;
- (void)_decorateOutcomeWithAccessorySpecificKeys:(id)arg1;
- (void)_decorateWithMediaSystemSpecificKeys:(id)arg1;
- (void)_decorateWithSoftwareUpdateStateKeys:(id)arg1;
- (_Bool)isContainedWithinMediaSystem;
- (id)iconDescriptor:(id)arg1;
- (unsigned long long)preferredActionOnTap:(id)arg1;
- (_Bool)_isInstallingSoftwareUpdate;
- (id)serviceNameComponents;
- (_Bool)isSiriDisabled;
- (_Bool)supportsAlarmQuickControls;

@end
