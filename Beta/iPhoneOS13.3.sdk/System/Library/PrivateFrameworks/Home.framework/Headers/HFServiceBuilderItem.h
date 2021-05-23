/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

#import <Home/Swift-Protocol.h>

@class HFServiceBuilder, HFServiceItem, HMHome, NSSet, NSString;

@protocol HFCharacteristicValueSource, HFHomeKitObject;

@interface HFServiceBuilderItem : HFItem <Swift>

{
    HFServiceBuilder *_serviceBuilder;
    HFServiceItem *_serviceItem;
}

@property (nonatomic, readonly) HFServiceItem *serviceItem;
@property (nonatomic, readonly) HFServiceBuilder *serviceBuilder;
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
- (id)initWithServiceBuilder:(id)arg1;
- (id)initWithServiceBuilder:(id)arg1 valueSource:(id)arg2;

@end
