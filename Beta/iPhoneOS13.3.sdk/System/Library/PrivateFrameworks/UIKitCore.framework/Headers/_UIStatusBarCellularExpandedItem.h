/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarCellularItem.h>

@class _UIStatusBarBadgeView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarCellularExpandedItem : _UIStatusBarCellularItem

{
    _UIStatusBarBadgeView *_badgeView;
}

@property (retain, nonatomic) _UIStatusBarBadgeView *badgeView;

+ (id)badgeDisplayIdentifier;
+ (id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 typeClass:(Class)arg3;

- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)viewForIdentifier:(id)arg1;
- (void)_create_badgeView;

@end
