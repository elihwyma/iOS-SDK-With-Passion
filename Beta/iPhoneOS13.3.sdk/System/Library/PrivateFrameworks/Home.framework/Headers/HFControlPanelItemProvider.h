/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemProvider.h>

@class HFItem, NSSet;

@protocol HFCharacteristicValueSource, NSCopying;

@interface HFControlPanelItemProvider : HFItemProvider

{
    HFItem<NSCopying> *_item;
    id <HFCharacteristicValueSource> _valueSource;
    CDUnknownBlockType _filter;
    NSSet *_controlPanelItems;
}

@property (copy, nonatomic) NSSet *controlPanelItems;
@property (copy, nonatomic, readonly) HFItem<NSCopying> *item;
@property (nonatomic, readonly) id <HFCharacteristicValueSource> valueSource;
@property (copy, nonatomic) CDUnknownBlockType filter;

+ (_Bool)prefersNonBlockingReloads;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)items;
- (id)reloadItems;
- (id)invalidationReasons;
- (id)initWithItem:(id)arg1 valueSource:(id)arg2;
- (CDUnknownBlockType)controlPanelItemComparator;

@end
