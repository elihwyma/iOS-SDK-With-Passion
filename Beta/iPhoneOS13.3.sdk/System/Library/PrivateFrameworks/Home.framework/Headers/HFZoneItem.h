/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

#import <Home/Swift-Protocol.h>

@class HMHome, HMZone, NSString;

@protocol HFHomeKitObject;

@interface HFZoneItem : HFItem <Swift>

{
    HMZone *_zone;
    HMHome *_home;
}

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) HMZone *zone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <HFHomeKitObject> homeKitObject;

+ (id)na_identity;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (_Bool)hf_canDeleteItem;
- (id)hf_deleteItem;
- (id)initWithHome:(id)arg1 zone:(id)arg2;

@end
