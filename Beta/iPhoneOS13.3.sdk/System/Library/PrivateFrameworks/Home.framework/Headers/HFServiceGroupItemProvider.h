/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@protocol HFCharacteristicValueSource;

@interface HFServiceGroupItemProvider : HFItemProvider

{
    CDUnknownBlockType _filter;
    HMHome *_home;
    NSMutableSet *_serviceGroupItems;
    id <HFCharacteristicValueSource> _overrideValueSource;
}

@property (retain, nonatomic) NSMutableSet *serviceGroupItems;
@property (retain, nonatomic) id <HFCharacteristicValueSource> overrideValueSource;
@property (copy, nonatomic) CDUnknownBlockType filter;
@property (retain, nonatomic) id <HFCharacteristicValueSource> valueSource;
@property (nonatomic, readonly) HMHome *home;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)items;
- (id)initWithHome:(id)arg1;
- (id)reloadItems;
- (id)invalidationReasons;

@end
