/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemProvider.h>

@class HMHome, NSArray, NSMutableSet;

@protocol HFCharacteristicValueSource;

@interface HFServiceItemProvider : HFItemProvider

{
    HMHome *_home;
    CDUnknownBlockType _filter;
    CDUnknownBlockType _sourceServiceGenerator;
    NSMutableSet *_serviceItems;
    NSArray *_serviceTypes;
    id <HFCharacteristicValueSource> _overrideValueSource;
}

@property (retain, nonatomic) NSMutableSet *serviceItems;
@property (retain, nonatomic) NSArray *serviceTypes;
@property (retain, nonatomic) id <HFCharacteristicValueSource> overrideValueSource;
@property (nonatomic, readonly) HMHome *home;
@property (copy, nonatomic) CDUnknownBlockType filter;
@property (copy, nonatomic) CDUnknownBlockType sourceServiceGenerator;
@property (retain, nonatomic) id <HFCharacteristicValueSource> valueSource;

+ (id)standardServices;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)items;
- (id)initWithHome:(id)arg1;
- (id)reloadItems;
- (id)invalidationReasons;
- (id)initWithHome:(id)arg1 serviceTypes:(id)arg2;

@end
