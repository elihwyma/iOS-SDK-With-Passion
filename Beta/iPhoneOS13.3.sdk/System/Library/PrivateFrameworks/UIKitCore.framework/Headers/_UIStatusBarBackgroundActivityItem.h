/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarIndicatorItem.h>

@class _UIStatusBarPillView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarBackgroundActivityItem : _UIStatusBarIndicatorItem

{
    _UIStatusBarPillView *_backgroundView;
}

@property (retain, nonatomic) _UIStatusBarPillView *backgroundView;

+ (id)backgroundDisplayIdentifier;

- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)indicatorEntryKey;
- (id)systemImageNameForUpdate:(id)arg1;
- (id)createDisplayItemForIdentifier:(id)arg1;
- (id)viewForIdentifier:(id)arg1;
- (id)_backgroundActivityViewForIdentifier:(id)arg1;
- (id)_backgroundColorForActivityType:(long long)arg1;
- (_Bool)_shouldPulseForActivityType:(long long)arg1 traitCollection:(id)arg2;
- (id)_systemImageNameForActivityType:(long long)arg1;
- (id)_imageNameForActivityType:(long long)arg1;
- (void)_create_backgroundView;
- (id)imageNameForUpdate:(id)arg1;

@end
