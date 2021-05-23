/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarDisplayItemPlacementGroup.h>

@class NSArray, _UIStatusBarDisplayItemPlacement;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDisplayItemPlacementCellularGroup : _UIStatusBarDisplayItemPlacementGroup

{
    _UIStatusBarDisplayItemPlacement *_signalStrengthPlacement;
    _UIStatusBarDisplayItemPlacement *_warningPlacement;
    _UIStatusBarDisplayItemPlacement *_typePlacement;
    _UIStatusBarDisplayItemPlacement *_namePlacement;
    _UIStatusBarDisplayItemPlacement *_callForwardingPlacement;
    _UIStatusBarDisplayItemPlacement *_badgePlacement;
    _UIStatusBarDisplayItemPlacement *_rawPlacement;
    NSArray *_placementsAffectedByAirplaneMode;
}

@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *signalStrengthPlacement;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *warningPlacement;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *typePlacement;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *namePlacement;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *callForwardingPlacement;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *badgePlacement;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *rawPlacement;
@property (retain, nonatomic) NSArray *placementsAffectedByAirplaneMode;

@end
