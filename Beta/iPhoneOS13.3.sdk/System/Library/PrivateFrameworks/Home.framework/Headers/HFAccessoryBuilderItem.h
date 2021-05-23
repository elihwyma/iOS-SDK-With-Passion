/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

#import <Home/Swift-Protocol.h>

@class HFAccessoryBuilder, HMHome, NSSet, NSString;

@protocol HFCharacteristicValueSource, HFHomeKitObject, HFServiceLikeItem;

@interface HFAccessoryBuilderItem : HFItem <Swift>

{
    HFAccessoryBuilder *_accessoryBuilder;
    HFItem<HFServiceLikeItem> *_accessoryItem;
}

@property (retain, nonatomic) HFAccessoryBuilder *accessoryBuilder;
@property (retain, nonatomic) HFItem<HFServiceLikeItem> *accessoryItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <HFHomeKitObject> homeKitObject;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) NSSet *services;
@property (nonatomic, readonly) id <HFCharacteristicValueSource> valueSource;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)accessories;
- (id)copyWithValueSource:(id)arg1;
- (id)namingComponentForHomeKitObject;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithAccessoryBuilder:(id)arg1 valueSource:(id)arg2;

@end
