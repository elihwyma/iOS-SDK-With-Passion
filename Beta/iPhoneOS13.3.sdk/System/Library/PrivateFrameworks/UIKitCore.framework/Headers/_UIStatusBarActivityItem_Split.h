/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarActivityItem_SyncOnly.h>

@class _UIStatusBarActivityIndicator, _UIStatusBarActivityView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarActivityItem_Split : _UIStatusBarActivityItem_SyncOnly

{
    _UIStatusBarActivityView *_activityView;
    _UIStatusBarActivityIndicator *_syncStartView;
}

@property (retain, nonatomic) _UIStatusBarActivityView *activityView;
@property (retain, nonatomic) _UIStatusBarActivityIndicator *syncStartView;

+ (id)syncStartDisplayIdentifier;
+ (id)pillDisplayIdentifier;

- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)viewForIdentifier:(id)arg1;
- (struct UIEdgeInsets)activityIndicatorAlignmentRectInsets;
- (void)_create_activityView;
- (void)_create_syncStartView;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1;

@end
