/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarIndicatorItem.h>

@class _UIStatusBarImageView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarBluetoothItem : _UIStatusBarIndicatorItem

{
    _UIStatusBarImageView *_batteryImageView;
}

@property (retain, nonatomic) _UIStatusBarImageView *batteryImageView;

+ (id)batteryDisplayIdentifier;

- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)indicatorEntryKey;
- (id)systemImageNameForUpdate:(id)arg1;
- (id)viewForIdentifier:(id)arg1;
- (id)_batteryFillColorForEntry:(id)arg1 usingTintColor:(id)arg2;
- (void)_create_batteryImageView;

@end
