/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarDisplayItemPlacementGroup.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDisplayItemPlacementIndicatorsGroup : _UIStatusBarDisplayItemPlacementGroup

{
    NSArray *_stablePlacements;
    NSArray *_unstablePlacements;
}

@property (copy, nonatomic, readonly) NSArray *stablePlacements;
@property (copy, nonatomic, readonly) NSArray *unstablePlacements;

+ (id)activityItemDisplayIdentifier;
+ (id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 bluetoothPaddingInset:(double)arg3;

@end
