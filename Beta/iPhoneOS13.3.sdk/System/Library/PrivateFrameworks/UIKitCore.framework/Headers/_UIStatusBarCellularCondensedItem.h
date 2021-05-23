/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarCellularItem.h>

@class _UIStatusBarDualCellularSignalView, _UIStatusBarMultilineStringView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarCellularCondensedItem : _UIStatusBarCellularItem

{
    _Bool _reducesFontSize;
    _UIStatusBarDualCellularSignalView *_dualSignalView;
    _UIStatusBarMultilineStringView *_dualNameView;
}

@property (retain, nonatomic) _UIStatusBarDualCellularSignalView *dualSignalView;
@property (retain, nonatomic) _UIStatusBarMultilineStringView *dualNameView;
@property (nonatomic) _Bool reducesFontSize;

+ (id)dualSignalStrengthDisplayIdentifier;
+ (id)dualNameDisplayIdentifier;

- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)viewForIdentifier:(id)arg1;
- (id)dependentEntryKeys;
- (id)initWithIdentifier:(id)arg1 statusBar:(id)arg2;
- (_Bool)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;
- (id)entryForDisplayItemWithIdentifier:(id)arg1;
- (id)_stringForCellularType:(long long)arg1;
- (id)_singleCellularEntryMatching:(CDUnknownBlockType)arg1;
- (id)_fontForEntry:(id)arg1 styleAttributes:(id)arg2 baselineOffset:(double *)arg3;
- (void)applyStyleAttributes:(id)arg1 toDisplayItem:(id)arg2;
- (void)_create_dualSignalView;
- (void)_create_dualNameView;

@end
