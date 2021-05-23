/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@protocol HFCharacteristicValueSource;

@interface HFMediaAccessoryItemProvider : HFItemProvider

{
    _Bool _includeMediaSystems;
    CDUnknownBlockType _filter;
    HMHome *_home;
    NSMutableSet *_mediaAccessoryItems;
    id <HFCharacteristicValueSource> _overrideValueSource;
}

@property (retain, nonatomic) NSMutableSet *mediaAccessoryItems;
@property (retain, nonatomic) id <HFCharacteristicValueSource> overrideValueSource;
@property (copy, nonatomic) CDUnknownBlockType filter;
@property (nonatomic, readonly) _Bool includeMediaSystems;
@property (retain, nonatomic) id <HFCharacteristicValueSource> valueSource;
@property (nonatomic, readonly) HMHome *home;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)items;
- (id)initWithHome:(id)arg1;
- (id)reloadItems;
- (id)invalidationReasons;
- (id)initWithHome:(id)arg1 includeMediaSystems:(_Bool)arg2;

@end
