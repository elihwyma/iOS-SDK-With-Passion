/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/SBHIconZoomSettings.h>

@interface SBHCenterZoomSettings : SBHIconZoomSettings

{
    _Bool _preferCenterOfIconGrid;
    _Bool _zoomViewBelowIcons;
    double _centerRowCoordinate;
    long long _distanceEffect;
    double _firstHopIncrement;
    double _hopIncrementAcceleration;
    double _dockMass;
}

@property (nonatomic) _Bool preferCenterOfIconGrid;
@property (nonatomic) double centerRowCoordinate;
@property (nonatomic) long long distanceEffect;
@property (nonatomic) double firstHopIncrement;
@property (nonatomic) double hopIncrementAcceleration;
@property (nonatomic) double dockMass;
@property (nonatomic) _Bool zoomViewBelowIcons;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
