/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarItem.h>

@class _UIBatteryView, _UIStaticBatteryView, _UIStatusBarImageView, _UIStatusBarStringView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarBatteryItem : _UIStatusBarItem

{
    _Bool _highlighted;
    _Bool _disableAlwaysShowPercentageWhenExpanded;
    _UIBatteryView *_batteryView;
    _UIStaticBatteryView *_staticBatteryView;
    _UIStatusBarImageView *_chargingView;
    _UIStatusBarStringView *_percentView;
}

@property (retain, nonatomic) _UIBatteryView *batteryView;
@property (retain, nonatomic) _UIStaticBatteryView *staticBatteryView;
@property (retain, nonatomic) _UIStatusBarImageView *chargingView;
@property (retain, nonatomic) _UIStatusBarStringView *percentView;
@property (nonatomic) _Bool highlighted;
@property (nonatomic) _Bool disableAlwaysShowPercentageWhenExpanded;

+ (id)iconDisplayIdentifier;
+ (id)staticIconDisplayIdentifier;
+ (id)chargingDisplayIdentifier;
+ (id)percentDisplayIdentifier;

- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)viewForIdentifier:(id)arg1;
- (id)dependentEntryKeys;
- (void)_create_batteryView;
- (void)_create_staticBatteryView;
- (void)_create_chargingView;
- (void)_create_percentView;

@end
