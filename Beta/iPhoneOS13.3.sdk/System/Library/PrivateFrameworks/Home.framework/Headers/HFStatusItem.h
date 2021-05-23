/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

@class HMHome, HMRoom;

@protocol HFCharacteristicValueSource;

@interface HFStatusItem : HFItem

{
    HMRoom *_room;
    HMHome *_home;
    id <HFCharacteristicValueSource> _valueSource;
}

@property (nonatomic, readonly) HMRoom *room;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) id <HFCharacteristicValueSource> valueSource;

- (id)init;
- (id)filteredServicesOfTypes:(id)arg1;
- (id)standardResultsForBatchReadResponse:(id)arg1 serviceTypes:(id)arg2;
- (id)initWithHome:(id)arg1 room:(id)arg2;
- (id)filteredServicesOfTypes:(id)arg1 containingCharacteristicTypes:(id)arg2;
- (id)initWithHome:(id)arg1 room:(id)arg2 valueSource:(id)arg3;
- (id)filteredServices;
- (id)_filteredServicesOfTypes:(id)arg1 containingCharacteristicTypes:(id)arg2;

@end
