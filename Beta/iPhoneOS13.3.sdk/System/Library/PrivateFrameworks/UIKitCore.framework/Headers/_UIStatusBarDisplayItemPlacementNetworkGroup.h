/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarDisplayItemPlacementGroup.h>

@class _UIStatusBarDisplayItemPlacementCellularGroup, _UIStatusBarDisplayItemPlacementWifiGroup;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDisplayItemPlacementNetworkGroup : _UIStatusBarDisplayItemPlacementGroup

{
    _UIStatusBarDisplayItemPlacementCellularGroup *_cellularGroup;
    _UIStatusBarDisplayItemPlacementWifiGroup *_wifiGroup;
}

@property (nonatomic, readonly) _UIStatusBarDisplayItemPlacementCellularGroup *cellularGroup;
@property (nonatomic, readonly) _UIStatusBarDisplayItemPlacementWifiGroup *wifiGroup;

+ (id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 cellularItemClass:(Class)arg3 wifiItemClass:(Class)arg4 cellularTypeClass:(Class)arg5 includeCellularName:(_Bool)arg6;
+ (id)_groupWithCellularGroup:(id)arg1 wifiGroup:(id)arg2 includeCellularName:(_Bool)arg3;
+ (id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 cellularItemClass:(Class)arg3 wifiItemClass:(Class)arg4 includeCellularName:(_Bool)arg5;
+ (id)secondaryGroupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 cellularItemClass:(Class)arg3 wifiItemClass:(Class)arg4;

@end
