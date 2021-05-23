/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarIndicatorItem.h>

@class _UIStatusBarFocusableImageView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarRadarItem : _UIStatusBarIndicatorItem

{
    _UIStatusBarFocusableImageView *_radarItemView;
}

@property (retain, nonatomic) _UIStatusBarFocusableImageView *radarItemView;

- (id)imageView;
- (id)imageForUpdate:(id)arg1;
- (id)indicatorEntryKey;
- (id)viewForIdentifier:(id)arg1;
- (void)_create_radarItemView;

@end
