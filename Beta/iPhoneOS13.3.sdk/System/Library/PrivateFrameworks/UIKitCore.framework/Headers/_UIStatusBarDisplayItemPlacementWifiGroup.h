/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarDisplayItemPlacementGroup.h>

@class _UIStatusBarDisplayItemPlacement;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDisplayItemPlacementWifiGroup : _UIStatusBarDisplayItemPlacementGroup

{
    _UIStatusBarDisplayItemPlacement *_signalStrengthPlacement;
    _UIStatusBarDisplayItemPlacement *_iconPlacement;
    _UIStatusBarDisplayItemPlacement *_rawPlacement;
}

@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *signalStrengthPlacement;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *iconPlacement;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *rawPlacement;

@end
