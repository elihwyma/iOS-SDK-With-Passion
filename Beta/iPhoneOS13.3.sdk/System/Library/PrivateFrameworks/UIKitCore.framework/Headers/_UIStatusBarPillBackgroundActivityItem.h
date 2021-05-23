/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarBackgroundActivityItem.h>

@class _UIStatusBarPillView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarPillBackgroundActivityItem : _UIStatusBarBackgroundActivityItem

{
    long long _previousType;
    _UIStatusBarPillView *_combinedView;
    struct CGSize _pillSize;
}

@property (nonatomic) long long previousType;
@property (retain, nonatomic) _UIStatusBarPillView *combinedView;
@property (nonatomic) struct CGSize pillSize;

+ (id)pillCombinedDisplayIdentifier;
+ (_Bool)shouldKeepIconVisibleForActivityType:(long long)arg1;

- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)imageForUpdate:(id)arg1;
- (id)createDisplayItemForIdentifier:(id)arg1;
- (id)viewForIdentifier:(id)arg1;
- (id)_backgroundActivityViewForIdentifier:(id)arg1;
- (id)_backgroundColorForActivityType:(long long)arg1;
- (id)initWithIdentifier:(id)arg1 statusBar:(id)arg2;
- (_Bool)_shouldBounceWhenTransitioningFromType:(long long)arg1 toType:(long long)arg2;
- (void)updatedDisplayItemsWithData:(id)arg1;
- (void)_create_combinedView;
- (_Bool)shouldUpdateIndicatorForIdentifier:(id)arg1;

@end
