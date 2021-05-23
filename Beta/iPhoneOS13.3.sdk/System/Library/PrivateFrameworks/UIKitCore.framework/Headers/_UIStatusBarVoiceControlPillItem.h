/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarVoiceControlItem.h>

@class _UIStatusBarPillView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarVoiceControlPillItem : _UIStatusBarVoiceControlItem

{
    _UIStatusBarPillView *_pillView;
    struct CGSize _pillSize;
}

@property (retain, nonatomic) _UIStatusBarPillView *pillView;
@property (nonatomic) struct CGSize pillSize;

- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (double)imageOpacityForVoiceControlType:(long long)arg1;
- (id)createDisplayItemForIdentifier:(id)arg1;
- (id)_backgroundColorForVoiceControlType:(long long)arg1 styleAttributes:(id)arg2;
- (_Bool)_pulsingForVoiceControlType:(long long)arg1;
- (void)_create_pillView;
- (id)viewForIdentifier:(id)arg1;

@end
