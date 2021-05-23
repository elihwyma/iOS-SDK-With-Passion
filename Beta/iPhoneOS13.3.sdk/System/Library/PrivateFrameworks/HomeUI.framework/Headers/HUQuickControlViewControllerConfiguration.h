/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class HMHome;

@protocol HFCharacteristicValueSource, HUQuickControlItemUpdating;

@interface HUQuickControlViewControllerConfiguration : NSObject

{
    _Bool _copyItems;
    HMHome *_home;
    id <HFCharacteristicValueSource> _valueSource;
    id <HUQuickControlItemUpdating> _itemUpdater;
}

@property (nonatomic, readonly) HMHome *home;
@property (retain, nonatomic) id <HFCharacteristicValueSource> valueSource;
@property (retain, nonatomic) id <HUQuickControlItemUpdating> itemUpdater;
@property (nonatomic) _Bool copyItems;

- (id)initWithHome:(id)arg1;

@end
