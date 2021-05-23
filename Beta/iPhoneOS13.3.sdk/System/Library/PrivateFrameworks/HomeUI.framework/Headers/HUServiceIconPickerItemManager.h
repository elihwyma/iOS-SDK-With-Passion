/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HFServiceBuilder;

@interface HUServiceIconPickerItemManager : HFItemManager

{
    HFServiceBuilder *_serviceBuilder;
}

@property (nonatomic, readonly) HFServiceBuilder *serviceBuilder;

- (id)_serviceType;
- (id)_buildItemProvidersForHome:(id)arg1;
- (CDUnknownBlockType)_comparatorForSectionIdentifier:(id)arg1;
- (id)initWithServiceBuilder:(id)arg1 delegate:(id)arg2;

@end
