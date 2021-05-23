/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemGroupItem.h>

#import <Home/Swift-Protocol.h>

@class HMAccessoryNetworkProtectionGroup, NSSet, NSString;

@protocol HFCharacteristicValueSource, HFHomeKitObject;

@interface HFNetworkConfigurationGroupItem : HFItemGroupItem <Swift>

{
    HMAccessoryNetworkProtectionGroup *_group;
    id <HFCharacteristicValueSource> _valueSource;
}

@property (nonatomic, readonly) HMAccessoryNetworkProtectionGroup *group;
@property (nonatomic, readonly) NSSet *profiles;
@property (nonatomic, readonly) id <HFCharacteristicValueSource> valueSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <HFHomeKitObject> homeKitObject;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithValueSource:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithGroup:(id)arg1 valueSource:(id)arg2;

@end
