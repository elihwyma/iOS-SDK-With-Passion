/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

#import <Home/Swift-Protocol.h>

@class HMHome, HMServiceGroup, NSSet, NSString;

@protocol HFCharacteristicValueSource, HFHomeKitObject;

@interface HFServiceGroupItem : HFItem <Swift>

{
    id <HFCharacteristicValueSource> _valueSource;
    HMServiceGroup *_serviceGroup;
}

@property (nonatomic, readonly) id <HFCharacteristicValueSource> valueSource;
@property (nonatomic, readonly) HMServiceGroup *serviceGroup;
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

+ (_Bool)_isControlItem:(id)arg1 similarToControlItem:(id)arg2;
+ (_Bool)_isControlItem:(id)arg1 identicalToControlItem:(id)arg2;
+ (id)_combinedWriteErrorForError:(id)arg1 serviceGroupTitle:(id)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)accessories;
- (id)copyWithValueSource:(id)arg1;
- (id)namingComponentForHomeKitObject;
- (id)serviceLikeBuilderInHome:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (_Bool)containsActions;
- (id)currentStateActionBuildersForHome:(id)arg1;
- (_Bool)actionsMayRequireDeviceUnlock;
- (id)primaryStateControlItem;
- (id)initWithValueSource:(id)arg1 serviceGroup:(id)arg2;
- (id)_buildServiceItems;
- (id)_unanimousValueForResultsKey:(id)arg1 inServiceItems:(id)arg2;
- (id)_mostCommonValueInServiceItems:(id)arg1 valueProvider:(CDUnknownBlockType)arg2;
- (id)_sortDescriptorsForServiceItems;
- (id)_mostCommonValueForResultsKey:(id)arg1 inServiceItems:(id)arg2;
- (id)controlPanelItems;
- (id)_buildControlItemsForServiceItems:(id)arg1;
- (id)_mergedIconDescriptorForServiceItems:(id)arg1;
- (id)_aggregatedValueSource;
- (id)incrementalStateControlItem;
- (id)allControlItems;
- (double)_averageNumericalValueForResultsKey:(id)arg1 inServiceItems:(id)arg2;
- (long long)_highestIntegerValueForResultsKey:(id)arg1 inServiceItems:(id)arg2;

@end
