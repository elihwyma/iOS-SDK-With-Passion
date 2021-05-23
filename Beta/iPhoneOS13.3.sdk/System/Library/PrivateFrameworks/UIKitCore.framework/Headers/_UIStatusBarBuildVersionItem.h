/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarItem.h>

@class _UIStatusBarStringView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarBuildVersionItem : _UIStatusBarItem

{
    _UIStatusBarStringView *_buildVersionView;
}

@property (retain, nonatomic) _UIStatusBarStringView *buildVersionView;

- (_Bool)needsUpdate;
- (id)viewForIdentifier:(id)arg1;
- (void)_create_buildVersionView;
- (_Bool)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;

@end
