/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

#import <Home/Swift-Protocol.h>

@class HFDiscoveredAccessory, HMHome, NSSet, NSString;

@protocol HFCharacteristicValueSource, HFHomeKitObject;

@interface HFDiscoveredAccessoryItem : HFItem <Swift>

{
    id <HFCharacteristicValueSource> _valueSource;
    HFDiscoveredAccessory *_discoveredAccessory;
}

@property (nonatomic, readonly) HFDiscoveredAccessory *discoveredAccessory;
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
- (id)initWithDiscoveredAccessory:(id)arg1;
- (id)initWithDiscoveredAccessory:(id)arg1 valueSource:(id)arg2;

@end
