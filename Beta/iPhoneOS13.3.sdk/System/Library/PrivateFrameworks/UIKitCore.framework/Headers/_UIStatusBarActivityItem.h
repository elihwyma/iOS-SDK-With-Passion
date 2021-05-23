/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarItem.h>

@class _UIStatusBarActivityIndicator;

__attribute__((visibility("hidden")))
@interface _UIStatusBarActivityItem : _UIStatusBarItem

{
    _UIStatusBarActivityIndicator *_activityIndicator;
}

@property (retain, nonatomic) _UIStatusBarActivityIndicator *activityIndicator;
@property (nonatomic, readonly) struct UIEdgeInsets activityIndicatorAlignmentRectInsets;

- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)viewForIdentifier:(id)arg1;
- (void)_create_activityIndicator;
- (_Bool)_enableForType:(long long)arg1;
- (id)dependentEntryKeys;

@end
