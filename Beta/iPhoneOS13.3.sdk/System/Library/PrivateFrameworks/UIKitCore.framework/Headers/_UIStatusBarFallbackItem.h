/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarItem.h>

@class _UIStatusBarStringView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarFallbackItem : _UIStatusBarItem

{
    _UIStatusBarStringView *_label;
}

@property (retain, nonatomic) _UIStatusBarStringView *label;

- (id)viewForIdentifier:(id)arg1;
- (_Bool)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;
- (void)_create_label;

@end
