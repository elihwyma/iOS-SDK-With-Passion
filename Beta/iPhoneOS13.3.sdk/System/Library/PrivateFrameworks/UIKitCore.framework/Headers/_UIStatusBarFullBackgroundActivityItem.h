/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarBackgroundActivityItem.h>

@class _UIStatusBarStringView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarFullBackgroundActivityItem : _UIStatusBarBackgroundActivityItem

{
    _UIStatusBarStringView *_detailStringView;
}

@property (retain, nonatomic) _UIStatusBarStringView *detailStringView;

+ (id)detailDisplayIdentifier;

- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)viewForIdentifier:(id)arg1;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1;
- (void)_create_backgroundView;
- (void)_create_detailStringView;

@end
