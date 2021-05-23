/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;

@interface NTKSiderealWaypointsView : UIView

{
    NSArray *_waypoints;
    double _orbitDiameter;
    UIView *_orbitContainerView;
    double _waypointDiameter;
    UIView *_waypointContainerView;
    double _dialDiameter;
    UIView *_separatorLinesContainer;
    NSMutableArray *_separatorLines;
}

- (void)setWaypoints:(id)arg1;
- (id)_newWaypointView;
- (void)_updateSeparatorLines;
- (id)_newSeparatorLineForWaypoint:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 orbitDiameter:(double)arg2 dialDiameter:(double)arg3 waypoints:(id)arg4;

@end
