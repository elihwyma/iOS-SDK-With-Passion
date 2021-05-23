/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarItem.h>

@class _UIStatusBarImageView, _UIStatusBarStringView, _UIStatusBarWifiSignalView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarWifiItem : _UIStatusBarItem

{
    _UIStatusBarWifiSignalView *_signalView;
    _UIStatusBarImageView *_networkIconView;
    _UIStatusBarStringView *_rawStringView;
}

@property (retain, nonatomic) _UIStatusBarWifiSignalView *signalView;
@property (retain, nonatomic) _UIStatusBarImageView *networkIconView;
@property (retain, nonatomic) _UIStatusBarStringView *rawStringView;

+ (id)iconDisplayIdentifier;
+ (id)signalStrengthDisplayIdentifier;
+ (id)rawDisplayIdentifier;
+ (id)groupWithPriority:(long long)arg1;

- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)viewForIdentifier:(id)arg1;
- (id)dependentEntryKeys;
- (id)_backgroundColorForUpdate:(id)arg1 entry:(id)arg2;
- (id)_fillColorForUpdate:(id)arg1 entry:(id)arg2;
- (void)_create_signalView;
- (void)_create_rawStringView;
- (void)_create_networkIconView;
- (long long)_barCountForUpdate:(id)arg1;
- (double)_barThicknessForUpdate:(id)arg1;
- (double)_interspaceForUpdate:(id)arg1;
- (double)_totalWidthForUpdate:(id)arg1;

@end
