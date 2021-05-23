/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

#import <Home/Swift-Protocol.h>

@class HMHome, NSSet, NSString;

@protocol HFCharacteristicValueSource, HFHomeKitObject, HFServiceLikeItem;

@interface HFServiceActionItem : HFItem <Swift>

{
    HMHome *_home;
    HFItem<HFServiceLikeItem> *_containingItem;
    NSSet *_actions;
    NSSet *_actionBuilders;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) id <HFCharacteristicValueSource> valueSource;
@property (nonatomic, readonly) HFItem<HFServiceLikeItem> *containingItem;
@property (retain, nonatomic) NSSet *actions;
@property (retain, nonatomic) NSSet *actionBuilders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <HFHomeKitObject> homeKitObject;
@property (nonatomic, readonly) NSSet *services;

+ (id)_percentFormatter;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addAction:(id)arg1;
- (id)accessories;
- (id)copyWithValueSource:(id)arg1;
- (id)namingComponentForHomeKitObject;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithHome:(id)arg1 containingItem:(id)arg2;
- (void)_getDesiredItemDescription:(id *)arg1 controlDescription:(id *)arg2 withSourceItemResults:(id)arg3;
- (id)_characteristicTypeToTargetValuesMap;
- (void)addActionBuilder:(id)arg1;
- (id)serviceActionItemForChildServiceItem:(id)arg1;

@end
