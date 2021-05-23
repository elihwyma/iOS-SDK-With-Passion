/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarItem.h>

@class _UIStatusBarStringView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarTimeItem : _UIStatusBarItem

{
    _UIStatusBarStringView *_timeView;
    _UIStatusBarStringView *_shortTimeView;
    _UIStatusBarStringView *_pillTimeView;
    _UIStatusBarStringView *_dateView;
}

@property (retain, nonatomic) _UIStatusBarStringView *timeView;
@property (retain, nonatomic) _UIStatusBarStringView *shortTimeView;
@property (retain, nonatomic) _UIStatusBarStringView *pillTimeView;
@property (retain, nonatomic) _UIStatusBarStringView *dateView;

+ (id)timeDisplayIdentifier;
+ (id)shortTimeDisplayIdentifier;
+ (id)pillTimeDisplayIdentifier;
+ (id)dateDisplayIdentifier;

- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)viewForIdentifier:(id)arg1;
- (id)dependentEntryKeys;
- (void)_create_timeView;
- (void)_create_shortTimeView;
- (void)_create_pillTimeView;
- (void)_create_dateView;

@end
