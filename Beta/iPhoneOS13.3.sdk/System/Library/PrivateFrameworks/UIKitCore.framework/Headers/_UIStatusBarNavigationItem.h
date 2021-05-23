/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarItem.h>

@class _UIStatusBarStringView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarNavigationItem : _UIStatusBarItem

{
    _UIStatusBarStringView *_nameView;
}

@property (retain, nonatomic) _UIStatusBarStringView *nameView;

- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)createDisplayItemForIdentifier:(id)arg1;
- (id)viewForIdentifier:(id)arg1;
- (id)dependentEntryKeys;
- (void)_create_nameView;

@end
